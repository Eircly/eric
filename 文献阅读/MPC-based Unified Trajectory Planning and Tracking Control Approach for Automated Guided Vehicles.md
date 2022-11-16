**MPC-based Unified Trajectory Planning and Tracking Control Approach for Automated Guided Vehicles**

Juncheng Li, Maopeng Ran, Han Wang, and Lihua Xie

概述：AGV的导航与跟踪控制，通过MPC来跟踪使用A*算法生成的轨迹。

1运动模型
$$
\left\{\begin{array}{l}
\dot{x}_{c}(t)=v(t) \cos \left(\theta_{c}(t)\right), \\
\dot{y}_{c}(t)=v(t) \sin \left(\theta_{c}(t)\right), \\
\dot{\theta}_{c}(t)=\omega(t)
\end{array}\right.
$$

$$
\left[\begin{array}{l}
x_{c}(k+1) \\
y_{c}(k+1) \\
\theta_{c}(k+1)
\end{array}\right]=\left[\begin{array}{c}
x_{c}(k) \\
y_{c}(k) \\
\theta_{c}(k)
\end{array}\right]+\left[\begin{array}{cc}
\cos \left(\theta_{c}(k)\right) & 0 \\
\sin \left(\theta_{c}(k)\right) & 0 \\
0 & 1
\end{array}\right]\left[\begin{array}{c}
v(k) \\
w(k)
\end{array}\right] \Delta T
$$

2约束条件

速度不能一直匀速，通过多项式拟合$v_r$与$w$
$$
T^{*}(k)=\sum_{i=1}^{k} \frac{\left\|r^{*}(k)-r^{*}(k-1)\right\|}{v_{r e f}(k)}
$$
通过MPC继续优化

3动态避障

激光扫描障碍物 ，障碍物会添加到地图，重新激活轨迹规划与跟踪控制算法。

4实验

![image-20221116215854166](https://raw.githubusercontent.com/Eircly/eric/main/image-20221116215854166.png)



<div><table frame=void>	<!--用了<div>进行封装-->
	<tr>
        <td><div><center>	<!--每个格子内是图片加标题-->
        	<img src="https://raw.githubusercontent.com/Eircly/eric/main/image-20221116220302874.png"
                 alt="pid"
                width="300"/>	<!--高度设置-->
        	<br>	<!--换行-->
        	PID	<!--标题1-->
        </center></div></td>   
        <td><div><center>	<!--每个格子内是图片加标题-->
        	<img src="https://raw.githubusercontent.com/Eircly/eric/main/image-20221116220331666.png"            alt=""
            width="300"/>	<!--高度设置-->
    	<br>	<!--换行-->
    	MPC	<!--标题1-->
    </center></div></td> 
    <td><div><center>	<!--第二张图片-->
		<img src="https://raw.githubusercontent.com/Eircly/eric/main/image-20221116220351599.png"
             alt=""
            width="300"/>	
		<br>
		MPC跟随
    </center></div></td>
 	<td><div><center>	<!--第二张图片-->
		<img src="https://raw.githubusercontent.com/Eircly/eric/main/image-20221116220527274.png"
             alt=""
            width="300"/>	
		<br>
		动态避障
    </center></div></td>
</tr>

https://youtu.be/vfNQ8kiD4I4. (视频)

