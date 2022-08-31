clc;clear;close all;
%% ����Control Package,ʹ��Matlab��ע����1��
%%pkg load control
%% ����G(s)
s = tf('s');
G_s = 1/((s+1)*(s+3));
K = 2;
t = 0:0.1:20;
%% ����ԭ���ݺ������켣������Ӧ
subplot(3,2,1);
rlocus(G_s);
subplot(3,2,2);
sys_1 = feedback(K*G_s, 1);
step (sys_1,t);
%%%% ���岹����C1(s)
sz = -5;
sp = -1;
C1_s = (s-sz)/(s-sp);
%% ʹ�ò�����C1(s)��ĸ��켣������Ӧ
subplot(3,2,3);
rlocus(G_s*C1_s);
subplot(3,2,4);
sys_2 = feedback(K*G_s*C1_s, 1);
step (sys_2,t);  
%%%% ���岹����C2(s)
sz = -0.5;
sp = -0.1;
C2_s = (s-sz)/(s-sp);
%% ʹ�ò�����C1(s)��ĸ��켣������Ӧ
subplot(3,2,5);
rlocus(G_s*C2_s);
subplot(3,2,6);
sys_3 = feedback(K*G_s*C2_s, 1);
step (sys_3,t);  