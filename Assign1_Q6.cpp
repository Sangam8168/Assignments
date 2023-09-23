#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number to be reversed:";
    cin >> n;

    while (n != 0){
        int digit = n % 10;
        n = n / 10;
        cout << digit << endl;
    }
}
