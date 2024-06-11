#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {

    int n, cont = 1;
    cin >> n;
    int list[n];
    for(int i = 0; i < n; i++) {
        cin >> list[i];
    }
    
    sort(list, list + n);

    for(int i = 0; i < n - 1; i++) { 
        if(list[i] != list[i+1]){
            cont++;
        }
    }
    cout << cont;



}