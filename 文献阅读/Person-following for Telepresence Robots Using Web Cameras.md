**Person-following for Telepresence Robots Using Web Cameras**

Xianda Cheng, Yunde Jia,  Jingyu Su, and Yuwei Wu

创新点：不采用激光测距这类的方法，而是通过摄像头来进行跟随，通过对人的脚部进行定位与追踪，这种方式对性能要求低。

困难点：1.光线变化、相似的人或衣着相似与快速运动。

前人工作：Anezaki等人提出了一种使用二维码识别和基于形状的模式匹配的人类跟踪机器；Shukor等使用基于颜色的检测方法对图书馆环境下的机器人进行目标跟踪和跟踪；Hu提出一种结合人体上半身的衣服颜色特征和头肩轮廓的人体跟踪与跟踪方法。

改进点：通过FF摄像头对人上半身跟踪，DF摄像头负责腿部定位与追踪。通过LRF估计身高与步态特征。

上半身跟踪：FDSST跟踪器，通过Scale滤波器滤波，保留主成分。

脚部追踪：1.颜色通过KCF追踪器，分辨出11种颜色 2.空间约束，脚部活动定位区域在该80°扇形中![image-20220928212438524](https://raw.githubusercontent.com/Eircly/eric/main/image-20220928212438524.png)

丢失目标：通过二维卡尔曼滤波方法估计目标位置($\bigtriangleup t=0.05s$)

$F=\left(\begin{array}{cccc}
1 & 0 & \Delta t & 0 \\
0 & 1 & 0 & \Delta t \\
0 & 0 & 1 & 0 \\
0 & 0 & 0 & 1
\end{array}\right)$

实验过程：![image-20220928213253567](https://raw.githubusercontent.com/Eircly/eric/main/image-20220928213253567.png)

通过控制机器人跟踪真人

![image-20220928213852864](https://raw.githubusercontent.com/Eircly/eric/main/image-20220928213852864.png)

前部分均能跟踪，第411帧定位到了地面

![image-20220928214139562](https://raw.githubusercontent.com/Eircly/eric/main/image-20220928214139562.png)

在身着相似的情况下，大多数时间还是能保持跟踪的，虽然会有几帧的失败，但是对于后面的跟踪并没有影响。也体现了该方法具有一定的鲁棒性。