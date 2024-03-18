#include <iostream>

using namespace std;

int main() {
    const int n = 10;
    double arr[n];

    
    cout << "Enter " << n << " real numbers:\n ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    
    double averageOfTwoMin = 0.0;
    if (n < 10) {
        cout << "The array must consist of at least ten elements." << endl;
    }
    else {
        double min1 = arr[0];
        double min2 = arr[1];
        if (min1 > min2) {
            swap(min1, min2);
        }
        for (int i = 2; i < n; ++i) {
            if (arr[i] < min1) {
                min2 = min1;
                min1 = arr[i];
            }
            else if (arr[i] < min2) {
                min2 = arr[i];
            }
        }

        averageOfTwoMin = (min1 + min2) / 2.0;
    }

    
    double sumBetweenNegatives = 0.0;
    bool firstNF = false;
    int negativeCount = 0;

    for (int i = 0; i < n; ++i) {
        if (arr[i] < 0) {
            if (!firstNF) {
                firstNF = true;
                continue;
            }
            else {
             
                break;
            }
        }
        else if (firstNF) {
            
            sumBetweenNegatives += arr[i];
            ++negativeCount;
        }
    }

    
    if (negativeCount == 0) {
        cout << "A sufficient number of negative elements was not detected in the array." << endl;
    }
    else {
        cout << "The sum of array elements located between the first and second negative elements: " << sumBetweenNegatives << endl;
    }

    
    cout << "The arithmetic mean of the two smallest elements of the array: " << averageOfTwoMin << endl;
   

    return 0;
}