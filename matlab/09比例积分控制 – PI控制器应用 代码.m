clc;clear;close all;
%% ����Control Package,ʹ��Matlab��ע����1��
%%pkg load control
%% �������
S = 5;
x0 = [70];
h = 175;
a = 20;
Ei = [2500,2100,2500];
alpha = 1.3;
Ea = [0, 0, 500];
%% ����G(s)
G_s = tf([1],[7000,10*alpha]);
%% �����Ŷ�
d = -alpha*(6.25*h-5*a+S);
D_s = tf([d],[1 0]);
%%%% �����������΢�ֿ���
kp = 200;
ki = 1; 
kd = 0;
C_s = pid(kp, ki, kd); 
%% ����
x0 = [90];
R_s = tf([65],[1 0]);
sys_cl = G_s*(C_s + D_s/R_s + 7000*x0/R_s)/(1 + G_s* C_s);
%% ��������
t = 0: 1: 3000;
R = 65;
x = R*step(sys_cl,t);
plot (x);
grid on;
%%
