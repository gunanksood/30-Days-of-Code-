#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    // Write Your Code Here
    int count = 0;
    for(int i = 0 ; i < n ; i++)
        {
        for(int j = i+1; j < n ; j++)
            {
            if(a[i] > a[j])
                {
                count++;
            }
        }
    }
    int min = *min_element(a.begin(), a.end());
    int max = *max_element(a.begin(), a.end());
    cout<<"Array is sorted in "<<count<<" swaps."<<endl;
    cout<<"First Element: "<<min<<endl;
    cout<<"Last Element: "<<max<<endl;
    return 0;
}

