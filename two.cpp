#include<iostream>
using namespace std;
class Complex{
int real,imaginary;
public:
Complex(){

}
Complex(int r,int i){
real=r;
imaginary=i;
}
/*friend  Complex operator++(Complex c1){
  Complex c2;
  c2.real=++c1.real;
  c2.imaginary=++c1.imaginary;
  return c2;
}*/
/*Complex operator++(){
  Complex tem;
  tem.real=++real;  yaha bs aisa likhna pdega main function mai p2=++p2 agar kisi or m assign krna h to
  tem.imaginary=++imaginary;                                p3=++p2 
  return tem;                        aisa hi post k liye ho jaega
  
}*/
  void operator++(){
  
  real=++real;
  imaginary=++imaginary;
  
}
void operator++(int dummy){ //yaha pr dummy bs ek difference ka kaam kr rha h or kuch nhi h
  
  real=real++;
  imaginary=imaginary++;
  
}
void display(){
    cout<<"Real = "<<real<<" Imaginary = "<<imaginary<<endl;
} 
};
int main(){
    Complex c1(10,20),c2(1,2);
    cout<<"Before preincrement"<<endl;
    c1.display();
    // c1=++c1; agar friend bnaenge to ye krna pdega
    ++c1;
    cout<<"After preincrement"<<endl;
    c1.display();
    cout<<"Before postincrement"<<endl;
    c2.display();
    c2++;
    cout<<"After postincrement"<<endl;
    c2.display();
    return 0;


}