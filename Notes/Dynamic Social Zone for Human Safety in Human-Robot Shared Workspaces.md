##### Dynamic Social Zone for Human Safety in Human-Robot Shared Workspaces

目的：在人机共享的空间内构建一个对人保护的框架。

分析：1.数学模型（理解为间隔距离）

公式：
$$
d=\sqrt{\left(x-x_{i}\right)^{2}+\left(y-y_{i}\right)^{2}} \\
\theta=\operatorname{atan} 2\left(\left(y-y_{i}\right),\left(x-x_{i}\right)\right) \\
f_{x}=\frac{\left(d * \cos \left(\theta-\theta_{i}\right)\right)^{2}}{2 * \sigma_{x}^{2}} \\
f_{y}=\frac{\left(d * \sin \left(\theta-\theta_{i}\right)\right)^{2}}{2 * \sigma_{y}^{2}} \\
f_{i}(x, y)=A * \exp \left(-\left(f_{x}+f_{y}\right)\right)
$$
![image-20220525170748382](https://raw.githubusercontent.com/Eircly/eric/main/image-20220525170748382.png)

![image-20220525170835397](https://raw.githubusercontent.com/Eircly/eric/main/image-20220525170835397.png)

群体即可以采用相加原理。

动态区域要素

1.Personal Space

![image-20220525201138135](https://raw.githubusercontent.com/Eircly/eric/main/image-20220525201138135.png)

2.Human States
$$
\sigma_{y i}=\left\{\begin{array}{l}
\sigma_{y 0}\qquad\qquad\qquad \,\qquad在人前 \\
\left(1+f_{v} * v_{i}\right) * \sigma_{y 0}\qquad 在人后
\end{array}\right.
$$
3.Human Social Signals and Cues

通过头部与手部距离建立模型（自然就有对称性）

![image-20220525202650003](https://raw.githubusercontent.com/Eircly/eric/main/image-20220525202650003.png)

实验：

通过静止的机器人与四处走动的人，采集人体位置运动姿态，显示设定的安全区域，可以满足工作安全。