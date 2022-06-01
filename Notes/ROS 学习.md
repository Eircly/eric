### ROS 学习

#### C++

创建文件夹

```
mkdir -p 自定义空间名称/src
cd 自定义空间名称
catkin_make //这里命名为demo01
```

![image-20220531100211108](https://raw.githubusercontent.com/Eircly/eric/main/image-20220531100211108.png)

创建功能包

```
cd 自定义空间名称
catkin_makecd src
catkin_create_pkg 自定义ROS包名 roscpp rospy std_msgs
```

![image-20220531111117318](https://raw.githubusercontent.com/Eircly/eric/main/image-20220531111117318.png)

关于没有新建文档选项

在模板中 crtl alt T  //sudo  gedit 文本文档 保存即可

 Hello World 

1.源码

```
#include"ros/ros.h"
int main(int argc, char *argv[])
{
	 ros::init(argc,argv,"hello");
	 ros::init(argc,argv,"hello");
	 ROS_INFO("hello world!");
	   return 0;
}
```

2.编辑Cmakelist

```shell
add_executable(源文件名
  src/源文件名.cpp
)
target_link_libraries(源文件名
  ${catkin_LIBRARIES}
)
```

![image-20220531155734343](https://raw.githubusercontent.com/Eircly/eric/main/image-20220531155734343.png)

3.编译 

```
eric@eric-virtual-machine:~/demo01$ **catkin_make**
```



4.执行

 crtl alt T //roscore

```shell
source ./devel/setup.bash
rosrun 包名 C++节点 //rosrun helloworld helloc//文件夹
```

![image-20220531154437204](https://raw.githubusercontent.com/Eircly/eric/main/image-20220531154437204.png)

#### python

1.源码

```
import rospy

if __name__ == "__main__":
    rospy.init_node("Hello")
    rospy.loginfo("Hello World!!!!")
```

2.编辑

可执行权限

```
chmod +x 自定义文件名.py
```



```
catkin_install_python(PROGRAMS scripts/自定义文件名.py
  DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
)
```

![image-20220531163147985](https://raw.githubusercontent.com/Eircly/eric/main/image-20220531163147985.png)

3，4同

![image-20220531163303385](https://raw.githubusercontent.com/Eircly/eric/main/image-20220531163303385.png)