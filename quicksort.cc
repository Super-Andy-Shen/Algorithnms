#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int partition(vector<int> &a,int low, int high)
{
    int key = a[high];int i = low ;
    for(int j = low ;j < high ; j++)
    {
        if(a[j] < key)
        {
            swap(a[j],a[i]);
            i = i + 1;
        }
    }
    swap(a[i],a[high]);
    return i ;
}
void quicksort(vector<int> &a,int low, int high)
{
    if(low <= high)
    {
      int q = partition(a,low,high);
      quicksort(a,low,q - 1);
      quicksort(a,q+1,high);
    }

}
int main()
{
      vector<int> a; int n;
      while(cin >> n)
      {
          a.push_back(n);
      }

      quicksort(a,0,a.size() - 1);
      for(auto j : a)
      {
          cout << j <<" ";
      }
      cout <<endl;
}