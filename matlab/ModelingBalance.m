clc;clear;close all;
%% ����Control Package,ʹ��Matlab��ע����1��
%%pkg load control
%% �������
  g=10;
  d=1;
%% �������
 A=[0 1;g/d 0];
 B=[0;1];
 C = [1, 0];
 D = 0;
%% ����״̬�ռ䷽�̱��ʽ
sys = ss(A,B,C,D);
%% �����ʼ״̬
z0=[pi/20;0];
%% �Գ�ʼ״̬����Ӧ
t=0:0.01:20;
[y,t,z]=initial(sys,z0,t);
plot(t,z(:,1));
hold on;
plot(t,z(:,2));
grid on;
hold off;