#include <iostream>

using namespace std;

int lsearch(int n, int x[40], int item);
void deletion(int x[40],int n,int item);

int main()
{
    int a[40],n,item, pos;
   cout<<"enter number of elements in data"<<endl;
   cin>>n;
   cout<<"enter data"<<endl;
   for(int j=0;j<n;j++)
        cin>>a[j];
   cout<<"enter item to delete"<<endl;
   cin>>item;
   deletion(a,n,item);
   cout<<"new data"<<endl;
   for(int j=0;j<n-1;j++)
        cout<<a[j]<<endl;
   return 0;
} 
int lsearch(int n, int x[40], int item)
{
    int position=0;
    for(int i=0;i<n;i++)
        {
            if(x[i]==item)
                position= i+1;
            else
                continue;
        }
    return position;
}
void deletion(int x[40],int n,int item)
{
    int k=(lsearch(n,x,item)-1);
    for(int i=k;i<n-1;i++)
        x[i]=x[i+1];
}
