#include<iostream>
using namespace std;
class Numbers
{
int x,y,z;
public:
 Numbers(int a,int b,int c){
    x=a;y=b;z=c;
 }
//  friend void operator-(Numbers &n1){
//     n1.x=-n1.x;
//     n1.y=-n1.y;
//     n1.z=-n1.z;
//  }
void operator-(){
    x=-x;
    y=-y;
    z=-z;
}
void display(){
    cout<<" x = "<<x<<endl<<" y = "<<y<<endl<<" z = "<<z<<endl;
}
};
int main(){
    Numbers n1(10,11,12),n2(1,2,3);
    n1.display();
    n2.display();
    // -n1; iss case m normal wala call hoga
    -n1;
    -n2;
    // operator-(n1); iss case m friend wala call hoga
    n1.display();
    n2.display();
    return 0;
    
}