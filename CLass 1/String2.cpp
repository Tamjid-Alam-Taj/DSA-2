#include <iostream>
using namespace std;

int main()
{
    string str1 = "hello";
    string str2 = str1; // makes a new copy
    str1[0] = 'y'; // changes str1, but not str2
    cout << str1 << " " << str2 << endl;


    if (str2 == str1)
        cout << "str1 and str2 both changed! ! ! " << endl;
    if (str2 == "hello")
        cout << "str2 did not change! ! ! " << endl;



    return 0;
}

