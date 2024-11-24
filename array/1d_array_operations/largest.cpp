#include <iostream>
#include <vector>
#include <climits>

// using namespace std;

// class Solution {
//   public:
//     int largest(vector<int> &arr) {
//         int max = INT_MIN;
//         for (int i = 0; i < arr.size(); i++) {
//             if (max < arr[i]) {
//                 max = arr[i];
//             }
//         }
//         return max;
//     }
// };

int main() {
    // Solution solution;
    vector<int> arr;
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        arr.push_back(num);
    }
    // cout << "The largest element in the array is: " << solution.largest(arr) << endl;
    return 0;
}
