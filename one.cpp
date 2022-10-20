#include<iostream>
using namespace std;
//we can also make all these operators using friend function
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
Complex operator+(Complex c){
Complex temp; 
temp.real=real+c.real;
temp.imaginary=imaginary+c.imaginary;
return temp;
}
Complex operator-(Complex c){
Complex temp; 
temp.real=real-c.real;
temp.imaginary=imaginary-c.imaginary;
return temp;
}
Complex operator*(Complex c){
Complex temp; 
temp.real=real*c.real;
temp.imaginary=imaginary*c.imaginary;
return temp;
}
bool operator==(Complex c){
bool f=true,f1=false;
if(real==c.real&&imaginary==c.imaginary)
return f;
return f1;

}
};
int main(){
    Complex c1(10,20),c2(30,40),c4,c5;
    Complex c3=c1+c2;
    c4=c1-c2;
    c5=c1*c2;
    c1.display();
    c2.display();
    cout<<"Addition overloading"<<endl;
    c3.display();
     cout<<"Subtraction overloading"<<endl;
    c4.display();
     cout<<"Multiplcation overloading"<<endl;
    c5.display();
     cout<<"Equal to (==) overloading"<<endl;
     if(c3==c1){
        cout<<"Equal"<<endl;
     }
     else{
        cout<<"Not Equal"<<endl;
     }
     return 0;
}  