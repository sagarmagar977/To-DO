#include <iostream>
using namespace std;

class complex {
    int real, img;

public:
    void getdata();
    void showdata();
    void add(complex, complex);
};

void complex::getdata() {
    cout << "Enter real part of complex number: " << endl;
    cin >> real;
    cout << "Enter imaginary part of complex number: " << endl;
    cin >> img;
}

void complex::showdata() {
    cout << "The complex number is: " << real << "+" << img << "i" << endl;
}

void complex::add(complex c1, complex c2) {
    real = c1.real + c2.real;
    img = c1.img + c2.img;
}

int main() {
    complex a, b, c;
    a.getdata();
    b.getdata();
    c.add(a, b);

    // Display the updated complex numbers
    cout << "Complex number a: ";
    a.showdata();

    cout << "Complex number b: ";
    b.showdata();

    cout << "Sum of complex numbers a and b: ";
    c.showdata();

    return 0;
}
