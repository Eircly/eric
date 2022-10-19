#### Followman: Control of Social Person Following Robot

Avijit Kumar Ashel, K. Madhava Krishna

**问题**：跟随机器人在躲避静态障碍物往往比较简单，但是由人引起的移动在路口等死角会使跟随目标消失从而导致追随失败。

**方法**：提出一个预测控制的框架，可以计算未来的轨迹以及车轮的控制，使得在转向的时候使其误差最小。

**前人的工作**：近些年，使用深度学习和基于社会力的行人动力学模型来学习人类感知的导航系统较多；Ostafew等人提出了一个具有鲁棒性的MPC约束框架。

**本文工作**：1.实现一个基于预测控制的框架来跟踪一个人的未来运动 2.丢失视野后，根据预测的轨迹重新定位到新的目标位置 3.不影响社会规则 4.导航到新的目标位置，以免在拐角处和十字路口以及由于动态人群而失去对人的视线。

**过程：**1.动力学公式
$$
\dot{X}=\left[\begin{array}{c}
\dot{x} \\
\dot{y} \\
\dot{\theta}
\end{array}\right]=\left[\begin{array}{cc}
\cos (\theta) & 0 \\
\sin (\theta) & 0 \\
0 & 1
\end{array}\right]\left[\begin{array}{l}
V_{x} \\
\omega
\end{array}\right]
$$
2.距离迭代的预测![image-20220907222136546](https://raw.githubusercontent.com/Eircly/eric/main/image-20220907222136546.png)

3.问题的建模与最优化

4.通过LSTM模型使用了带有池邻居的双向LSTM层。这减少了振荡，提高了预测精度。

![image-20220907222618102](https://raw.githubusercontent.com/Eircly/eric/main/image-20220907222618102.png)

**结果：**通过使用matlab 的fmincon求解器，用于仿真。通过仿真与真实世界的对比，得出结果。

真实世界：

![image-20220907223004974](https://raw.githubusercontent.com/Eircly/eric/main/image-20220907223004974.png)

仿真图：

<div><table frame=void>	
	<tr>
        <td><div><center>	
        	<img src="https://raw.githubusercontent.com/Eircly/eric/main/image-20220907223141607.png"
                 width="300"/>	
    	<br>	
    	2干扰和1目标人的LSTM动态障碍物轨迹
    </center></div></td>    
 	<td><div><center>	
		<img src="https://raw.githubusercontent.com/Eircly/eric/main/image-20220907223201334.png"     width="300"/>	
	<br>
	基于LSTM的4干扰和1目标的动态障碍物轨迹
        </center></div></td></tr></table></div>



1. 采用基于mpc的路径跟踪控制器实现了一种符合社会可接受规则的非完整差动驱动轮式机器人。

2. 基于LSTM模型的长期路径预测，我们生成了舒适路径跟踪的参考路径和新的目标位置。
3. 该算法通过基于预测路径而不是基于实际路径的运动规划和避障耦合，避免了在人群和交叉路口错过目标人。

4. MPC的运行效率可以轻松地每秒跨越20个节点，为一般人的步幅提供足够高的余量