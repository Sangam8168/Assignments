#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter your marks here:";
    cin>>marks;
    if(marks>90&&marks<=100){
        cout<<"Excellent"<<marks;
    }
    else if(marks<=90 && marks>80){
        cout<<"good"<<marks;
    }
    else if(marks<=80 && marks>70){
        cout<<"fair"<<marks;
    }
    else if(marks<=70 && marks>60){
        cout<<"meets expectations"<<marks;
    }
    else if(marks<=60){
        cout<<"below par"<<marks;
    }
}
