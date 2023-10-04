#include <iostream>
#include <windows.h>
using namespace std;
class age{
    private:
    int c_date,c_month,c_year,b_date,b_month,b_year,age_year,age_month,age_date;
    public:
    void getdata();
    void calculate();
    void display();

};
void age :: getdata(){
    cout << "enter  current date : " <<endl;
    cin>>c_date;
    cout << "enter  current month : " <<endl;
    cin>>c_month;

    cout << "enter  current year : " <<endl;
    cin>>c_year;
    cout << "enter  birth date  :" <<endl;
    cin>>b_date;
    cout << "enter  birth month :" <<endl;
    cin>>b_month;
    cout << "enter  birth year : " <<endl;
     cin>>b_year;
    
}
void age :: calculate(){

    age_year=c_year-b_year;
    if (c_month>b_month){
        age_month=c_month-b_month;
    }
    else {
        age_month=(c_month +12 )-b_month;
        age_year=age_year - 1;
    }


    //if ((c_month<=b_month)&&(c_date<b_date)){
      //  age_date=30-(b_date-c_date);
        //}
    if ((c_date<b_date)){
        age_date=30-(b_date-c_date);
        }
    else if ((c_date>b_date)){
        age_date=(c_date-b_date);
        }
    
    else if (c_date==b_date){
        age_date=0;
    }
    }

    

void age::display(){
     if (c_date==b_date && c_month==b_month){
        age_year=age_year + 1;
       cout<<"your age is "<<age_year<<endl;
        cout<<"HAPPY BIRTHDAY"<<endl; }
     else {
    cout<<"your age is "<<age_year<<" year "<<age_month<<" months and "<<age_date<<" days"<<endl;
}
}

int main(){

    age obj1;
    obj1.getdata();
    obj1.calculate();
    obj1.display();
    
    
    return 0;
}