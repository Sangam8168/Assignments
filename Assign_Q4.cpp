#include<iostream> 
using namespace std; 
int main() 
{ 
    int n,i,j; 
    cout<<"You want prime number upto:"; 
    cin>>n; 
    cout<<"\n Prime Numbers from 1 to "<<n<<": "; 
    for(i=1;i<=n;i++) 
    { 
        for(j=2;j<=i;j++) 
        {  
            if(i%j==0) 
            break; 
        } 
    if(i==j) 
    cout<<j<<"\n "; 
    } 
return 0; 
}
