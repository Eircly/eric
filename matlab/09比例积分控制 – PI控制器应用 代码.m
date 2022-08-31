clc;clear;close all;
%% 加载Control Package,使用Matlab则注释下1行
%%pkg load control
%% 定义参数
S = 5;
x0 = [70];
h = 175;
a = 20;
Ei = [2500,2100,2500];
alpha = 1.3;
Ea = [0, 0, 500];
%% 定义G(s)
G_s = tf([1],[7000,10*alpha]);
%% 定义扰动
d = -alpha*(6.25*h-5*a+S);
D_s = tf([d],[1 0]);
%%%% 定义比例积分微分控制
kp = 200;
ki = 1; 
kd = 0;
C_s = pid(kp, ki, kd); 
%% 仿真
x0 = [90];
R_s = tf([65],[1 0]);
sys_cl = G_s*(C_s + D_s/R_s + 7000*x0/R_s)/(1 + G_s* C_s);
%% 定义输入
t = 0: 1: 3000;
R = 65;
x = R*step(sys_cl,t);
plot (x);
grid on;
%%
