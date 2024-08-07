#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int max = a[0];
    for (int i = 0; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }

    // Initialize the count array with zeros
    int count[max + 1] = {0};

    // Calculate the frequency of each element
    for (int i = 0; i < n; i++) {
        count[a[i]]++;
    }

    // Compute the cumulative sum
    int sum[max + 1];
    sum[0] = count[0];
    for (int i = 1; i <= max; i++) {
        sum[i] = sum[i - 1] + count[i];
    }

    // Create the sorted output array
    int output[n];
    for (int i = 0; i < n; i++) {
        output[sum[a[i]] - 1] = a[i];
        sum[a[i]]--;
    }

    // Print the sorted array
    for (int i = 0; i < n; i++) {
        cout << output[i] << " ";
    }
    cout << endl;

    return 0;
}
