#include <iostream>
using namespace std;
int division(float a, float b)
{
        if(b==0)
        {
            throw 1;
        }
        else {return a/b;}

}
int main()
{
    double x=10,y=3,z;
    try
    {
        z=division(x,y);
        cout<<z<<endl;

    }
    catch(int e)
    {
        cout<<"Division by zero "<<e<<endl;
    }
    cout<<"Bye"<<endl;
}
