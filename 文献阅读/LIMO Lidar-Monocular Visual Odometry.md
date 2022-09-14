**LIMO: Lidar-Monocular Visual Odometry**

Graeter J, Wilczynski A, Lauer M.（IROS 2018)

1. **研究背景**                                     

   我们通常使用VSLAM来估计环境中的运动问题，通常采用滑动窗口后端优化的方法，但是通过后端优化同时优化所有相机位姿与路标，对算力要求大。

   为了实现实时的VSLAM，研究人员提出了很多优化算法。Krevso等人提出分解场学习双目相机的标定偏差、Geiger等人提出了在平移估计中的标定误差补偿方法。

2.  **系统概述**

   ![image-20220914200708884](https://raw.githubusercontent.com/Eircly/eric/main/image-20220914200708884.png)

   VSLA,包括特征提取，特征预处理，帧帧运动估计，尺度估计，BA和回环检测，本文涉及前五步骤。

   1. 特征提取

      在30-40ms内提取2000个特征对应。然后需要剔除动态的特征点。

   2. 尺度估计 

      通过寻找特征点周围的矩形框内的激光点，划分激光点的深度，通过最接近特征点的点云拟合平面；（点云按深度划分区间，减少错误的可能）

   3. 帧帧运动估计
      $$
      \underset{x, y, z, \alpha, \beta, \gamma}{\operatorname{argmin}} \sum_{i} \rho_{3 d \rightarrow 2 d}\left(\left\|\varphi_{i, 3 d \rightarrow 2 d}\right\|_{2}^{2}\right)+\rho_{2 d \rightarrow 2 d}\left(\left\|\varphi_{i, 2 d \rightarrow 2 d}\right\|_{2}^{2}\right)
      $$

   4. 后端优化

3. **结果**

   ![image-20220914204053033](https://raw.githubusercontent.com/Eircly/eric/main/image-20220914204053033.png)

   高速时的错误是由难以提取的特征引起的，低速时的高误差是由静止检测的保守调整引起的。

4. **总结**

   本文提供了针对点云的特征深度提取的方法，在后端优化中对于特征值的深度导致的误差进行了甄别。

