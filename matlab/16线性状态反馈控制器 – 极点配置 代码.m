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
%% ����ϵͳ����
K = [1+g/d 2];
%% ����ջ�ϵͳ
sys_cl=ss(A-B*K,[0; 0],C,D);
%% �Գ�ʼ��������Ӧ
t=0:0.01:10;
[y,t,z]=initial(sys_cl,z0,t);
%% ��ͼ
%% z1
subplot (2,1,1);
plot(t,z(:,1));
grid on
%% z1
subplot (2,1,2);
plot(t,z(:,2));
grid on
