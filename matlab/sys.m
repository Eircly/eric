%% 使用时需与Tracking.m在同一文件夹内

function  dz = sys(t, z)
%% 定义参数
   g=10;
   d=1;
%% 定义矩阵
   A=[0 1;g/d 0];
   B=[0;1];
   C = [1, 0];
   D = 0; 
%% 定义目标zd
   if t >= 0 & t <10
    z1d = pi/20;
    elseif t >= 20 & t <30
    z1d = -pi/20;
    else
    z1d = 0;
   end 

%% 定义状态空间方程
   zd = [z1d; 0];
   Ke = [25, 7];
   F = [-g/d, 0]; 
   e = zd - z; 
   u = F * zd + Ke*e;
   dz = A*z + B*u;
end