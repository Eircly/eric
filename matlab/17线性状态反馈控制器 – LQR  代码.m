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
%% 定义权重系数，求K
q1=[100 0;0 1];
r1=1;
[K1, z, l] = lqr (sys, q1, r1);

q2=[1 0;0 100];
r2=1;
[K2, z, l] = lqr (sys, q2, r2);

q3=[1 0;0 1];
r3=100;
[K3, z, l] = lqr (sys, q3, r3);

%% 定义闭环系统
sys_cl1=ss(A-B*K1,[0;0],C,D);
sys_cl2=ss(A-B*K2,[0;0],C,D);
sys_cl3=ss(A-B*K3,[0;0],C,D);
%% 仿真
%% 对初始条件的响应
t=0:0.01:5;
[y1,t,z1]=initial(sys_cl1,z0,t);
[y2,t,z2]=initial(sys_cl2,z0,t);
[y3,t,z3]=initial(sys_cl3,z0,t);
%% 绘图
%% 状态变量1
subplot(3,1,1);
plot(t,z1(:,1));
hold on;
plot(t,z2(:,1));
hold on;
plot(t,z3(:,1));
legend('z1_1','z1_2','z1_3');
grid on;
hold off;

%% 状态变量2
subplot(3,1,2);
plot(t,z1(:,2));
hold on;
plot(t,z2(:,2));
hold on;
plot(t,z3(:,2));
legend('z2_1','z2_2','z2_3');
grid on;
hold off;

%% 系统输入
subplot(3,1,3);
plot(t,-K1*z1');
hold on;
plot(t,-K2*z3');
hold on;
plot(t,-K3*z3');
legend('u_1','u_2','u_3');
grid on;
hold off;
