#include <iostream>
using namespace std;
//definining class
class complex{
    int real,img;
    public:
    void getdata();
    void displaydata();
    complex add(complex);
} ;

//defininf functions
void complex::getdata(){
    cout<<"enter the value of real and imaginary part: "<<endl;
    cin>>real>>img;
    }

void complex::displaydata(){
cout<<real<<"+"<<img<<"i"<<endl;
}

complex complex :: add(complex c){
    complex temp;
    temp.real= real+ c.real;
    temp.img= img + c.img;
    return temp;
    }






//defininf main
int main(){
    complex a,b,c;
    cout<<"for first complex number :"<<endl;
    a.getdata();
    cout<<"for second complex number :"<<endl;
    b.getdata();
    c=b.add(a);
    cout<<"First  complex number is :"<<endl;
    a.displaydata();
    cout<<"second  complex number is :"<<endl;
    b.displaydata();
    cout<<"Sum of  complex numbers are  :"<<endl;
    c.displaydata();
    return 0; }
