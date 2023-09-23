#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    cout<<"Type number:";
    cin >> n;

    int i = 0;
    int pos = 1;
    while (n > 0){
        int digit = n % 10;
        n = n / 10;
        i += pos * pow(10, digit - 1);
        pos++;
    }

    cout <<i<< endl;
}
