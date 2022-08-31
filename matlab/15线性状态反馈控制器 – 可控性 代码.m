clc;clear;close all;
%% 加载Control Package,使用Matlab则注释下1行
%%pkg load control
%% 定义矩阵A,B
A =[[ 0 1 0 0 ];
    [ -100 0 100 0];
    [0 0 0 1];
    [100 0 -10 0]
    ];
B=[0;1;0;0];
Co=ctrb(A,B);
R = rank(Co) ;    