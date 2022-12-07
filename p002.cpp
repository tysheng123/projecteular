#include <iostream>
using namespace std;

int main(){

    int previous = 0;
    int current = 1;
    int evenSum= 0;
    int next = 0;
  
    for(int i = 0; i < 37; i++){

      int next = previous + current;
      
      previous = current;
      current = next;

      if(next > 4000000){
        break;
      }
      if(current % 2 == 0){
        evenSum += current;
      }
      
    }

    cout << evenSum << endl;
    
}
