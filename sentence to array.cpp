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
      a+=wrr[i];//when there is no scace we are adding up every character
    
    }
    else
    {
      arr[b]=a;//when we found the space between the two words we are puting the previously appended value to (a) to array 1
      b+=1;
      a="";
    }
    if(i==wrr.size())
    {
      
      arr[b]=a;//to put the final addup value to the array
    }
  }
 
}

};


int main() 
{
  string word;
  getline(cin,word); //getting a sentence we have to use getline
  ans obj;//creating object for class
  obj.split_ary(word);//accessing the function in the class through object
  for (int i=0;i<obj.b+1;i++)
  {
    cout<<obj.arr[i]<<" ";// printing the splited words which is kept inside the array
  }

  return 0;
}
