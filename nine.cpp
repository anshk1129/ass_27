#include <iostream>
#include <cstring>
using namespace std;
class Cstring
{
    char str[100];

public:
    Cstring(char *s)
    {
        strcpy(str, s);
    }
    void display()
    {
        cout << str << endl;
    }
    void operator!()
    {
        int st=strlen(str);
        for (int i = 0; i < st; i++)
        {

            if (str[i] >= 65 && str[i] <= 90)
            {
                str[i] = str[i] + 32;
            }
            else if(str[i] >= 97 && str[i] <= 122)
            {

                str[i] = str[i] - 32;
            }
        }
    }
};
    int main()
    {
        Cstring s1("KhanDeLwaL");
        cout<<"Befor !operator"<<endl;
        s1.display();
        !s1;
        cout<<"After ! operator"<<endl;
        s1.display();
        return 0;

    }