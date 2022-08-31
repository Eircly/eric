clc;clear;close all;
%% 加载Control Package,使用Matlab则注释下1行
% pkg load control
%% 定义仿真区间
tspan =[0: 0.1 : 20];
%% 初始状态
z0 = [1;1;0;0];
%% 求解
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

