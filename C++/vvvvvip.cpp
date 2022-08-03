#include <iostream>
#include <deque>
using namespace std;

class Guest {
public:
    string name;
    bool vip;

    Guest(string name, bool vip) {
        this->name = name;
        this->vip = vip;
    }
};

int main() {

    Guest guest1("张三", false);
    Guest guest2("李四", false);
    Guest vipGuest("王五", true);
    deque<Guest> deque;

    //将guest1和guest2分别从队尾入队
    deque.push_back(guest1);
    deque.push_back(guest2);
    //将vipGuest从队头入队
    deque.push_front(vipGuest);

    for (Guest g : deque) {
        cout << g.name << " ";
    }

    return 0;
}
