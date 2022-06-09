#include<iostream>
#include<vector>
using namespace std;
int bi(int x, vector<int> &a)
{
    int left = 0; int right = a.size() - 1;
    while(left <= right)
    {
        int mid = (left + right) / 2;
        if(a[mid] == x) {return mid;}
        else if (a[mid] < x)
        {
           left = mid + 1;
        }
        else right = mid - 1;
        
    }
    return -1;
}
int main()
{
      vector<int> a; int n;
      while(cin >> n)
      {
          a.push_back(n);
      }
      cin.clear();cin.ignore();
      cout << "Plz enter the number which you want to search: ";
      int x;
      cin >> x;
      int index = bi(x,a);
      if(index == -1) {cout<<"No match!"<<endl; return 0;}
      else {cout<<"Find it and the number is at index "<<index<<" .";}
      cout <<endl;
      return 0;
}