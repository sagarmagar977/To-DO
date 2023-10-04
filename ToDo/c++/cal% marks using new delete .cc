#include <iostream>
using namespace std;
int main(){
    int n,i ;
    float *m,*f,total_marks=0,full_marks=0;
    float p;
   
    cout<<"enter how many subjects are there : "<<endl;
    cin>>n;
    m=new float[n];
    f=new float[n];
    for(i=0;i<n;i++){
        cout<<"enter marks of sunbject "<<i+1<<":"<<endl;
        cin>>m[i];
        cout<<"enter full marks of that subject: "<<endl;
        cin>>f[i]; }
    for (i=0;i<n;i++){
        total_marks = total_marks + m[i];
        full_marks = full_marks + f[i];
    }
    //p=(static_cast <float> (total_marks)/full_marks)*100;
    p=(total_marks/full_marks)*100;
    cout<<"your percentage is :"<<p<<endl;
    delete[] f;
    delete[] m;
    return 0;


}