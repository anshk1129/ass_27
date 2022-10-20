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
  Matrix operator-(){
    Matrix m1;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
        {
           m1.arr[i][j]=-arr[i][j];

        }
   }
   return m1;
   }
//    void operator-(){
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++)
//         {
//            arr[i][j]=-arr[i][j];

//         }
//    }
//    }
};
int main(){
    Matrix m,m2;
    m.setdata();
    m.show();
    -m;
    m2=-m;
    m.show();
    m2.show();
    return 0;
}