#include <iostream>
#include<ctime>
#include<cstdlib>
#include<string>
using namespace std;
//int main() {
    /*string str = "hello";
    cout << "Hello World!" << endl;
    cin >> str;
    cout << "zifu=" <<str<<endl; */
    /*int a3 = 10;
    int b3 = ++a3 * 10;
    cout << a3 << endl;
    cout << b3 << endl;*/
    /*a += 2;
    cout << a << endl;*/
    /*int score = 0;
    cout << "是否摆烂：" << endl;
    cin >> score;
    if(score==0)
    {
        cout << "好家伙" << endl;
    }
    else if (score == 2) {
        cout << "俺也一样" << endl;
    }
    else {
        cout << "躺寄拜" << endl;
    
    }*/
    /*int a = 10; int b = 5;int c = 0;
    c = a > b ? a : b;
    cout << c << endl; */
    /*int a = 0; int n = 0;
    cin >> n;
    while (a < n) 
    {
        cout << a << endl;
        a++;
    }*/
    /*srand((unsigned int)time(NULL));
    int num = rand() % 100 +  1;
    cout << "请输入你猜测的值:" << endl;
    cin >> a;
    int cishu = 1;
    while (true)
    {
       

        if (num != a)
        {
            if (a > num) {
                cout << "数值过大" << endl; 
            }
            else cout << "数值过小" << endl; 


        }
        
       
        if (num == a) {
            cout << "恭喜" << endl;
            break;
        }
        cishu++;
        if (cishu > 3) {
            cout << "寄了" << endl;
            break;
        }  cin >> a;
    }*/
    /*int num = 0;
    do {
        cout << num << endl;
        num++;
    } while (num < 10); */
    ///*int s = 1;
    //while (s<=1)
    //{
    //    cout << "jishu "<< s << endl;
    //    s++;
    //}*/
    //int a = 10;

    //cout << !a << endl; // 0 a不为0就是1（逻辑）

    //cout << !!a << endl; // 1
    /*for (int i = 1; i < 10; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            cout << j << "*" << i << "=" << j * i << " ";
        }
        cout << endl;

    }*/
    //for (int i = 0; i < 100; i++)
    //{
    //    if (i % 2 == 0)
    //    {
    //        continue;//如果是2的倍数，就返回执行for循环不打印i
    //    }
    //    cout << i << endl;
    //}
   /* cout << "sdhfg" << endl;
    cout << "sdhfg" << endl; 
    cout << "sdhfg" << endl;
    goto zheli;
    cout << "sdhfg" << endl;
    zheli:
    cout << "youxian" << endl;*/
    //int score[5];
    //score[0] = 1;
    //cout << sizeof(score) << endl;//10-40 5-20
    //cout << score << endl;
    //cout << score [0] << endl;
    /*int arr[5] = {300,350,200,400,500};
    int max = 0; 
    for (int i=0;i <5;i++)//遍历数组
    {
        if (arr[i] > max)
        {
            max = arr[i];

        }
        
    }
    cout << max << endl;*/
//数组逆置
    //int arr[5] = { 1,3,4,5,6 };
    //int start = 0;
    //int end = sizeof(arr) / sizeof(arr[0]) - 1;//数组0为开始，因此减一 通过占用空间来导入数个数
    //while (start<end)
    //{
    //    int temp = arr[start];//交换但不能覆盖，所以建立临时值
    //    arr[start] = arr[end];//互换
    //    arr[end] = temp;//临时值返回
    //    start++; end--;
    //}
    //for(int i=0;i<5;i++)//输出
    //{
    //    cout << arr[i] ;
    //}


    //int arr[9] = { 486,3,44,456,677,76,54,3,4 };
    ////冒泡算法//一直相互比较 交换
    //for (int i = 0; i < 9 - 1; i++)
    //{
    //    for (int j = 0; j < 9 - 1 - i; j++)
    //    {
    //        if (arr[j] > arr[j + 1])
    //        {
    //            int temp = arr[j];
    //            arr[j] = arr[j + 1];
    //            arr[j + 1] = temp;
    //        }
    //    }
    //}

    //for (int i = 0; i < 9; i++)
    //{
    //    cout << arr[i] << endl;
    //}
    //int scores[3][3] =//数组3*3
    //    {
    //    {100,100,100},
    //    {60,50,100},
    //    {60,70,80},
    //    };

    // string names[3] = { "sue","eric","hxd" };

    //for (int i = 0; i < 3; i++)
    //{
    //    int sum = 0;
    //     for (int j = 0; j < 3; j++)
    //     {
    //          sum =sum+ scores[i][j];//sum += scores[i][j];
    //      }
    //cout << names[i] << "同学总成绩为： " << sum << endl;
    //}   
//int add(int num1, int num2) //num1,num2形参
//{
//    int sum = num1 + num2;
//    cout << "num1 = " << num1 << endl;//输出两次10 100对应两次
//    return sum;
//}
//
//int main() {
//    int a = 10;
//    int b = 20;
//    int sum = add(a, b);
//    cout << "sum = " << sum << endl;
//    cout << "a = " << a << endl;
//    
//    a = 100;
//    b = 100;
//    sum = add(a, b);
//    cout << "sum = " << sum << endl;
//int main() {
//
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//
//    int* p = arr;  //指向数组
//    for (int j = 0; j < 10; j++)
//    {
//        cout << "元素： " << arr[j] << endl;
//    }
//    cout << "指针访问： " << *p << endl;
//
//    for (int i = 0; i < 10; i++)  //遍历数组
//    {
//      
//        cout << *p << endl;
//        p++;
//    }
//int main(){
//    int    a = 10;
//    int *p;
//    p = &a;//int *p = &a;
//    cout << &a << endl;
//    cout << p << endl;//指针指向的是数据所在地址 相当于寄存器，位置
//    cout << *p << endl;//*p就是读取寄存器的数值
//struct student
//{
//  
//    string name;  //信息
//    int age;      
//    int score;    
//};
//
//int main() {
//
//    //结构体数组
//    struct student arr[3] =
//    {
//        {"张三",18,80 },
//        {"李四",19,60 },
//        {"王五",20,70 }
//    };
//
//    for (int i = 0; i < 3; i++)
//    {
//        cout << "姓名：" << arr[i].name << " 年龄：" << arr[i].age << " 分数：" << arr[i].score << endl;
//    }
    system("pause");
    return 0;
}