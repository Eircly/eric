Motion Planning of Autonomous Personal Transporter using Model Predictive Control for Minimizing Non-minimum Phase Behavior

主要是通过实验测量控制器的稳定性

实验平台

![image-20221116204934905](https://raw.githubusercontent.com/Eircly/eric/main/image-20221116204934905.png)

LQR：主要是调节状态权值Q与输入权值R来设置不同系统响应的最优控制。
$$
u=K_{l q r}\left(x_{r e f}-x\right)
$$

$$
x_{r e f}=\left[\begin{array}{llll}
0 & p_\dot{\text {des }} & 0 & 0
\end{array}\right]^{T}
$$

$$
J=\int_{0}^{\infty}\left(x^{T} Q x+u^{T} R u\right)
$$

$$
\begin{array}{l}
0=A_{o}^{T} S+S A_{o}-S B_{o} R^{-1} B_{o}^{T} S+Q \\
K_{l q r}=R^{-1} B_{o}^{T} S .
\end{array}
$$

![image-20221116205701412](https://raw.githubusercontent.com/Eircly/eric/main/image-20221116205701412.png)

MPC

![image-20221116205752919](https://raw.githubusercontent.com/Eircly/eric/main/image-20221116205752919.png)

结论：MPC对控制精度更好并且能有效地抵消运动过程中的加速度。