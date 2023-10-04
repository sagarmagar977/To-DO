#include <iostream>
#include <cmath>
using namespace std;

class distance {
private:
    float x, y;

public:
    void getdata();
    float calculate(distance o1, distance o2);
};

void distance::getdata() {
    cout << "Enter value x-coordinate: ";
    cin >> x;
    cout << "Enter value of y-coordinate: ";
    cin >> y;
}

float distance::calculate(distance o1, distance o2) {
    float dx, dy, d;
    dx = o1.x - o2.x;
    dy = o1.y - o2.y;
    d = sqrt(dx * dx + dy * dy); // Corrected the formula here
    return d;
}

int main() {
    distance obj1, obj2;
    float a;
    obj1.getdata();
    obj2.getdata();
    a = obj1.calculate(obj1, obj2);
    cout << "Distance is: " << a << endl;
    return 0;
}
