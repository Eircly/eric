#include  <iostream>
using namespace std;

void get(int x) {
    int y = x / 16;
    int z = x % 16;
    if (y >= 16)
    {
        get(y);
    }
    else
    {
        switch (y)
        {
        case 0:
            cout << "0";
            break;
        case 1:
            cout << "1";
            break;
        case 2:
            cout << "2";
            break;
        case 3:
            cout << "3";
            break;
        case 4:
            cout << "4";
            break;
        case 5:
            cout << "5";
            break;
        case 6:
            cout << "6";
            break;
        case 7:
            cout << "7";
            break;
        case 8:
            cout << "8";
            break;
        case 9:
            cout << "9";
            break;
        case 10:
            cout << "A";
            break;
        case 11:
            cout << "B";
            break;
        case 12:
            cout << "C";
            break;
        case 13:
            cout << "D";
            break;
        case 14:
            cout << "E";
            break;
        default:
            cout << "F";
        }
    }
    switch (z)
    {
    case 0:
        cout << "0";
        break;
    case 1:
        cout << "1";
        break;
    case 2:
        cout << "2";
        break;
    case 3:
        cout << "3";
        break;
    case 4:
        cout << "4";
        break;
    case 5:
        cout << "5";
        break;
    case 6:
        cout << "6";
        break;
    case 7:
        cout << "7";
        break;
    case 8:
        cout << "8";
        break;
    case 9:
        cout << "9";
        break;
    case 10:
        cout << "A";
        break;
    case 11:
        cout << "B";
        break;
    case 12:
        cout << "C";
        break;
    case 13:
        cout << "D";
        break;
    case 14:
        cout << "E";
        break;
    default:
        cout << "F";
    }
}

int main() {
    int x;
    cin >> x;
    get(x);
    return 0;
}
//#include <iostream>
//#include <string>
//using namespace std;
//
//string toHexString(int n);
//
//int main() {
//
//    int n;
//    cin >> n;
//
//    string hexStr = toHexString(n);
//    cout << hexStr << endl;
//
//    return 0;
//}
//
//string toHexString(int n) {
//    
//    string res = "";
//    while (n != 0) {
//        //取余
//        int mod = n % 16;
//        //如果是0-9，则对应字符'0'-'9'
//        if (mod >= 0 && mod <= 9) {
//            char c = mod + '0';
//            //将字符加在res前面
//            res = c + res;
//        }
//        //如果是10-15，则对应字符'A'-'F'
//        else {
//            char c = mod - 10 + 'A';
//            //将字符加在res前面
//            res = c + res;
//        }
//        n = n / 16;
//    }
//    return res;
//}
