clc;clear;close all;
%% ����Control Package,ʹ��Matlab��ע����1��
%%pkg load control
%% �����������
tspan =[0 40];
z0 = [0;0];
%% ���
[t,z]=ode45(@sys,tspan,z0);
hold on; 
plot (t,z(:,1));
grid on;

