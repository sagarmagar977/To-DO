#include <iostream>
using namespace std;
class second ;
class first {
    int secret;
    friend class second ;
    public:
    void setvalue();
    void display();
};

void first::setvalue(){
    secret=5;

}

void first::display(){
    cout<<"secret value is "<<secret<<endl;
}
class second {
    public:
    void change( first &obj,int x){
        obj.secret=x;
    }
};
int main(){
     first a;
     second b;
     a.setvalue();
     b.change(a,90);
     a.display();
     
     
     }

