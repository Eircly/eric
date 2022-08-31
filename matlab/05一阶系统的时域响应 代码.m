clc;clear;close all;
%% ����Control Package,ʹ��Matlab��ע����1��
% pkg load control
%% ����һ��ϵͳ
G_s = tf([5],[1 5]);
%% ����
subplot(3,1,1)
%% ��λ�弤��Ӧ
impulse(G_s);
%% ��λ��Ծ��Ӧ
subplot(3,1,2)
step(G_s);
%% �Գ�ʼ״̬����Ӧ
subplot(3,1,3)
x0 = 10;
A = -5;
B = -5;
C = 1; 
D = 0;
sys = ss(A,B,C,D);
initial(sys,x0);

