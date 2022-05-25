##### On the nonholonomic nature of human locomotion

目的：研究人类运动是否也像轮式机器人一样遵循非完整约束

参照：独轮车实验（经典的非完整约束）

![image-20220522162438738](https://raw.githubusercontent.com/Eircly/eric/main/image-20220522162438738.png)

实验过程：通过测试7人的运动轨迹（头部、躯干、骨盆），在无要求的情况下通过一个门口。计算其线速度$v$与角速度$w$
$$
\dot x_t = \frac{x(t + \triangle t) - x(t - \triangle t)}{2 \triangle t} \\
\dot y_t = \frac{y(t + \triangle t) - y(t - \triangle t)}{2 \triangle t} \\
v_t = \sqrt{\dot x_t^2 + \dot y_t^2} \\
w_t=\frac{\varphi(t + \triangle t)-\varphi(t - \triangle t)}{2 \triangle t}
\\\theta_t = tan^{-1}(\frac{\dot y_t}{\dot x_t}) \\
$$

通过实际运动轨迹分析与建立的模型相对比，通过误差分析，发现以肩部作为参考点的轨迹与模型契合度最好。

