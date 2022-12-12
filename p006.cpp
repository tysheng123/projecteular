#include <iostream>
using namespace std;

int main() {

    int n = 100;
    int sum = n * (n + 1) / 2;
    int sumSq = n * (n + 1) * (2 * n + 1) / 6;

    int diff = sum * sum - sumSq ;

    cout << diff << endl;

    return 0;
}






