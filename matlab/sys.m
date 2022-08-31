%% ʹ��ʱ����Tracking.m��ͬһ�ļ�����

function  dz = sys(t, z)
%% �������
   g=10;
   d=1;
%% �������
   A=[0 1;g/d 0];
   B=[0;1];
   C = [1, 0];
   D = 0; 
%% ����Ŀ��zd
   if t >= 0 & t <10
    z1d = pi/20;
    elseif t >= 20 & t <30
    z1d = -pi/20;
    else
    z1d = 0;
   end 

%% ����״̬�ռ䷽��
   zd = [z1d; 0];
   Ke = [25, 7];
   F = [-g/d, 0]; 
   e = zd - z; 
   u = F * zd + Ke*e;
   dz = A*z + B*u;
end