clc;clear;close all;
%% 加载Control Package,使用Matlab则注释下1行
% pkg load control
%% 定义G(s)
s = tf('s');
G_s = (s+1)/(s*(s +2)*(s+3)*(s+4));
rlocus(G_s); 