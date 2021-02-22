#include <iostream>
#include <string.h>

using namespace std;

string getContents(string str)
{
   int count = 0;
   
   int length = str.length();
   string contents;
   for (int i = 0; i < length; i++) 
   {
     if (str[i] != '[' && str[i] != ']')
          {
              contents = contents + str[i];
          }
      if (str[i] == '[')
      {
          
           if(count == 0)
          {
              count++;
          }
          else{
              contents = contents + str[i];
          }
    
      }
        if(str[i] == ']')
      {
        if(count == 0)
          {
              
             str[i] = ' ';
          }
          else
          {
              contents = contents + str[i];
              count--;
          }
      }
     

}return contents;
}



int main(int argc, char** argv)
{
    string str = "[{\"fname\":\"val1\", \"lname\": \"val2\", \"sums\":[1,2,3]},{\"fname\":\"val3\", \"lname\":\"val4\"}]";

    cout<<getContents(str)<<endl;
    return 0;
}