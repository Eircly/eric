clc;clear;close all;
%% 加载Control Package,使用Matlab则注释下1行
%%pkg load control
%% 定义G(s)
s = tf('s');
G_s = 1/((s+1)*(s+3));
K=100;
t = 0: .1: 5;
%% 绘制原传递函数根轨迹及其响应
subplot(2,2,1);
rlocus(G_s);
subplot(2,2,2);
sys_1 = feedback(K*G_s, 1)
step (sys_1,t);
%%%% 定义补偿器C(s)
sz = -5;
sp = -10;
C_s = (s-sz)/(s-sp);
%% 使用补偿器后的根轨迹及其响应
subplot(2,2,3);
rlocus(G_s*C_s);
subplot(2,2,4);
sys_2 = feedback(K*G_s*C_s, 1)
step (sys_2,t);  
