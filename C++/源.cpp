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



    return 0;
}
