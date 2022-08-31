clc;clear;close all;
%% ����Control Package,ʹ��Matlab��ע����1��
%%pkg load control
%%�������
zeta = [0, 0.2, 0.5, 1, 2];
w_n = 10;
%% ��ÿһ��zeta�ĵ�λ��Ծ��Ӧ
t = 0:0.01:3;
colorcode = ['r', 'b', 'g', 'k', 'y'];
for i =1:length(zeta)
  hold on;
  G = tf([w_n^2],[1,2*w_n*zeta(i),w_n^2]);
  step(G,t,colorcode(i));
end 
legend ('zeta = 0', 'zeta = 0.2','zeta = 0.5','zeta = 1','zeta = 2');