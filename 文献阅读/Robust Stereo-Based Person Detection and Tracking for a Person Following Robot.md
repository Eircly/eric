**Robust Stereo-Based Person Detection and Tracking for a Person Following Robot**

Junji Satake and Jun Miura

**概论：**

本文主要是将立体视觉运用于机器人的检测与跟踪，在此之前大多都采用激光测距仪进行检测，基于立体系统的目前较少应用于机器人方向。

前人工作：Beymer与Konolige开发出使用固定的立体摄像机获得距离信息来检测；Howard将深度图转换成极坐标的透视图；Calisi 开发出可以跟随的机器人系统；但是，都没有处理人与人之间的遮挡问题；Ess等人提出了行人检测，基于外观、深度估计、视觉里程与地平面检测，性能良好，但是系统复杂且价格昂贵。

**立体人物检测与跟踪**

跟踪：通过设置人头部的深度信息（EKF跟踪器），在预测的图像位置搜索人的位置

检测：场景中有可能会有其他人的出现，通过不断检查图像信息。

纠错：通过选择468幅正面图像与146干扰的，通过SVM的opencv进行训练

![image-20220921200509466](https://raw.githubusercontent.com/Eircly/eric/main/image-20220921200509466.png)

**机器人控制：**![image-20220921200832517](https://raw.githubusercontent.com/Eircly/eric/main/image-20220921200832517.png)

**实验**

通过立体视觉，可以比较可靠的预测两个人的在遮挡情况下，如果检测到一个，就可以通过检查轨迹来预测可能的遮挡关系。

![image-20220921200934830](https://raw.githubusercontent.com/Eircly/eric/main/image-20220921200934830.png)

![image-20220921202336925](https://raw.githubusercontent.com/Eircly/eric/main/image-20220921202336925.png)

图像处理速度为90ms，人的位置平均误差为125mm，最大误差为336mm，位置的精度足够精确，机器人可以跟随该目标。

总结：基于立体视觉在定位上要更加准确，可以实现机器人跟随功能，并且它可以跟随特定的人，同时识别目标和偶尔被遮挡的其他人，具有一定的鲁棒性。 未来的发展：对于更加密集的流动，可以采取更多的信息采集（颜色、纹理等）也为未来跟随机器人的普及做铺垫。