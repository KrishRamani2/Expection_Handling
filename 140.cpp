#include<iostream>
using namespace std;
class MyException1:exception
{};
class MyException2:public MyException1
{};
int main()
{
    try 
    {
        throw MyException1();
    }
    catch(int e)
    {
        cout<<"Int Catch"<<endl;
    }
    catch(double e)
    {
        cout<<"Int catch"<<endl;
    }
    catch(MyException2 e)
    {cout<<"MyException 2 catch";}
    catch(MyException1 e)
    {cout<<"MyException 1 catch";}
    catch(...)
    {
        cout<<"All catch"<<endl;
    }
}