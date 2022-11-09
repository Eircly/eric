#### **Moving Target Tracking and Obstacle Avoidance for a Mobile Robot Using MPC**

*Narges Eslami、Roya Amjadifard*

概述：设计了MPC模型预测控制器，用在具有静态未知障碍的环境中跟踪运动目标。通过计算计算移动机器人的线速度与角速度控制方向，通过QP计算最优输入。

发展：1.人工势场（局部极小值、障碍物附近不可达）2.MPC＋神经网络

动力学模型

1.离散化
$$
\left[\begin{array}{l}
x(k+1) \\
y(k+1) \\
\theta(k+1)
\end{array}\right]=\left[\begin{array}{l}
x(k) \\
y(k) \\
\theta(k)
\end{array}\right]+T\left[\begin{array}{cc}
\cos \theta & 0 \\
\sin \theta & 0 \\
0 & 1
\end{array}\right] u(k)
$$
2.代价函数
$$
J(k)=\sum_{j=1}^{N_{j}}\|r(k+j \mid k)-y(k+j \mid k)\|_{Q}^{2}+\sum_{j=0}^{N_{-}-1} \| \Delta u(k+j \mid k
$$
3.约束
$$
\begin{array}{l}
\min \frac{1}{2} \Delta \bar{u}^{T} W \Delta \bar{u}+c^{T} \Delta u \\
\text { s.t. }\left\{\begin{array}{c}
E \Delta \bar{u} \leq b \\
\Delta \bar{u}_{\text {min }} \leq \Delta \bar{u} \leq \Delta \bar{u}_{\max }
\end{array}\right.
\end{array}
$$
跟踪效果

![image-20221109200522280](https://raw.githubusercontent.com/Eircly/eric/main/image-20221109200522280.png)

跟踪误差

![image-20221109200405950](https://raw.githubusercontent.com/Eircly/eric/main/image-20221109200405950.png)

避障

1安全距离 2避障路线，圆心为障碍物圆的切线

![image-20221109202022353](https://raw.githubusercontent.com/Eircly/eric/main/image-20221109202022353.png)

仿真效果

![image-20221109203501014](https://raw.githubusercontent.com/Eircly/eric/main/image-20221109203501014.png)

可以改进的地方：

1.静态障碍——>动态障碍

2.降低安全距离

3.提高追踪速度