#include <iostream>
#include <vector>
using namespace std;

int main() {


  int wNum;
  vector <int> list;


  for(int i = 0; i < 2000000000; i++ )
  {
    for(int j = 1; j < 21; j ++)
    {
      if(i % j != 0)
      {
        break;
      }else if (j == 20)
      {
        wNum = i;
        list.push_back(wNum);
        break;
      }
    }
  }

  for(int i = 0; i < sizeof(list); i++){
    cout << list[i] << endl;
  }
}



















