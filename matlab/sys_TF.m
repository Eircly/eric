clc;clear;close all;
%% ����Control Package,ʹ��Matlab��ע����1��
%pkg load control
%% ����G(s)
s = tf('s');
G_s = (s+1)/(s+3);
%% ����C(s)
C_s =  tf([1],[1 2]);
%% �ջ����ݺ���
%% ����1
Gcl_1 = (G_s*C_s)/(1+C_s*G_s);
%% ����2
Gcl_2 = feedback(G_s*C_s,1);