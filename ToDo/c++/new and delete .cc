#include <iostream>
using namespace std;
int n,avg,*p,i;
int total=0;
int main(){
        cout<<" how many number u want to input"<< endl;
        cin>>n;
        p=new int[n];
        for(i=0 ; i<n  ; ++i){
        cout<<"enter number "<<i+1<<":"<<endl;
        cin>> p[i] ;

        }
        for(i=0;i<n;i++ ){
        total=total + p[i];
          }
        avg=total/n;
        cout<<"average  is :"<<avg<<endl;
        delete[]  p;
        return 0;
        


}

