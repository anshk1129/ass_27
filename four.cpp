#include <iostream>
using namespace std;
class Time
{
    int hr, min, sec;

public:
    Time()
    {
    }
    friend ostream &operator<<(ostream &out, Time &t)
    {
        cout << "Time is " << endl;
       cout<<"Hours : "<<t.hr<<endl<<"Minutes : "<<t.min<<endl<<"Sec : "<<t.sec<<endl;
        return cout;
    }
    friend istream &operator>>(istream &input, Time &t)//&t isliye likha kyoki mujhe t1 or t2 k andr assign krna h
    {                                                      //agar aisa nhi likhunga to t1 or t2 m garbage jaega kyoki changes t m ho rhe h t1 m nhi(agar aise likhunga to(istream&in,Time T))
                                                     //copy constructor call hoga t1=t hoga or uske baad assign hoga t k andr value but t1 m to garbage hi rh jaega
        cout << "Enter the hour : ";
        input >> t.hr;
        cout << "Enter the min : ";
        input >> t.min;
        cout << "Enter the sec : ";
        cin >> t.sec;
        if (t.hr > 24 || t.min > 60 || t.sec > 60)
        {
            cout << "You have entered wrong time" << endl;
            exit(0);
        }
        return input;
    }
   friend bool operator==(Time t,Time t2){
        int val=(3600*t.hr)+(60*t.min)+(t.sec);
       int val1=(3600*t2.hr)+(60*t2.min)+(t2.sec);
       if(val1==val){
        return true;
       }
       return false;
    }
};
int main()
{
    Time t1, t2, t3;
    cout<<"Enter first Time"<<endl<<"------------------------"<<endl;
    // cin >> t1>>t2;
    cin>>t1; 
    cout<<t1;   
    cout<<"Enter second Time"<<endl<<"------------------------"<<endl;
    cin>>t2;
    cout<<t2;

    // cout << t1 << t2;
   
    if(t1==t2){
        cout<<" Times are Same"<<endl;
    }
    else{
        cout<<"Time are not Same"<<endl;
    }
    return 0;
}