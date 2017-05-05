#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long int t;
    cin>>t;
    string s;
    for(int i=0;i<t;i++)
        {
        cin>>s;
    
    int h=s.length();
    
    for(int i=0;i<h;i++)
        {
        if(i%2==0)
            {
            cout<<s[i];
        }
    }
    cout<<" ";
     for(int i=0;i<h;i++)
        {
        if(i%2==1)
            {
            cout<<s[i];
        }
    }
        cout<<endl;
    }
    return 0;
}

