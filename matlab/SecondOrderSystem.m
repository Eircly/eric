clc;clear;close all;
%% ����Control Package,ʹ��Matlab��ע����1��
%%pkg load control

%%�������ϵͳ
zeta=0.5;
w_n=1;
G_s = tf([w_n^2],[1,2*w_n*zeta,w_n^2]);

%% ��ͼ
subplot(3,1,1)
%% ��λ�弤��Ӧ
impulse(G_s);
%% ��λ��Ծ��Ӧ
subplot(3,1,2)
step (G_s);
%% �Գ�ʼ״̬����Ӧ
subplot(3,1,3)
A = [[0 1];[-w_n^2 -2*zeta*w_n]];
B = [0 ; w_n^2];
C = [1 0]; 
D =0; 
sys = ss(A,B,C,D);
z0 = [1;0];
initial(sys,z0);
