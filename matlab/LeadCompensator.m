clc;clear;close all;
%% ����Control Package,ʹ��Matlab��ע����1��
%%pkg load control
%% ����G(s)
s = tf('s');
G_s = 1/((s+1)*(s+3));
K=100;
t = 0: .1: 5;
%% ����ԭ���ݺ������켣������Ӧ
subplot(2,2,1);
rlocus(G_s);
subplot(2,2,2);
sys_1 = feedback(K*G_s, 1)
step (sys_1,t);
%%%% ���岹����C(s)
sz = -5;
sp = -10;
C_s = (s-sz)/(s-sp);
%% ʹ�ò�������ĸ��켣������Ӧ
subplot(2,2,3);
rlocus(G_s*C_s);
subplot(2,2,4);
sys_2 = feedback(K*G_s*C_s, 1)
step (sys_2,t);  
