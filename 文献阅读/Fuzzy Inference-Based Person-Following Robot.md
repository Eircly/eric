**Fuzzy Inference-Based Person-Following Robot** 

Samir Shaker, Jean J. Saade and Daniel Asmar 

**概要**

服务机器人最重要的能力之一便是跟随能力，本文提出了基于模糊控制的追踪方法，结合腿部检测系统，与激光测距仪一起，协同合作使得机器人在追踪目标时平稳而又安全。

**腿部检测法**

由Milella等人的工作推出

![image-20220921181056432](https://raw.githubusercontent.com/Eircly/eric/main/image-20220921181056432.png)

通过激光连续扫描距离，将超过1m的物体定义为可能性，将宽度与人腿部宽带匹配，若匹配则记录该模型，方便下一次识别时匹配，确保是相同的人。

**模糊控制**

传统的控制需要精确的数学模型，在可用信息中夹杂噪声，可以使用模糊控制。使用的是抛物线公式来匹配距离与机器人速度的公式。
$$
\text { Safe Dist }=88 \times 10^{-6} V^{2}+0.66336V+\text { Min Safe Dist}
$$
安全距离设置为1m，将输入的速度与距离，通过设置隶属度函数进行修改，输出为加速度

![image-20220921184808033](https://raw.githubusercontent.com/Eircly/eric/main/image-20220921184808033.png)

模糊控制规则

![image-20220921184942918](https://raw.githubusercontent.com/Eircly/eric/main/image-20220921184942918.png)

**结果**

![image-20220921185128286](https://raw.githubusercontent.com/Eircly/eric/main/image-20220921185128286.png)

在人的速度高速波动时，机器人并没有出现振荡，平稳的移动到该目标位置。

**总结：**

本文发表于2008年，模糊控制方法方兴未艾，机器人的跟随需要平滑性，不能产生快速的振荡效果，在仅使用少量的传感器（激光测距）实现较好的跟踪效果。