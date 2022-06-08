#include<iostream>
#include<vector>
using namespace std;


void one_bubble(vector<int> &a, int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        int j = i + 1;
        if(a[i] > a[j]) 
        {
            int tmp = n;
            n = a[i];
            a[i] = a[j];
            a[j] = n;
        }
    } 
}
int main()
{
      vector<int> a; int n;
      while(cin >> n)
      {
          a.push_back(n);
      }
      for(int i = a.size(); i > 1 ; i--)
      {
          one_bubble(a,i);
      }
      cout << endl;
      for(auto j : a)
      {
          cout << j <<" ";
      }
      cout <<endl;
}