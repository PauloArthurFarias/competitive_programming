#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sequencia[n];

    if(n <= 3){
        cout << "Nao existe sequencia feliz";
        return 0;
    }

    if(n % 2 == 1){
        int i = 0;
        for(int num = 1; num <= n; num++){
            if(num % 2 == 1){
                sequencia[i] = num;
                i++;
            }
        }
        for(int num = 1; num <= n; num++){
            if(num % 2 == 0){
                sequencia[i] = num;
                i++;
            }
        }    
    }

    if(n % 2 == 0){
        int i = 0;
        for(int num = n; num >= 1; num--){
            if(num % 2 == 1){
                sequencia[i] = num;
                i++;
            }
        }
        for(int num = n; num >= 1; num--){
            if(num % 2 == 0){
                sequencia[i] = num;
                i++;
            }
        }
    }

    for(int i = 0; i < n; i++){
    cout << sequencia[i];
    }
    
}

