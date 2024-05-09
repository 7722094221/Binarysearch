#include<iostream>
using namespace std;


int Binary_search(int arr[],int n,int key)
{
  int mid,s,e;
  mid=(s+e)/2;
  s=0;
  e=n-1;
  

  while(s>=e)
  {
    if(arr[mid]==key)
    {
      return 1;
    }

    else
    {
      if(arr[mid]>key)
      {
        e=mid-1;
      }

      else
      {
        s=mid+1;
      }
    }
  }

  

  return 0;

}

int main()
{
  int n,arr[20],i,key;
  cout<<"ENTER THE NO OF ELEMENTS"<<endl;
  cin>>n;

  cout<<"ENTER THE ELEMENTS"<<endl;
  for(i=0;i<n;i++)
  {
    cin>>arr[i];
  }

  cout<<"ENTER THR KEY YOU HAVE TO SEARCH"<<endl;
  cin>>key;

  Binary_search(arr,n,key);
  if( Binary_search(arr,n,key)!=0)
  {
    cout<<"element found"<<endl;
  }

  else{
    cout<<"element not found"<<endl;
  }
  return 0;
}
