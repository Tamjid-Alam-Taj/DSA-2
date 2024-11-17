#include <iostream>
using namespace std;
long long int power(int x, int y)
{

    if (y==0)
    {
        return 1;
    }
    int mid=y/2;
    int p=power(x,mid);
    if(y%2==0)
    {
        return p*p;

    }
    else
    {
        return p*p*x;
    }
}

int main()
{
    int x, y;

    cout << "base (x): ";
    cin >> x;

    cout << "expo (y): ";
    cin >> y;

    cout << x << " power " << y << " is: " << power(x, y) << endl;

    return 0;
}

