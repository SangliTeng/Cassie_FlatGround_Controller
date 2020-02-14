GL_yukai = load('GaitLibrary_output_v1_Yukai.mat');
% GL_yukai = load('GaitLibrary_output_v1.mat');
GL_me = load('GaitLibrary_output_v3.mat');
close all;
phase = 0:0.01:1;
vel = -1:0.05:0.25;
% get the output curve
title_list = {"abduction-sw","rotation-sw","swing leg pitch","swing leg length","toe",...
              "abduction-st","rotation-st","stance leg pitch","stance leg length","toe"};
for j = 1:length(vel)
    bezier_yukai = zeros(10,1);
    bezier_me = zeros(10,1);
    bezier_yukai = [];
    bezier_me = [];
    for i = 1:length(phase)
        gaitparams = ControlPolicy(GL_me.GaitLibrary_output,vel(j));
        bezier = YToolkits.bezier(gaitparams.HAlpha,phase(i));
        [bezier(3), bezier(4)] = Forward_Kinematics_p(bezier(3),bezier(4));
        [bezier(8), bezier(9)] = Forward_Kinematics_p(bezier(8),bezier(9));
        % [bezier(3), bezier(4)] = Inverse_Kinematics_p(bezier(3),bezier(4));
        % [bezier(8), bezier(9)] = Inverse_Kinematics_p(bezier(8),bezier(9));
        bezier_me = [bezier_me,bezier];

        gaitparams = ControlPolicy(GL_yukai.GaitLibrary_output,vel(j));
        bezier = YToolkits.bezier(gaitparams.HAlpha,phase(i));
        % [bezier(3), bezier(4)] = Forward_Kinematics_p(bezier(3),bezier(4));
        % [bezier(8), bezier(9)] = Forward_Kinematics_p(bezier(8),bezier(9));
        % [bezier(3), bezier(4)] = Inverse_Kinematics_p(bezier(3),bezier(4));
        % [bezier(8), bezier(9)] = Inverse_Kinematics_p(bezier(8),bezier(9));
        bezier_yukai = [bezier_yukai,bezier];
    end
    bezier_yukai = bezier_yukai';
    bezier_me = bezier_me';
    
    % plot
    
    figure()
    for i = 1:10
        id = i;
        subplot(2,5,id)
        grid on
        box on
        hold on
        plot(phase,bezier_me(:,id),'r')
        plot(phase,bezier_yukai(:,id),'b-.')
        title(title_list{id})
    end
    legend("new","yukai")
    %}
end
%%
function gaitparams = ControlPolicy(GaitLibrary, phi)
    % Saturate interpolation value
    phi = clamp(phi, GaitLibrary.Velocity(1,1), GaitLibrary.Velocity(1,end));
    % Interpolate gaits
    HAlpha_R = interp1(GaitLibrary.Velocity(1,:),GaitLibrary.RightStance.HAlpha, phi);
    HAlpha_L = interp1(GaitLibrary.Velocity(1,:),GaitLibrary.LeftStance.HAlpha, phi);
    ct_R = interp1(GaitLibrary.Velocity(1,:), GaitLibrary.ct, phi);
    ct_L = interp1(GaitLibrary.Velocity(1,:), GaitLibrary.ct, phi);
    gaitparams.HAlpha = reshape(HAlpha_R,10,6);
    % gaitparams.HAlpha(:,1) = obj.hd_last;
    % gaitparams.HAlpha(:,2) = obj.hd_last + obj.dhd_last/ct_R/obj.bezier_degree;
    gaitparams.ct = ct_R;
end