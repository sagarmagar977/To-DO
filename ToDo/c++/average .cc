#include <iostream>
using namespace std;
int main(){
    int n,i,*p,avg;
    int total=0;
    
    p=new int[n];

    cout<<"enter how many number you want : "<<endl;
    cin>>n;
    for (i=0;i<n;i++){
        cout<<"enter number "<<i+1<<":"<<endl;
        cin>>p[i]; 
           }
    for ( i=0 ; i<n ; i++){
        total = total + p[i];

    }
    avg= total/n;
    cout << "average of the numbers is: "<<avg<<endl;
    delete[] p;
    return 0;  //displaying average value.
}