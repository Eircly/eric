clc;clear;close all;
%% 加载Control Package,使用Matlab则注释下1行
%%pkg load control
%%定义参数
zeta = [0, 0.2, 0.5, 1, 2];
w_n = 10;
%% 求每一组zeta的单位阶跃响应
t = 0:0.01:3;
colorcode = ['r', 'b', 'g', 'k', 'y'];
for i =1:length(zeta)
  hold on;
  G = tf([w_n^2],[1,2*w_n*zeta(i),w_n^2]);
  step(G,t,colorcode(i));
end 
legend ('zeta = 0', 'zeta = 0.2','zeta = 0.5','zeta = 1','zeta = 2');