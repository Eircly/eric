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
%% 定义系统控制
K = [1+g/d 2];
%% 定义闭环系统
sys_cl=ss(A-B*K,[0; 0],C,D);
%% 对初始条件的响应
t=0:0.01:10;
[y,t,z]=initial(sys_cl,z0,t);
%% 绘图
%% z1
subplot (2,1,1);
plot(t,z(:,1));
grid on
%% z1
subplot (2,1,2);
plot(t,z(:,2));
grid on
