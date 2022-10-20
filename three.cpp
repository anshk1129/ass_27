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
void display(){
    cout<<"Real = "<<real<<" Imaginary = "<<imaginary<<endl;
} 
friend Complex operator+(Complex c1,Complex c2){
Complex temp; 
temp.real=c1.real+c2.real;
temp.imaginary=c1.imaginary+c2.imaginary;
return temp;
}
};
int main(){
     Complex c1(27,28),c2(100,200);
     Complex c3=c1+c2;
     c3.display();
     return 0;

}