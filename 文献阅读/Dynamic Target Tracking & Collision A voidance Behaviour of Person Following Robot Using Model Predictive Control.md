**Dynamic Target Tracking & Collision A voidance Behaviour of Person Following Robot Using Model Predictive Control** 

​																															Avijit Ashe and K. Madhava Krishna

**存在的问题**：PFR 需要对目标实时跟踪，并且避障。对于PFR的速度要求合理，跟踪未知轨迹的适应性强。

**文章概要**：设计一个MPC框架满足上述问题需要

前人工作 感知：基于激光传感器、立体相机、RGBD传感器

避障：人工势场、无迹卡尔曼滤波等

缺陷：

Eslami将单一MPC 用于跟踪与避障（1.地图已知，随着障碍增多，收敛时间变长）

Tallamraju为机器人群每一个设立独立的局部MPC，缓解了人工势场的局部极小值问题，但收敛时间变多；

Leman设计单一的非线性MPC ，用于路径跟踪与避障，但是只考虑静态障碍与直线轨迹，不适合PFRs。

本文工作：

1.运动学模型

![image-20221019111735679](https://raw.githubusercontent.com/Eircly/eric/main/image-20221019111735679.png)

$\left.\begin{array}{}
\dot{x} & =\mathbf{u} \cos (\theta) \\
\dot{y} & =\mathbf{u} \sin (\theta) \\
\dot{\theta} & =\omega
\end{array}\right\}$

输入$\left(v_{r}, v_{l}\right)=\left[\frac{2 \mathbf{u}+\omega L}{2 R}, \frac{2 \mathbf{u}-\omega L}{2 R}\right]$

2.约束条件下的最优化

$\underset{v_{x}, v_{y}}{\operatorname{minimize}}\left(v_{x}-v_{x}^{\text {pref }}\right)^{2}+\left(v_{y}-v_{y}^{\text {pref }}\right)^{2}$

a.运动学约束，约束线速度、角速度的极值（速度平滑）。

b.视野约束，将人机距离的最值当作视野辨识角度，$b^{2} \leq\left(x_{t+d t}-x_{t+d t}^{\text {person }}\right)^{2}+\left(y_{t+d t}-y_{t+d t}^{\text {person }}\right)^{2} \leq a^{2}$，$\left(\theta_{b o t}+\beta\right)^{2} \leq \tan ^{-1}\left(\frac{y_{t}^{\text {person }}-y_{t}^{b o t}}{x_{t}^{\text {person }}-x_{t}^{b o t}}\right) \leq\left(\theta_{b o t}-\beta\right)^{2}$

c.避障$x_{t+d t}-\left(\begin{array}{l}
x_{t}^{o b s 1} \\
x_{t}^{o b s 2}  \\
\vdots \\x_{t}^{o b s N}
\end{array}\right)+y_{t+d t}-\left(\begin{array}{c}
y_{t}^{o b s 1} \\
y_{t}^{o b s 2}  \\
\vdots \\y_{t}^{o b s N}
\end{array}\right) \leq\left(r_{b o t}+r_{c l e a r}\right)^{2}$

**仿真结果**

蓝色：人，红色：PFR



<div><table frame=void>	<!--用了<div>进行封装-->
	<tr>
        <td><div><center>	<!--每个格子内是图片加标题-->
        	<img src="https://raw.githubusercontent.com/Eircly/eric/main/image-20221019125559699.png"
                 alt="无障碍跟随"
                width="300"/>	<!--高度设置-->
        	<br>	<!--换行-->
        	无障碍跟随	<!--标题1-->
        </center></div></td>   
        <td><div><center>	<!--每个格子内是图片加标题-->
        	<img src="https://raw.githubusercontent.com/Eircly/eric/main/image-20221019125713737.png"            alt=""
            width="300"/>	<!--高度设置-->
    	<br>	<!--换行-->
    	拐角跟随	<!--标题1-->
    </center></div></td> 
    <td><div><center>	<!--第二张图片-->
		<img src="https://raw.githubusercontent.com/Eircly/eric/main/image-20221019130211379.png"
             alt=""
            width="300"/>	
		<br>
		多转角跟随
    </center></div></td>
 	<td><div><center>	<!--第二张图片-->
		<img src="https://raw.githubusercontent.com/Eircly/eric/main/image-20221019130102142.png"
             alt=""
            width="300"/>	
		<br>
		动态避障
    </center></div></td>
</tr>

障碍与轨迹影响：随着障碍增多，MPC 计算时间在增长；对于轨迹则是当视野受限时，例如S型，影响越发显著。

![image-20221019165107632](https://raw.githubusercontent.com/Eircly/eric/main/image-20221019165107632.png)

结论：MPC 的运算速度上限为20Hz，比行人速度要快，可以满足上述要求。