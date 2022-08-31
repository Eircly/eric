clc;clear;close all;
%% 加载Control Package,使用Matlab则注释下1行
%%pkg load control

%%定义二阶系统
zeta=0.5;
w_n=1;
G_s = tf([w_n^2],[1,2*w_n*zeta,w_n^2]);

%% 绘图
subplot(3,1,1)
%% 单位冲激响应
impulse(G_s);
%% 单位阶跃响应
subplot(3,1,2)
step (G_s);
%% 对初始状态的响应
subplot(3,1,3)
A = [[0 1];[-w_n^2 -2*zeta*w_n]];
B = [0 ; w_n^2];
C = [1 0]; 
D =0; 
sys = ss(A,B,C,D);
z0 = [1;0];
initial(sys,z0);
