#include <iostream>
using namespace std;
class num{
    int n1,n2;
    public:
    void setvalue();
    friend float mean( num);
    };

void num::setvalue(){
    cout<<"enter first numbers :";
    cin>>n1;
    cout<<"enter second numbers :";
    cin>>n2;
    }
float mean( num c ){
     float a = ((c.n1 + c.n2)/2.0); 
     return a;
    }

int main(){
    num a;
    a.setvalue();
    cout<<" mean of two no. is :"<<mean(a);
    return 0;
    
}