#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> a,r; int n;
    while(cin >> n)
    {
       a.push_back(n);
       r.push_back(0);
    }
    for(int i = 1; i < a.size();i++)
    {
        for(int j = 0;j < i; j++)
        {
            if(a[i] >= a[j]) r[i]++;
            else r[j]++;
        }
    }
    for(auto i : r)
    {
        cout << i << endl;
    
    return 0;
}