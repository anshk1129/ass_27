#include<iostream>
using namespace std;
class fraction
{
long int numerator;
long int denominator;
public:
fraction (){
    numerator=0;
     denominator=0;
}
void setdata(){
    cout<<"Enter fraction (numerator/denominator)"<<endl;
    cin>>numerator>>denominator;
}
void display(){
 
  cout<<"Numerator : "<<numerator<<endl;
  cout<<"Denominator : "<<denominator<<endl;
}
fraction operator++(int useless){
    fraction temp=*this;
    numerator++;
    denominator++;
    return temp;

   }
   fraction operator++(){
    ++numerator;
    ++denominator;
    return (*this);
   }

};
int main(){
    fraction f1,f2;
    f1.setdata();
    f2.setdata();
    cout<<"------------------------Before postincrement-------------------"<<endl;
    f1.display();
    cout<<"After f1++ :"<<endl;
    f1++;
    f1.display();
    cout<<"------------------------Before preincrement-------------------"<<endl;
    f2.display();
    cout<<"++f2 : "<<endl;
    ++f2;
    f2.display();
    cout<<"f2=++f1"<<endl;
    f2=++f1;
    f1.display();
    f2.display();
    cout<<"f2=f1++"<<endl;
    f2=f1++;
    cout<<"f1"<<endl;
    f1.display();
    cout<<"f2"<<endl;
    f2.display();


    return 0;

}