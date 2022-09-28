**Navigation of non-holonomic mobile robot using neuro-fuzzy logic with integrated safe boundary algorithm**

Mallikarjuna Rao  K. Ramji  S. K. Sundara Siva Rao V. Vasu Puneeth

概述：在遇到弯曲或不规则障碍时，本文所提出的自适应神经模糊推理系统(ANFIS)(加入安全边界算法Safe Boundary Algorithm)，与同类技术相比，更适用于自主移动机器人(AMR)导航。此外，制造AMR的成本相对较低，配置ANFIS系统的自主移动机器人在实际操作中具有很好的稳定性。

前人工作：Abdelmoula等人利用模糊和神经模糊方法设计了AMR；Algabri等应用自适应神经模糊推理系统(ANFIS)对移动机器人进行导航；Li和Choi和Emhemed使用移动机器人的超声波传感器来感知；Dubey等证明了基于强化学习的路径规划优于人工神经网络方法；Sezer和Gokasan提出了一种机器人的非完整约束条件避障算法；etc；

缺点：前人已经可以让机器人沿墙行驶来避障，而且对于路径规划也有大量的研究，本文将采取集成SBA，让AMR更加智能化。

导航：要用传感器扫描，发现目标则向目标移动（最短路径且避障）控制器采用模糊控制的方式

![image-20220928195457118](https://raw.githubusercontent.com/Eircly/eric/main/image-20220928195457118.png)

寻路：在遇到障碍时，机器人可以自己移动方向去避开障碍物。

建立安全边界

![image-20220928200149869](https://raw.githubusercontent.com/Eircly/eric/main/image-20220928200149869.png)

机器人运动学方程：略（模型推导过）

模糊控制的输入：正面、左右两侧与障碍的距离，目标角度$a$，输出左右两轮的速度 （对应模糊控制设置的48条规则）

通过ANFIS(模糊与神经网络结合)将4输入2输出的结果更加平滑化

![image-20220928201447833](https://raw.githubusercontent.com/Eircly/eric/main/image-20220928201447833.png)

优越性：1.平均速度快 2.成本低

![image-20220928202329307](https://raw.githubusercontent.com/Eircly/eric/main/image-20220928202329307.png)

![image-20220928201700032](https://raw.githubusercontent.com/Eircly/eric/main/image-20220928201700032.png)