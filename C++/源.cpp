#include <iostream>

#include <iomanip>
using namespace std;

int main() {

    /*��������
    double a;
    cin >> a;

    
    if (a > 0)
        cout << (int)(a + 0.5);
    else cout << (int)(a - 0.5);*/


      /*��Ӽ�
      int a;int  b;
        cin >> a; cin >> b;
        if (-1000 < a && a< 1000 && -1000 < b && b< 1000)
        {
            cout << a + b << endl;
        }
        else cout << "����" << endl;*/
      /*�ȴ�С
      int a, b;
     
        cin >> a >> b;
        cout << max(a, b);*/
      /*��������� int ��Χ���������ĺͣ�������̣�ģ
      int a, b;
        cin >> a >> b;
        if (a < b) 
            swap(a, b);
   
        cout<<"a+b=" << a + b << " " << "a-b=" << a - b << " " << "a*b=" << a * b << " " << "a/b=" << a / b << " " << "a%b=" << a % b << endl;
        */
    /*�ȴ�С
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;

    
    std::cout << ((a > b ? a : b) > c ? (a > b ? a : b) : c);*/
    /*ţţ�̳��������
��100��9�ۣ�
��500��8�ۣ�

��2000��7�ۣ�

��5000��6��
    double price;
    cin >> price;

    double cost = 0.0;
    if (price >= 5000) {
        cost = price * 0.6;
    }
    else if (price >= 2000) {
        cost = price * 0.7;
    }
    else if (price >= 500) {
        cost = price * 0.8;
    }
    else if (price >= 100) {
        cost = price * 0.9;
    }
    else {
        cost = price;
    }

    cout << setiosflags(ios::fixed) << setprecision(1) << cost << endl;*/
    /*���
    double weight;
    double height;

    cout << "����������";
    cin >> weight;
    cout << "���������";
    cin >> height;

    double BMI = weight / (height * height);
    if (BMI < 18.5) {
        cout << "ƫ��" << endl;
    }
    else if (BMI >= 18.5 && BMI < 20.9) {
        cout << "����" << endl;
    }
    else if (BMI >= 20.9 && BMI < 24.9) {
        cout << "����" << endl;
    }
    else {
        cout << "ƫ��" << endl;
    }*/
    /*�ɼ�
    int score;
    cout << "������ɼ�";
    cin >> score ;
    if (score < 0 || score>100) cout << "�ɼ����Ϸ�";
    else if (score >= 90 && score <= 100) cout << "����";
    else if (score >= 80 && score <= 89) cout << "��"; 
    else if (score >= 70 && score <= 79) cout << "��";
    else if (score >= 60 && score <= 69) cout << "����"; 
    else cout << "��"; */
    //int month;
    //cout << "�������·�";
    //cin >> month;

    ////3-5��Ϊ����
    //if (month >= 3 && month <= 5) {
    //    cout << month << "���Ǵ���" << endl;
    //}
    ////6-8��Ϊ�ļ�
    //else if (month >= 6 && month <= 8) {
    //    cout << month << "�����ļ�" << endl;
    //}
    ////9-11��Ϊ�＾
    //else if (month >= 9 && month <= 11) {
    //    cout << month << "�����＾" << endl;
    //}
    ////12-2��Ϊ����
    //else if (month == 12 || month == 1 || month == 2) {
    //    cout <<month << "���Ƕ���" << endl;
    //}
    ////���������������Ϸ�
    //else {
    //    cout << "���Ϸ�" << endl;
    //}
    int n;
    cin >> n;
    int sum = 0;

    for (int i = 2; i <= n; i++)
    {
        if (i % 2 == 0) {
        sum += i;
    }
    }


    cout << sum << endl;
    return 0;
}
