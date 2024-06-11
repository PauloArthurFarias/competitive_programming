#include <bits/stdc++.h>
using namespace std; 

int main(){
    int distance, speed, minutes, hours;
    float time;
    cin >> distance >> speed;
    time = distance / speed;
    minutes = (int)(time * 60) % 60;
    hours = (int)(time * 60) - minutes;
    cout << hours << " " << minutes;


}