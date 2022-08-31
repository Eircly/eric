clc;clear;close all;
%% ����Control Package,ʹ��Matlab��ע����1��
% pkg load control
%% �����������
tspan =[0: 0.1 : 20];
%% ��ʼ״̬
z0 = [1;1;0;0];
%% ���
[t,z]=ode45(@sys,tspan,z0);
subplot(2,1,1)
plot (t,z(:,1));
hold on;
plot (t,z(:,3));
hold off;
grid on;
subplot(2,1,2)
plot (t,z(:,2));
hold on;
plot (t,z(:,4));
hold off;
grid on;

