clc;clear;close all;
%% ����Control Package,ʹ��Matlab��ע����1��
% pkg load control
%% ����G(s)
s = tf('s');
G_s = (s+1)/(s*(s +2)*(s+3)*(s+4));
rlocus(G_s); 