#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int q;
    cin >> q;
    for(long long int i = 0 ; i < q; i++)
        {
        long long int num;
        cin >> num;
        int count = 0;
        for(long long int j = 2;  j <= sqrt(num) ; j++)
            {
            if(num % j == 0 )
                {
            count++;
         
            }
        }
        if(count == 0 && num != 1)
            {
            cout<<"Prime"<<endl;
        }
        else
            {
            cout<<"Not prime"<<endl;
        }
    }
    return 0;
}

