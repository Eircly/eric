clc;clear;
%% ����Package��ʹ��Matlab��ע����������
%%pkg load control
%%pkg load signal
%% ���� m, k, b
m = 1 ;  
k = 1 ;
b = 0.5 ;
%% �������A,B,C,D
A = [[0,1];
    [-k/m  -b/m]];
B = [0; 1/m ];
C = [1, 0];
D = 0;
%% ����״̬�ռ䷽�̱��ʽ
sys = ss(A,B,C,D);
%% ��״̬�ռ䷽��ת��Ϊ���ݺ���
[num,den] = ss2tf(A,B,C,D);
G_s=tf(num,den);