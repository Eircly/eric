#python学习
#1. 斐波那契数列
# def feibo(num2,num3):
#     global num1
#     if num1 != 0:
#         num1 -= 1
#         print(num3)
#     else:
#         return 0
#     return feibo(num3, num2+num3)
#
#
# num1 = eval(input("请输入需要展示斐波那契数列的项数:"))
# num1 -= 1
# print(0)
# feibo(0, 1)
# print('请输入需要展示斐波那契数列的项数:')
# n=input()
# n=int(n)
# m=n-1
# def feibo(m):
#     if m <= 1:
#         return m
#     else:
#         return(feibo(m-1) + feibo(m-2))
# for i in range(0,1+m):
#     print(feibo(i),end=' ')
#斐波那契的图
# from turtle import *  # 参考csdn https://blog.csdn.net/lzqg1990/article/details/94006663
# import cmath
#
# speed(10)
# pensize(5)
#
#
# def little(a, b):
#     if a < b:
#         return a
#     else:
#         return b
#
#
# x0 = 200
# y0 = 100
# r = little(2 * x0, 2 * y0)
#
#
# def square_sector(r, color_couple):
#     color("red", color_couple[0])
#     begin_fill()
#     fd(r)
#     rt(90)
#     fd(r)
#     end_fill()
#     color("black", color_couple[1])
#     begin_fill()
#     for i in range(2):
#         rt(90)
#         fd(r)
#     rt(90)
#     circle(-r, 90)
#     end_fill()
#
#
# golden_ratio = 0.618
#
# color_ls = [["#FFFFFF", "#EDCB67"], ["#B58539", "#7D6A98"], \
#             ["#FAC374", "#02ACA9"], ["#D87D84", "#DA8F3C"], ["#769A43", "#CF4749"], ["#D87D84", "#DA8F3C"],
#             ["#769A43", "#CF4749"], ["#D87D84", "#DA8F3C"], ["#769A43", "#CF4749"]]
#
# pu()
# goto(x0, y0)
# pd()
# seth(-90)
#
# for i in range(8):  # 次数
#     r = 300 * (golden_ratio ** i)  # 边长
#     square_sector(r, color_ls[i])  # 对应颜色圈。range值<圈数
#
# hideturtle()
# done()
# #3.加密
# def crypt(source,key):
#     from itertools import cycle
#     result=''
#     temp=cycle(key)
#     for ch in source:
#         result=result+chr(ord(ch)^ord(next(temp)))
#     return result
#
# source=input()
# key='zWrite'
#
# print('加密前:'+source)
# encrypted=crypt(source,key)
# print('加密后:'+encrypted)
# decrypted=crypt(encrypted,key)
# print('解密后:'+decrypted)
#4自定义坐标相加减
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