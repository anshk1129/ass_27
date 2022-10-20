#include<iostream>
#include<cstring>
using namespace std;
class Cstring{
    char *arr;
    int size;
    public:
    Cstring(){
    arr=(char*)malloc(1);
    size=1;  
    }
        void setdata(char *str){
         size=strlen(str)+1;
         arr=(char*)malloc(size);
         strcpy(arr,str);
        }
    Cstring  operator+(Cstring s2){
      Cstring s3;
         s3.arr=(char*)malloc(sizeof(arr)+sizeof(s2.arr));
         strcpy(s3.arr,arr);
      strcat(s3.arr,s2.arr);
      return s3;
    }
    bool operator==(Cstring s2){
       bool r=strcmp(arr,s2.arr);
       return r;
    }
    void display(){
        cout<<arr<<endl;
    }
};
int main(){
    Cstring s1,s2,s3;
    s1.setdata("Ansh");
    s2.setdata("Ansh");
    s3=s1+s2;
    s1.display();
    s2.display();
    s3.display();
    if(!(s1==s2)){
    cout<<"Equal"<<endl;
    }   
    else{
        cout<<"Not Equal"<<endl;
    }
return 0;
}