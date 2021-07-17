#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;cin>>n;
    map<string,string> phonebook;
    while(n--)
    {
        string name,phone;
        cin>>name>>phone;
        phonebook.insert({name,phone});
        
    }
    string s;
    map<string,string>::iterator i;
    while(cin>>s)
    {
        i= phonebook.find(s);
        if(i == phonebook.end())
        cout<<"Not found"<<endl;
        else {
        cout<<i->first<<"="<<i->second<<endl;
        }
    }
    
    
    return 0;
}
