clc;clear;close all;
%% ����Control Package,ʹ��Matlab��ע����1��
%%pkg load control
%% ����G(s)
G_s = tf([1], [1,1]);
%% �����������΢�ֿ���
kp = 0;
ki = 1; 
kd = 0;
C_s = pid(kp, ki, kd); 

%% ����
sys = feedback (C_s*G_s, 1);
step(sys);
hold on;
