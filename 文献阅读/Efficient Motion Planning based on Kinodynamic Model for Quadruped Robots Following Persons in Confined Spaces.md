**Efficient Motion Planning based on Kinodynamic Model for Quadruped Robots Following Persons in Confined Spaces**

Zhen Zhang , Jiaqing Yan , Xin Kong , Guangyao Zhai , Yong Liu（IEEE-Asme TMech）

1. **研究背景**

   四足机器人比传统机器人对于地形的适应性更好、运动更灵活。本文提出了一种高效的运动规划方案，在受限的空间中，可以更加灵活的实现最优跟随。

   Christoph等提出了基于在$R^2$环境中优化方法并在平坦、宽敞的室内环境进行了验证；Carlo引入简化动力学，指出GRF是四足机器人保持运动稳定性的关键因素；Chilian等使用立体摄像机；Wooden使用LiDAR估计地形的可穿越性。

   **创新性**：前人都将机器人近似为一个点，并采用基于搜索的方法考虑可穿越性进行规划。本文认为考虑不同方向流动性的差异是至关重要的。

2. **运动规划**

   1.前端规划器考虑可穿越性成本，规划出安全的路径

   2.后端以该路径为初始条件，通过非线性优化器求解。

3. **系统概述** 

   拥有一个感知模块与一个运动规划模块。运动规划模块接收被跟随者的姿态作为局部目标，然后使用几何路径规划器寻找粗路径。初始化完成后，利用优化程序迭代优化机器人的质心轨迹。

4. **感知模块**

   ![image-20220914214736821](C:\Users\Eric\AppData\Roaming\Typora\typora-user-images\image-20220914214736821.png)

   通过合并来自激光雷达和深度相机的点云来处理环境中意想不到的障碍。

5. **运动规划**

   将机器人视为一个刚体，即在投影到2D图像中作为一个矩形轨迹。通过优化的运动规划去生成精确的运动轨迹，通过滚动时域的控制策略，实时重复以上过程，提升系统的鲁棒性。

   ![image-20220914220302763](C:\Users\Eric\AppData\Roaming\Typora\typora-user-images\image-20220914220302763.png)

   图(A)(B)(C)考虑四足机器人通过狭窄的空间

   ![image-20220914221244420](C:\Users\Eric\AppData\Roaming\Typora\typora-user-images\image-20220914221244420.png)

   （a）A*算法的路径（b）未经优化的路径（c）本文方法优化平滑轨迹（d）本文方法生成轨迹

6. **实验**

   1.gazebo仿真

   4.5m*13m的区域，80%为狭窄通道，机器人宽度为0.4m，最窄通道为0.7m，在测试中，最慢移动速度为0.5m/s， 如果不考虑GRF约束，大概率会被通道卡住。

   2.田间试验

   ![image-20220914223335995](C:\Users\Eric\AppData\Roaming\Typora\typora-user-images\image-20220914223335995.png)

   距离障碍物最近距离为0.12m，对于较低的木板可以通过，较大的障碍物则需要转向。

7. **结论**

   通过集成环境感知、局部轨迹生成方法，提出了简化的运动模型。在可穿越性成本中，创新性的提出机器人的矩形轨迹优化，减少机器人与环境的碰撞。 

   **发展前景**：可以将规划拓展到三维空间，增加四足机器人的应用

   



