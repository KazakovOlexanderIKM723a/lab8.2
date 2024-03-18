#include <iostream>

using namespace std;

int main() {
    const int arraySize = 10;
    double array[arraySize];

    cout << "Enter " << arraySize << " real numbers for the array:" << endl;
    for (int i = 0; i < arraySize; ++i) {
        cin >> array[i];
    }

    double sum = 0.0;
    for (int i = 0; i < arraySize; ++i) {
        array[i] += sum;
        sum += array[i];
    }

    cout << "Changed array:\n ";
    for (int i = 0; i < arraySize; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}