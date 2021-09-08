#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int p;cin>>p;
    long n;
    
    while(p--){
        cin>>n;
        bool flag=false;
        for(int i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                flag=true;
                break;
            }
        }
        if(n==1){
            cout<<"Not prime"<<endl;
        }
        else if(!flag){
            cout<<"Prime"<<endl;
        }
        
        else{
            cout<<"Not prime"<<endl;
        }
    }  
    return 0;
}
