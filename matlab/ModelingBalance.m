clc;clear;close all;
%% 加载Control Package,使用Matlab则注释下1行
%%pkg load control
%% 定义参数
  g=10;
  d=1;
%% 定义矩阵
 A=[0 1;g/d 0];
 B=[0;1];
 C = [1, 0];
 D = 0;
%% 建立状态空间方程表达式
sys = ss(A,B,C,D);
%% 定义初始状态
z0=[pi/20;0];
%% 对初始状态的响应
t=0:0.01:20;
[y,t,z]=initial(sys,z0,t);
plot(t,z(:,1));
hold on;
plot(t,z(:,2));
grid on;
hold off;