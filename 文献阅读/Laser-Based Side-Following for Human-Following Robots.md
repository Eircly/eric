**Laser-Based Side-Following for Human-Following Robots**

1.研究什么问题：机器人在跟随时在走廊交叉口等特殊情形下跟随机器人会丢失跟随目标的视野。通过设计SFLT实现了侧向跟随。

2.前人工作及缺陷：近年来，通过开发（摄像头、激光扫描仪与融合传感器对人进行检测与追踪。通过设计KCF 滤波器通过单目相机追踪目标。（**单目视觉缺乏深度值**，非立体视觉） Gupta 设计新的鲁棒视觉控制器获取深度值（存在**抖振效应**）Brscic 提出了3D距离扫描器，但是多人情况下**信息量少**；Tsun通过多传感器实现跟踪，但未考虑**目标被完全遮挡**。Montemerlo 采用激光扫描来追踪人体（条件粒子滤波）Chung基于**行走模型追踪腿部**实现了**遮挡情况**下的跟踪；Jung 通过VDD算法、Schulz使用**SJPDAF**用于追踪（**复杂性**随着测量数量指数增长、且在空旷区域存在局限性）



3.本文方法

通过二维激光扫描进行侧向跟踪。通过识别目标腿部与走廊交叉点的几何约束，在接近走廊交叉口采用侧向跟踪（目标从背面到侧面采用PD控制保持视野）

1. 采用SVDD方法对人腿部进行识别追踪。

   
   $$
   \left\{\begin{array}{l}
   G_{i}=\sum\limits_{j-1}^{m-1}\left|\overline{P_{j} P_{j+1}}\right| \\
   W_{i}=\left|\overline{P_{1} P_{m}}\right| \\
   H_{i}=\frac{\left(L_{2}^{T} L_{2}\right)\left(L_{1}^{T} L_{1}\right)-\left(L_{1}^{T} L_{2}\right)^{2}}{\left(L_{1}^{T} L_{1}\right)}
   \end{array}\right.
   $$

   $$
   \left\{\begin{array}{l}
   \min L\left(R^{2}, a, \xi\right)=R+C \sum\limits_{i=1}^{n}\xi_{i} \\
   \text { s.t. }\left\|x_{i}-a\right\|^{2} \leq R^{2}+\xi_{i}, \xi_{i} \geq 0, \forall_{i}, x_{i}=\left(\begin{array}{c}
   G_{i} \\
   W_{i}
   \end{array}\right)
   \end{array}\right.
   最优化特征空间
   $$

   

2. 走廊识别

   ![image-20220831195752717](https://raw.githubusercontent.com/Eircly/eric/main/image-20220831195752717.png)

   墙体与走廊的交叉符合线性，通过最小二乘法计算数据的线性拟合与线性度。

3. 侧跟踪 

   1. 通过卡尔曼滤波降低噪声、预测位置信息。
   2. 采用pd控制两轮差速![image-20220831201043088](https://raw.githubusercontent.com/Eircly/eric/main/image-20220831201043088.png)
   3. 侧面腿部跟踪器

   ![image-20220831200940500](https://raw.githubusercontent.com/Eircly/eric/main/image-20220831200940500.png)

4.实验与结果

1. ​	仿真结果![image-20220831201427057](https://raw.githubusercontent.com/Eircly/eric/main/image-20220831201427057.png)

2.    实际测试

   侧跟踪通过的概率远高于后跟踪

   ![image-20220831201645683](https://raw.githubusercontent.com/Eircly/eric/main/image-20220831201645683.png)

   

5.展望

​    1.对于圆柱形走廊道，大概率会失效；在速度达到一定速度时，PD控制器的性能不足以跟踪。