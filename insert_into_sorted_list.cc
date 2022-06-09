#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> a; int n;
    while(!cin.fail())
    {
       if(cin >> n) a.push_back(n);
       else{
           cin.clear();
           cin.ignore();
           break;
       }
    }
    int x;
    cout << "Plz enter the number you want to insert: ";
    cin >> x;
    a.push_back(0);
    int i;
    for(i = a.size() - 2; i >=0 && x < a[i];i--)
    {
       a[i+1] = a[i];
    }
    a[i + 1] = x;
    cout << endl;
    for(auto &j : a)
    {
        cout << j << " ";
    }
    cout << endl;

    return 0;
}