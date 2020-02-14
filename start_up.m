%STARTUP Startup routine for Cassie project.

% Copyright 2017 Mikhail S. Jones

% Get project root location
setenv('MW_MINGW64_LOC','D:\mingw-w64')
projectRoot = fileparts(mfilename('fullpath'));
restoredefaultpath;
% Construct paths to cache and code folders
myCacheFolder = fullfile(projectRoot, 'Build', 'Cache');
myCodeFolder = fullfile(projectRoot, 'Build', 'Code');

% Set the file generation folder paths
Simulink.fileGenControl('set',...
    'CacheFolder', myCacheFolder,...
    'CodeGenFolder', myCodeFolder,...
    'createDir', true);

root_dir = pwd;
% Add all subfolders to MATLAB path
addpath(genpath('./'));
addpath('ImLib')
