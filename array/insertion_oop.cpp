#include<iostream>
using namespace std;

class insertion{
  private:
    int n,A[1000],pos,x;
  public:
    void input();
    void insert();
    void display();
};
void insertion::input()
{
  cout<<"Enter the size of array :";
  cin>>n;
  cout<<"Enter the elements of array :"<<endl;
  for(int i=0;i<n;i++)
  {
    cin>>A[i];
  }
  cout<<"Enter the element to be inserted :"<<endl;
  cin>>x;
  cout<<"Enter the position to be inserted "<<endl;
  cin>>pos;
}
void insertion::insert()
{
  cout<<"The elements before insertion is :"<<endl;
  for(int j=0;j<n;j++)
  {
    cout<<"A"<<"["<<j<<"]="<<A[j]<<endl;
  }
  for(int k=n-1;k>=pos-1;k--){
    A[k+1]=A[k];
  }
  A[pos-1]=x;
  n++;
}
void insertion::display(){
  cout<<"The elements after insertion are :"<<endl;
  for(int l=0;l<n;l++)
    cout<<"A"<<"["<<l<<"]="<<A[l]<<endl;
}




int main()
{
  insertion I;
  I.input();
  I.insert();
  I.display();


  return 0;
}

