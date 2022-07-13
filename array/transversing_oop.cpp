#include<iostream>
using namespace std;

class transverse{
    private:
      int n,A[1000];
    public: 
      void input();
 }; 
void transverse::input(){ 
  cout<<"Enter the size of the array : "<<endl;
  cin>>n;
  cout<<"Enter the elements of arrays :"<<endl;
  for(int i=0;i<n;i++)
    cin>>A[i];
}

int main(){
 transverse T;
 T.input();
 return 0;
}

