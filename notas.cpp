/*If the amount of data is unknown, the following loop is useful:
while (cin >> x) {
// code
}//*/
#include <iostream>
#include <algorithm> // Necessário para std::sort

using namespace std;

int main() {
    int arr[6] = {5, 2, 9, 1, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]); // Calcula o tamanho do array

    // Ordena o array em ordem crescente
    sort(arr, arr + n);

    // Imprime o array ordenado
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
