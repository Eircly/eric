clc;clear;close all;
%% 加载Control Package,使用Matlab则注释下1行
%%pkg load control;
%% 定义G(s)
G1_s = tf([1],[1 100]);
G2_s = tf ([1 0],[1 1]);
G3_s = G1_s * G2_s;
%% 绘图
figure (1) 
bode(G1_s);
figure (2) 
bode(G2_s);
figure (3)
bode(G3_s);