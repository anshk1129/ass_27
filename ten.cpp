#include<iostream>
using namespace std;
class Matrix{
int arr[3][3];
public:
void setdata(){
    cout<<"Enter the elements in an array"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
}
  void show(){
    cout<<"Displaying:"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<"\t";

        }
        cout<<endl;
    }
  }
  Matrix operator+(Matrix m1){
    Matrix temp;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
        {
           temp.arr[i][j]=arr[i][j]+m1.arr[i][j];

        }
    }
    return temp;

  }
  
};
int main(){
    Matrix m,m1,m2;
    m.setdata();
    m1.setdata();
    m2=m+m1;
    m.show();
    m1.show();
    m2.show();
    return 0;
}