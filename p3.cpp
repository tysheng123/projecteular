
#include <iostream>
#include <vector>
using namespace std;

int main(){
  
  long num = 600851475143;
  int largest;
  int prime = 2;
  
  while (num > 1){
    while (num % prime == 0){
      largest = prime;
      num /= prime;
    }
    ++prime ;
  }

  cout << largest << endl;
}


