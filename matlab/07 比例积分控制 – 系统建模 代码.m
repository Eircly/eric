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
%% 定义扰动和输入
d = -alpha*(6.25*h-5*a+S);
u1 = (Ei(1)-Ea(1));
u2 = (Ei(2)-Ea(2));
u3 = (Ei(3)-Ea(3));
%% 系统的输出
t = 0: 1: 3000;
x1 = (u1+d)* step(G_s,t) + 7000 * x0 * impulse(G_s,t) ;
x2 = (u2+d)* step(G_s,t) + 7000 * x0 * impulse(G_s,t) ;
x3 = (u3+d)* step(G_s,t) + 7000 * x0 * impulse(G_s,t) ;
%% 绘图
plot (x1, 'b');
hold on 
plot (x2, 'k');
hold on 
plot (x3, 'r');
grid on;
hold off; 
legend ('Case 1', 'Case 2', 'Case 3');
