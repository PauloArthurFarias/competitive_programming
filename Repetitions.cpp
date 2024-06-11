#include <bits/stdc++.h>
using namespace std;

int main() {

string dna;
cin >> dna;
int contador[4] = {0,0,0,0};

for(char base : dna) {
    if(base == 'A'){
        contador[0]++;
    }
    if(base == 'T'){
        contador[1]++;
    }
    if(base == 'G'){
        contador[2]++;
    }
    if(base == 'C'){
        contador[3]++;
    }
}
int maior = 0;
for(int i = 0; i < 4; i++){
    if(contador[i] > maior){
        maior = contador[i];
    }
}

cout << maior;
}