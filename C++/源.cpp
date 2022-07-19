#include <iostream>

#include <iomanip>
using namespace std;

int main() {

    /*四舍五入
    double a;
    cin >> a;

    
    if (a > 0)
        cout << (int)(a + 0.5);
    else cout << (int)(a - 0.5);*/


      /*相加减
      int a;int  b;
        cin >> a; cin >> b;
        if (-1000 < a && a< 1000 && -1000 < b && b< 1000)
        {
            cout << a + b << endl;
        }
        else cout << "错误" << endl;*/
      /*比大小
      int a, b;
     
        cin >> a >> b;
        cout << max(a, b);*/
      /*输出这两个 int 范围的正整数的和，差，积，商，模
      int a, b;
        cin >> a >> b;
        if (a < b) 
            swap(a, b);
   
        cout<<"a+b=" << a + b << " " << "a-b=" << a - b << " " << "a*b=" << a * b << " " << "a/b=" << a / b << " " << "a%b=" << a % b << endl;
        */
    /*比大小
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;

    
    std::cout << ((a > b ? a : b) > c ? (a > b ? a : b) : c);*/
    /*牛牛商场促销活动：
满100打9折；
满500打8折；

满2000打7折；

满5000打6折
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
    /*身高
    double weight;
    double height;

    cout << "请输入体重";
    cin >> weight;
    cout << "请输入身高";
    cin >> height;

    double BMI = weight / (height * height);
    if (BMI < 18.5) {
        cout << "偏瘦" << endl;
    }
    else if (BMI >= 18.5 && BMI < 20.9) {
        cout << "苗条" << endl;
    }
    else if (BMI >= 20.9 && BMI < 24.9) {
        cout << "适中" << endl;
    }
    else {
        cout << "偏胖" << endl;
    }*/
    /*成绩
    int score;
    cout << "请输入成绩";
    cin >> score ;
    if (score < 0 || score>100) cout << "成绩不合法";
    else if (score >= 90 && score <= 100) cout << "优秀";
    else if (score >= 80 && score <= 89) cout << "良"; 
    else if (score >= 70 && score <= 79) cout << "中";
    else if (score >= 60 && score <= 69) cout << "及格"; 
    else cout << "差"; */
    //int month;
    //cout << "请输入月份";
    //cin >> month;

    ////3-5月为春季
    //if (month >= 3 && month <= 5) {
    //    cout << month << "月是春季" << endl;
    //}
    ////6-8月为夏季
    //else if (month >= 6 && month <= 8) {
    //    cout << month << "月是夏季" << endl;
    //}
    ////9-11月为秋季
    //else if (month >= 9 && month <= 11) {
    //    cout << month << "月是秋季" << endl;
    //}
    ////12-2月为冬季
    //else if (month == 12 || month == 1 || month == 2) {
    //    cout <<month << "月是冬季" << endl;
    //}
    ////其它情况，输出不合法
    //else {
    //    cout << "不合法" << endl;
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
