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
    cout << "�Ƿ���ã�" << endl;
    cin >> score;
    if(score==0)
    {
        cout << "�üһ�" << endl;
    }
    else if (score == 2) {
        cout << "��Ҳһ��" << endl;
    }
    else {
        cout << "�ɼİ�" << endl;
    
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
    cout << "��������²��ֵ:" << endl;
    cin >> a;
    int cishu = 1;
    while (true)
    {
       

        if (num != a)
        {
            if (a > num) {
                cout << "��ֵ����" << endl; 
            }
            else cout << "��ֵ��С" << endl; 


        }
        
       
        if (num == a) {
            cout << "��ϲ" << endl;
            break;
        }
        cishu++;
        if (cishu > 3) {
            cout << "����" << endl;
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

    //cout << !a << endl; // 0 a��Ϊ0����1���߼���

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
    //        continue;//�����2�ı������ͷ���ִ��forѭ������ӡi
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
    for (int i=0;i <5;i++)//��������
    {
        if (arr[i] > max)
        {
            max = arr[i];

        }
        
    }
    cout << max << endl;*/
//��������
    //int arr[5] = { 1,3,4,5,6 };
    //int start = 0;
    //int end = sizeof(arr) / sizeof(arr[0]) - 1;//����0Ϊ��ʼ����˼�һ ͨ��ռ�ÿռ�������������
    //while (start<end)
    //{
    //    int temp = arr[start];//���������ܸ��ǣ����Խ�����ʱֵ
    //    arr[start] = arr[end];//����
    //    arr[end] = temp;//��ʱֵ����
    //    start++; end--;
    //}
    //for(int i=0;i<5;i++)//���
    //{
    //    cout << arr[i] ;
    //}


    //int arr[9] = { 486,3,44,456,677,76,54,3,4 };
    ////ð���㷨//һֱ�໥�Ƚ� ����
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
    //int scores[3][3] =//����3*3
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
    //cout << names[i] << "ͬѧ�ܳɼ�Ϊ�� " << sum << endl;
    //}   
//int add(int num1, int num2) //num1,num2�β�
//{
//    int sum = num1 + num2;
//    cout << "num1 = " << num1 << endl;//�������10 100��Ӧ����
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
//    int* p = arr;  //ָ������
//    for (int j = 0; j < 10; j++)
//    {
//        cout << "Ԫ�أ� " << arr[j] << endl;
//    }
//    cout << "ָ����ʣ� " << *p << endl;
//
//    for (int i = 0; i < 10; i++)  //��������
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
//    cout << p << endl;//ָ��ָ������������ڵ�ַ �൱�ڼĴ�����λ��
//    cout << *p << endl;//*p���Ƕ�ȡ�Ĵ�������ֵ
//struct student
//{
//  
//    string name;  //��Ϣ
//    int age;      
//    int score;    
//};
//
//int main() {
//
//    //�ṹ������
//    struct student arr[3] =
//    {
//        {"����",18,80 },
//        {"����",19,60 },
//        {"����",20,70 }
//    };
//
//    for (int i = 0; i < 3; i++)
//    {
//        cout << "������" << arr[i].name << " ���䣺" << arr[i].age << " ������" << arr[i].score << endl;
//    }
    system("pause");
    return 0;
}