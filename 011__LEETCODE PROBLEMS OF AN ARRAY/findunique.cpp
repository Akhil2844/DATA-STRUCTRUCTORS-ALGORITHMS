#include <iostream>

using namespace std;

int findUnique(int *arr, int size) {
    int uniqueElement = 0;
    for (int i = 0; i < size; i++) {
        uniqueElement ^= arr[i];
    }
    return uniqueElement;
}

int main() {
    int arr[6] = {2, 3, 4, 5, 2, 3};
    int c = findUnique(arr, 6);

    cout << "The Unique Element in the array is: " << c << endl;

    return 0;
}
