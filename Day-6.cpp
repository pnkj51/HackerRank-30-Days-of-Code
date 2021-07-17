#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t;cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        for(int l=0;l<s.length();l=l+2)
        {
            cout<<s[l];
        }
        cout<<" ";
        for(int l=1;l<s.length();l=l+2)
        {
            cout<<s[l];
        }
        cout<<"\n";
    } 
    return 0;
}
