%%
Data_control = load("Analyze/Data_compare.mat");
Data_control = Data_control.Data_yukai;
% load("Analyze/hd_gait_v1.mat")
% load("Analyze/hd_gait_v2.mat")
Data_me = Data;
close all;

%%
[w_me,~,l_me] = size(Data_me.hd.Data);
hd_me = reshape(Data_me.hd.Data,[w_me,l_me]);
time_me = Data_me.computer_time.Time;

[w_control,~,l_control] = size(Data_control.hd.Data);
hd_control = reshape(Data_control.hd.Data,[w_control,l_control]);
time_control = Data_control.computer_time.Time;

%%
figure()
% title_list = {"abduction-sw","rotation-sw","swing leg pitch","swing leg length", "toe",...
%              "abduction-st","rotation-st","stance leg pitch","stance leg length","toe"};
for i = 1:1
    id = i;
    % subplot(2,5,id)
    grid on
    box on
    hold on
    % plot(time_me,hd_me(id,:),'r')
    % plot(time_control,hd_control(id,:),'b-.')
%   GRF = movmean(reshape(Data_me.s_LR.Data,[l_me,2]),5);
    GRF = movmean(reshape(Data_me.GRF.Data,[l_me,2]),2);
    plot(time_me,GRF)
    ylim([-300,600])
%   title(title_list{i})
end
% legend("new","yukai",'contact')
legend("new",'contact')

%%
GRF_fil = GRF * 0;
for i = 2:length(GRF_fil)
    GRF_fil(i,:) = YToolkits.first_order_filter(GRF_fil(i-1,:),GRF(i,:),0.5);  
end
hold on
plot(time_me,GRF_fil)
plot(time_me,movmean(reshape(Data_me.GRF.Data,[l_me,2]),2))

%%
%{
    figure()
    hold on
    plot(time_control,reshape(Data_control.stanceLeg.Data,[l_control,1]),'b-.')
    plot(time_me,reshape(Data_me.stanceLeg.Data,[l_me,1]),'r')
    legend("control","me")
%}
