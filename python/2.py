#阶梯电价
# dianliang = int(input())
# if dianliang < 0:
#     print("Invalid Value!")
# elif dianliang <= 50:
#     cost = dianliang * 0.53
# else:
#     cost = 50 * 0.53 + (dianliang - 50) * (0.53 + 0.05)
# if dianliang >= 0:
#     print("cost = %.2f" % cost)
# print('请输入矩阵元素')
# lst = list(map(int,input().split()))
# for i in range(0,9,3):
#     print('{:4d}'.format(lst[i]),end="")
# print("")
# for i in range(1,9,3):
#     print('{:4d}'.format(lst[i]),end="")
# print("")
# for i in range(2,9,3):
#     print('{:4d}'.format(lst[i]),end="")
# print("")

# a = list(map(int, input().split()))
# for i in range(3):
#     print(f"{a[i]:4}{a[i + 3]:4}{a[i + 6]:4}")
import math
class Complex:
    def __init__(self):
        self.x1=0
        self.x2=0
        self.y1=0
        self.y2=0
        self.x=self.x1-self.x2
        self.y=self.y1-self.y2
    def add(self):
        self.x1=int(input("input x1 "))
        self.y1=int(input("input y1 "))
        self.x2=int(input("input x2 "))
        self.y2=int(input("input y2 "))
        self.x=self.x1-self.x2
        self.y=self.y1-self.y2
    def out(self):
        print(self.x,self.y)
    def plus(self,a,b):         #向量相加
        self.x=a.x+b.x
        self.y=a.y+b.y
    def sub(self,a,b):         #向量相减
        self.x=a.x-b.x
        self.y=a.y-b.y
    def pointmuti(self,a,b):   #向量相乘
        return (a.x*b.x+a.y*b.y)
    def qiumo(self,m):         #向量求模
        return(((m.x)**2+(m.y)**2)**0.5)
v=Complex()
a=Complex()
b=Complex()
a.add()
b.add()
print("坐标1:",end="")
a.out()
print("坐标2:",end="")
b.out()
v.plus(a,b)
print("向量相加:",end="")
v.out()
v.sub(a,b)
print("向量相减:",end="")
v.out()
print("向量相乘:",end="")
print(v.pointmuti(a,b))
print("a模值%0.3f"%v.qiumo(a))
print("b模值%0.3f"%v.qiumo(b))
