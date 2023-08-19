#include <iostream>
#include<string>
using namespace std;
// get the input as a string and make to arrya word by word

class ans
{
  public:
  string arr[10];
  int b=0;
  string a="";
  public:                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 
 void split_ary(string wrr)
{
  for(int i=0;i<=wrr.size();i++)
  {
    if(wrr[i]!=' ')
    {
      a+=wrr[i];
    
    }
    else
    {
      arr[b]=a;
      b+=1;
      a="";
    }
    if(i==wrr.size())
    {
      
      arr[b]=a;
    }
  }
 
}

};


int main() 
{
  string word;
  getline(cin,word);
  ans obj;
  obj.split_ary(word);
  for (int i=0;i<obj.b+1;i++)
  {
    cout<<obj.arr[i]<<" ";
  }

  return 0;
}