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
#include <iostream>
using namespace std;
class rectangle {
private:
	int length, width;
public:
	void set(int x, int y) {
		length = x;
		width = y;
	}
	int getlength() {
		return length;
	}
	int getwidth() {
		return width;
	}
	int area() {
		return length * width;
	}
	void cancover(rectangle a) {
		if (this->area() >= a.area()) {
			cout << "yes";
		}
		else {
			cout << "no";
		}
	}

};
int main() {
	int l1, w1, l2, w2;
	cin >> l1 >> w1 >> l2 >> w2;
	rectangle a, b;
	a.set(l1, w1);
	b.set(l2, w2);
	a.cancover(b);
	return 0;
}
