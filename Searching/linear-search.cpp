#include<iostream>
using namespace std;
int main()
{
  int A[1000],n,pos=-1,x;
  cout<<"Enter the size of array :"<<endl;
  cin>>n;
  cout<<"Enter the elements of the array :"<<endl;
  for(int i=0;i<n;i++){
    cin>>A[i];
  }
  cout<<"Enter the element to be searched :"<<endl;
  cin>>x;

  for(int j=0;j<n;j++){
    if(A[j]==x)
    {  pos=j+1;
    break;
    }
  }
   if(pos==-1){
    cout<<"The element is not present in the array"<<endl;
  }
   else{
    cout<<"The element is found at the "<<pos<<"th"<<" in the array"<<endl;
  }

  return 0;
}

