#include <bits/stdc++.h>
#include <algorithm>
using namespace std;


int main() {

int n, somatorio1 = 0, somatorio2 = 0;
//int missing;
cin >> n;
int number[n-1];

for(int i = 1; i <= n; i++){
    somatorio1 += i;
}

for(int i = 0; i < n - 1; i++) {
    cin >> number[i];
    somatorio2 += number[i];
}

cout << somatorio1 - somatorio2;



/*int aux;

for(int i = 0; i < n - 1; i++) {
    for(int j = 0; j < n - 2; j++) {
        if(number[j] > number[j+1]) {
            aux = number[j];
            number[j] = number[j+1];
            number[j+1] = aux;
        }
    }
}*/

/*sort(number, number + (n - 1));

int j = 0;
for(int i = 1; i <= n; i++){
    if(number[j] != i){
        missing = i;
        cout << missing;
        break;
    }
    j++;
}*/
}