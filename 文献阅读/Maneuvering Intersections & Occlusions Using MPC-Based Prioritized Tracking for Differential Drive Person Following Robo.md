Maneuvering Intersections & Occlusions Using MPC-Based Prioritized Tracking for Differential Drive Person Following Robot

**问题**：在人机跟随时，PFR需要考虑避障、到达目标和人员跟随。但是在十字路口等拥挤的地方，目标存在短期消失的问题，我们需要解决这核心问题。

![image-20221026192555375](https://raw.githubusercontent.com/Eircly/eric/main/image-20221026192555375.png)

**解决方法**：

**预测轨迹**

**![image-20221026193358178](https://raw.githubusercontent.com/Eircly/eric/main/image-20221026193358178.png)**

**早期重定位**：让PFR暂时放弃逐帧跟踪人，基于本地地图重新定位到期望位置。

<div><table frame=void>	
	<tr>
        <td><div><center>	
        	<img src="https://raw.githubusercontent.com/Eircly/eric/main/image-20221026195120138.png"
                 width="300"/>	
    	<br>	
    	无重定位跟随
    </center></div></td>    
 	<td><div><center>	
		<img src="https://raw.githubusercontent.com/Eircly/eric/main/image-20221026195208019.png"     width="300"/>	
	<br>
	有重定位的跟随
        </center></div></td></tr></table></div>

**视野验证**

![image-20221026195526755](https://raw.githubusercontent.com/Eircly/eric/main/image-20221026195526755.png)

带有早期重定位的PFR 在动态障碍中仍能保持住视野。

**MPC计算时间**

![image-20221026201508256](https://raw.githubusercontent.com/Eircly/eric/main/image-20221026201508256.png)

随着障碍物的增加，MPC计算的时间也在增加，但是仍能维持20Hz以上的运算速度

创新点：大多数跟随的控制器都是要求PFR实时跟踪目标，但是很有可能在动态障碍交叉中失去视野，加上ER算法之后，可以先 到一个指定的地方拥有更好的视野去追踪原来的目标，尤其适合在十字路口等地区。