//#include <iostream>
//using namespace std;
//
//class Cube {
//
//   
//private:
//    int length;
//    int width;
//    int height;
//public:
//    void setLength(int length) {
//        this->length = length;
//    }
//    int getLength() {
//        return length;
//    }
//    void setHeight(int height) {
//        this->height = height;
//    }
//    int getHeight() {
//        return height;
//    }
//    void setWidth(int width) {
//        this->width = width;
//    }
//    int getWidth() {
//        return width;
//    }
//    int getArea() {
//        return 2 * ((length * width) + (length * height) + (height * width));
//    }
//    int getVolume() {
//        return length * width * height;
//    }
//};
//
//int main() {
//
//    int length, width, height;
//    cout << "长";
//    cin >> length;
//    cout << "宽";
//    cin >> width;
//    cout << "高";
//    cin >> height;
//
//    Cube c;
//    c.setLength(length);
//    c.setWidth(width);
//    c.setHeight(height);
//
//    cout <<"长度是" << c.getLength() << " "
//        << "宽度是" << c.getWidth() << " "
//        << "高度是" << c.getHeight() << " "
//        << "面积是" << c.getArea() << " "
//        << "体积是" << c.getVolume() << endl;
//
//    return 0;
//}
//#include <iostream>
//using namespace std;
//class rectangle {
//private:
//	int length, width;
//public:
//	void set(int x, int y) {
//		length = x;
//		width = y;
//	}
//	int getlength() {
//		return length;
//	}
//	int getwidth() {
//		return width;
//	}
//	int area() {
//		return length * width;
//	}
//	void cancover(rectangle a) {
//		if (this->area() >= a.area()) {
//			cout << "yes";
//		}
//		else {
//			cout << "no";
//		}
//	}
//
//};
//int main() {
//	int l1, w1, l2, w2;
//	cin >> l1 >> w1 >> l2 >> w2;
//	rectangle a, b;
//	a.set(l1, w1);
//	b.set(l2, w2);
//	a.cancover(b);
//#include <iostream>
//using namespace std;
//const double PI = 3.14;
//class circle
//{
//public:
//	int m_r;
//	double mianji()
//	{
//		return 2 * PI * m_r;
//	}
//};
//int main()
//{
//	circle c1;
//	c1.m_r = 10;
//	cout << "圆的周长" << c1.mianji() << endl;
//
//}
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//// Person类
//class Person {
//public:
//    string name;    // 姓名
//    int age;    // 年龄
//
//    
//    Person(string n, int a) :name(n), age(a) {}
//
//    void showPerson() {
//        cout << "姓名" << name << " " << "年龄" << " "<< age << endl;
//    }
//};
//
//int main() {
//
//    string name;
//    int age;
//    cout << "请输入姓名";
//    cin >> name;
//    cout << "请输入年龄";
//    cin >> age;
//
//    Person p(name, age);
//    p.showPerson();
//
//    return 0;
//}
//#include <iostream>
//using namespace std;
//
//class Time {
//public:
//
//    int hours;      
//    int minutes;    
//
//    Time() {  
//        hours = 0;
//        minutes = 0;
//    }
//
//    Time(int h, int m) { 
//        this->hours = h;
//        this->minutes = m;
//    }
//
//    void show() {
//        cout <<"两者时间和是" << hours << "时" << minutes << "分"<<endl;
//    }
//
//    
//    Time operator+(Time& t) {
//        Time sum;
//        sum.hours = hours + t.hours + (minutes + t.minutes) / 60;  
//        sum.minutes = (minutes + t.minutes) % 60; 
//        return sum; 
//    }
//};
//
//int main() {
//
//    int h, m,l,i;
//    cout << "请输入时间 以空格区分" << endl;
//    cin >> h;
//    cin >> m;
//    cout << "您输入的是" << h << "时" << m << "分" << endl;
//    cout << "请输入时间 以空格区分"<< endl;
//    cin >> l;
//    cin >> i;
//    cout << "您输入的是" << l << "时" << i << "分" << endl;
//    Time t1(h, m);
//    Time t2(l, i);
//
//    Time t3 = t1 + t2;
//    t3.show();
//
//    return 0;
//}

