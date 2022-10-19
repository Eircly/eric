**Towards Out-of -Sight Predictive Tracking for Long-Term Indoor Navigation of Non-Holonomic Person Following Robot**

**主要内容**：在人机跟随中，通过采用MPC 算法来解决运动规划与控制问题。

**前人的工作**：Kruse讨论了约束公式的三个指标：人的舒适性、像人一样自然、遵守规则。Ostafew成功的提出了具有鲁棒性的跟踪的MPC框架。Foka将预测分成长短预测。

行为动力学：始终跟随目标且保持安全距离，保持视野，避障，遵守社会规则和适应目标人的速度。

非线性MPC早就运用于实时路径跟踪，大多数是在已知的地图上，没有加上动态障碍；Thomas首次展示在室外环境对于拐角与交叉路口的应用。

![image-20221019183834751](https://raw.githubusercontent.com/Eircly/eric/main/image-20221019183834751.png)

**问题建模**：1.首先考虑2D图，即障碍物已知，列出静态下的代价函数；通过LTSM模型预测路径。代价函数通过惩罚与参考值的偏差来最小化前进速度。

![image-20220907205402148](https://raw.githubusercontent.com/Eircly/eric/main/image-20220907205402148.png)

通过matlab使用fmincon求解器进行优化。

**结果**

<div><table frame=void>	<!--用了<div>进行封装-->
	<tr>
        <td><div><center>	<!--每个格子内是图片加标题-->
        	<img src="https://raw.githubusercontent.com/Eircly/eric/main/image-20220907205737874.png"
                 alt="静态障碍训练"
                width="300"/>	<!--高度设置-->
        	<br>	<!--换行-->
        	静态障碍训练	<!--标题1-->
        </center></div></td>    
     	<td><div><center>	<!--第二张图片-->
    		<img src="https://raw.githubusercontent.com/Eircly/eric/main/image-20220907205949965.png"
                 alt="Typora-Logo"
                width="300"/>	
    		<br>
    		26节点转换位置
        </center></div></td>
	</tr>
</table></div>

<div><table frame=void>	
	<tr>
        <td><div><center>	
        	<img src="https://raw.githubusercontent.com/Eircly/eric/main/image-20220907210046339.png"
                 alt="静态障碍训练"
                 width="300"/>	
        	<br>	
        	2干扰和1目标人的LSTM动态障碍物轨迹
        </center></div></td>    
     	<td><div><center>	
    		<img src="https://raw.githubusercontent.com/Eircly/eric/main/image-20220907210129843.png"
                 alt="Typora-Logo"
                 width="300"/>	
    		<br>
    		基于LSTM的4干扰和1目标的动态障碍物轨迹
        </center></div></td>
	</tr>
</table></div>
**对比**

![image-20221019191850736](https://raw.githubusercontent.com/Eircly/eric/main/image-20221019191850736.png) CV即是违反约束的意思，其值越小，结果就越好（基于50次测试）。

**未来与展望**：LSTM模型可以进行长期路径预测，单一整体的MPC符合PFR 的行为动力学模型，可以用来运动规划与避障，该算法未来可以应用于真实的物理机器人上。