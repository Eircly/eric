 clear all
 L=1;                          % 输入RLC电路的电感值
 C=1;                    % 输入RLC电路的电容值
 R=input('请输入R的电阻值（Ω）:');  %输入R的电阻值（Ω）
 t=0;
 T=0.001;                   %设置系统采样时间T的值
 A=[0 1;-R/L -1/(L*C)];            %计算系统状态方程矩阵的值
 B=[0 1/(L*C)]';
 tmax=60;                       %设置系统的仿真总时间tmax
 x=[0,0]';                       %设置状态变量初值
 Y=0;                            %Y为记录输出
 H=t;                            %H用于记录t的值
 while(t<tmax)
 xs=x+(A*x+B)*T;                %计算离散状态方程
 y=xs(1);                         %计算离散输出方程
 t=t+T;
 Y=[Y;y];
 H=[H;t];                          %记录y和t的值
 x=xs;
 end
 plot(H,Y,'k');                   %绘制输出曲线