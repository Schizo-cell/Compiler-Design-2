#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int minVal = INT_MAX;
    int maxVal = INT_MIN;
    for(int i = 0; i < n; i++) {
        if(arr[i] < minVal) {
            minVal = arr[i];
        }
        if(arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    cout << "The minimum value is: " << minVal << endl;
    cout << "The maximum value is: " << maxVal << endl;

    return 0;
}

