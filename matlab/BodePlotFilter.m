clc;clear;close all;
%% ����Control Package,ʹ��Matlab��ע����1��
%%pkg load control;
%% ����G(s)
G_s = tf([1],[1 1]);
%% ������������ + ����
t = 0 : 0.01 : 20;
u = sin(t);
u =  u + 0.2*rand(size(t));
subplot (2,1,1);
plot (t,u);
grid on;
%% ͨ���˲���
y = lsim (G_s, u, t);
subplot (2,1,2);
plot (t,y);
grid on;