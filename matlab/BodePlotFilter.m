clc;clear;close all;
%% 加载Control Package,使用Matlab则注释下1行
%%pkg load control;
%% 定义G(s)
G_s = tf([1],[1 1]);
%% 定义正弦输入 + 噪音
t = 0 : 0.01 : 20;
u = sin(t);
u =  u + 0.2*rand(size(t));
subplot (2,1,1);
plot (t,u);
grid on;
%% 通过滤波器
y = lsim (G_s, u, t);
subplot (2,1,2);
plot (t,y);
grid on;