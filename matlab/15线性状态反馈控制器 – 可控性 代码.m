clc;clear;close all;
%% ����Control Package,ʹ��Matlab��ע����1��
%%pkg load control
%% �������A,B
A =[[ 0 1 0 0 ];
    [ -100 0 100 0];
    [0 0 0 1];
    [100 0 -10 0]
    ];
B=[0;1;0;0];
Co=ctrb(A,B);
R = rank(Co) ;    