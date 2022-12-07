#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {

  
  int pNum;
  string sNum, rNum;
  

  for(int num = 998001; num > 900000; num--)
    {
      sNum = to_string(num);
      rNum = sNum;
      reverse(rNum.begin(), rNum.end());

      if(sNum == rNum)
      {
        pNum = num;
          for(int i = 500; i < 1000; i++)
          {
            for(int j = 500; j < 1000; j++)
            {
              if(i * j == pNum)
                {
                  cout << i << "x" << j << endl;
                  cout << i * j << endl;
                  break;
                }
            }
          }      
      }
    }
 
  

    
  
  
  

  
}