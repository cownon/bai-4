
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n; // Đọc số phần tử của dãy

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // Đọc số từng phần tử của dãy
    }

    sort(arr.rbegin(), arr.rend()); // Sắp xếp dãy theo thứ tự giảm dần

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "; // In ra từng phần tử đã sắp xếp
    }

    return 0;
}
