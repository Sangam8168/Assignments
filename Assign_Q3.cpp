#include <iostream>
using namespace std;
int main(){
    int t,j;
    cout<<"How many times do you want to test the numbers :";
    cin>>t;
    
    for (int i=0;i<=t;i++){
        int n;
        cout<<"Type number here:";
        cin>>n;
        for (int j=0;j<=t;j++){}
        if (n==1||n==0||n%j==0){
            cout<<"not a prime number"<< endl;
        }
        else{
            cout<<"prime number"<< endl;
        }
    }
    return 0;
    }
