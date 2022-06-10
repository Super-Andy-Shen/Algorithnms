#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Heap{
   public:
   int heap_length;
   int parent(int i);
   int left(int i);
   int right(int i);
   void heap_maxify(vector<int> &a,int i);
   void heap_create(vector<int> &a);
   void heap_sort(vector<int> &a);
};
int Heap::parent(int i)
{
    return i / 2;
}
int Heap::left(int i)
{
    return i * 2 + 1;
}
int Heap::right(int i)
{
    return (i * 2) + 2; 
}
 void Heap::heap_maxify(vector<int> &a,int i)
 {
     int l = left(i); int r = right(i); int biggest = i;
     if(l <= heap_length) 
     {
        if(a[l] > a[i]) biggest = l;
        else biggest = i;
     }
     if(r <= heap_length) 
     {
         if(a[biggest] < a[r]) biggest = r;
     }
     if(biggest != i)  
     {
         swap(a[biggest],a[i]);
         heap_maxify(a,biggest);
     }
     
 }
void Heap::heap_create(vector<int> &a)
{
      heap_length = a.size() - 1 ;
      for(int j = heap_length / 2; j >= 0 ; j--)
      {
          heap_maxify(a,j);
      }
}
void Heap::heap_sort(vector<int> &a)
{
     heap_create(a);
     for(int k = a.size() - 1; k >= 1; k--)
     {
         swap(a[0],a[heap_length]);
         heap_length = heap_length - 1;
         heap_maxify(a,0);
     }

}

int main()
{
      vector<int> a; int n;
      while(cin >> n)
      {
          a.push_back(n);
      }
      Heap myheap;
      myheap.heap_sort(a);
      for(auto j : a)
      {
          cout << j <<" ";
      }
      cout <<endl;
}