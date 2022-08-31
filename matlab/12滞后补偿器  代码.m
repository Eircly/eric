clc;clear;close all;
%% 加载Control Package,使用Matlab则注释下1行
%%pkg load control
%% 定义G(s)
s = tf('s');
G_s = 1/((s+1)*(s+3));
K = 2;
t = 0:0.1:20;
%% 绘制原传递函数根轨迹及其响应
subplot(3,2,1);
rlocus(G_s);
subplot(3,2,2);
sys_1 = feedback(K*G_s, 1);
step (sys_1,t);
%%%% 定义补偿器C1(s)
sz = -5;
sp = -1;
C1_s = (s-sz)/(s-sp);
%% 使用补偿器C1(s)后的根轨迹及其响应
subplot(3,2,3);
rlocus(G_s*C1_s);
subplot(3,2,4);
sys_2 = feedback(K*G_s*C1_s, 1);
step (sys_2,t);  
%%%% 定义补偿器C2(s)
sz = -0.5;
sp = -0.1;
C2_s = (s-sz)/(s-sp);
%% 使用补偿器C1(s)后的根轨迹及其响应
subplot(3,2,5);
rlocus(G_s*C2_s);
subplot(3,2,6);
sys_3 = feedback(K*G_s*C2_s, 1);
step (sys_3,t);  