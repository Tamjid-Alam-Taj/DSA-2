#include<bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> list4;
    int x;
    for(int i=0; i<5; i++)
    {


        cin>>x;
        list4.push_back(x);

    }
    cout<<list4.size()<<endl;


    for(int i=0; i<list4.size(); i++)
    {


        cout<<i<<" "<<list4[i]<<endl;

    }
    int i=3;
    list4.erase(list4.begin()+i);
    for(int x:list4)
        cout<<x<<endl;

}
