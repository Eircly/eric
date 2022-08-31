clc;clear;
%% 加载Package，使用Matlab则注释下面两行
%%pkg load control
%%pkg load signal
%% 定义 m, k, b
m = 1 ;  
k = 1 ;
b = 0.5 ;
%% 定义矩阵A,B,C,D
A = [[0,1];
    [-k/m  -b/m]];
B = [0; 1/m ];
C = [1, 0];
D = 0;
%% 建立状态空间方程表达式
sys = ss(A,B,C,D);
%% 从状态空间方程转化为传递函数
[num,den] = ss2tf(A,B,C,D);
G_s=tf(num,den);