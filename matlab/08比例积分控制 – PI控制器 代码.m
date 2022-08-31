clc;clear;close all;
%% 加载Control Package,使用Matlab则注释下1行
%%pkg load control
%% 定义G(s)
G_s = tf([1], [1,1]);
%% 定义比例积分微分控制
kp = 0;
ki = 1; 
kd = 0;
C_s = pid(kp, ki, kd); 

%% 仿真
sys = feedback (C_s*G_s, 1);
step(sys);
hold on;
