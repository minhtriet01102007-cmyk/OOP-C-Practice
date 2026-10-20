#include <iostream>
#include "MyExp.h"
using namespace std;
int Chia(int a, int b)
{
    return a/b;
}
int main()
{
    int x, y;
    do
    {
        cout << "x = ";
        cin >> x;
        cout << "y = ";
        cin >> y;
        try
        {
            if(y == 0)
                //throw 1;
                //throw 1.1;
                //throw "Ngu lam";
                //throw Exp("Ngu Lam");
                throw MyExp("Ngu Lam", 1);
            else
                cout << Chia(x, y);
        }
        catch(int& e)
        {
            cout << "int: " << e << '\n';
        }
        catch(double& e)
        {
            cout << "double: " << e << '\n';
        }
        catch(MyExp& e)
        {
            cout << e;
        }
        catch(Exp& e)
        {
            cout << e;
        }

        catch(...)
        {
            cout << "Bo bat duoc roi";
        }
    } while (y == 0);

    //code
}