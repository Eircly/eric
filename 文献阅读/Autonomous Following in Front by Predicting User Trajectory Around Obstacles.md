P. Nikdel, R. Shrestha and R. Vaughan, "The Hands-Free Push-Cart: Autonomous Following in Front by Predicting User Trajectory Around Obstacles," 2018 IEEE International Conference on Robotics and Automation (ICRA), 2018, pp. 4548-4554, doi: 10.1109/ICRA.2018.8461181.

概要：该pfr是跟随人但处于人的前方，类似于“领航者”的位置，同时也需要对路径的避障及追踪

![image-20221102201701507](https://raw.githubusercontent.com/Eircly/eric/main/image-20221102201701507.png)

优点：1.比后跟随减轻认知负荷（不用担心总回头看）2增加心理安全感。

前人工作：Leigh等人通过卡尔曼滤波对人进行跟踪，用pid控制器获得机器人的角速度与线速度；Yao通过Haar 人脸检测和KLT特征提取器来跟随。

方法：1。通过基于yolo算法的图像处理，获取人的数据 2.通过鱼眼相机与LRF。

人的位置：

$\begin{array}{l}
x_{t+1}=x_{t}+v \cos (\theta) d t \\
y_{t+1}=y_{t}+v \sin (\theta) d t \\
v_{t+1}=\left(1-\alpha_{v}\right) v_{t}+\alpha_{v}\left\|\left(x_{t}, y_{t}\right)-\left(x_{t-1}, y_{t-1}\right)\right\| / d t \\
\theta_{t+1}=\left(1-\alpha_{\theta}\right) \theta_{t}+\alpha_{\theta} \operatorname{atan} 2\left(y_{t}-y_{t-1}, x_{t}-x_{t-1}\right)
\end{array}$

通过无迹卡尔曼滤波来改进状态估计。

结果：![image-20221102202834824](https://raw.githubusercontent.com/Eircly/eric/main/image-20221102202834824.png)

存在的问题：

![image-20221102203553681](https://raw.githubusercontent.com/Eircly/eric/main/image-20221102203553681.png)

就如后跟随侧跟随在转弯拐角都会出现视野丢失，前跟随在拐弯处目前会往前走在停留一段时间在重新回复前跟随。