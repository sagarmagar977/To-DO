#include <iostream>
using namespace std;
class complex{
    int real,img;
    public :
    void getdata();
    void showdata();
    complex add( complex c1, complex c2);

};
void complex ::getdata(){
    cout<<"enter real part of complex  number :"<<endl;
    cin>>real;
    cout<<"enter img part of complex number : "<<endl;
    cin>>img;
    };
void complex::showdata(){
 cout<< real<< "+"<<img<<"i"<<endl;
   
}
complex complex ::add( complex c1,complex c2){
    real=c1.real+c2.real;
    img=c1.img+c2.img;
    }

int main(){
    complex a,b,c;
    cout<<"#######################"<<endl;
    cout<<"For first complex number :"<<endl;
    a.getdata();
    cout<<"#######################"<<endl;
    cout<<"For second complex number :"<<endl;
    b.getdata();
    cout<<"#######################"<<endl;

    c.add(a,b);
    cout<<"#######################"<<endl;
    cout<<" first complex number is  :"<<endl;
    a.showdata();
    cout<<"#######################"<<endl;
    cout<<"second complex number is :" << endl ;
    cout<<"#######################"<<endl;

    b.showdata();
    cout<<"#######################"<<endl;
    cout<<"sum of two complex number is :"<<endl;
    c.showdata();
    cout<<"#######################"<<endl;
    return 0;
}

