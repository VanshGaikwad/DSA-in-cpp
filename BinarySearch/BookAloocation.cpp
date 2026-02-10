#include <iostream>
#include <vector>
using namespace std;

// Function to check if it is possible to allocate books such that
// the maximum pages assigned to any student is <= mid
bool isPossible(const vector<int>& arr, int n, int m, int mid) {
    int studentCount = 1;
    int pageSum = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] > mid) return false;  // a single book is larger than mid

        if(pageSum + arr[i] <= mid) {
            pageSum += arr[i];
        } else {
            studentCount++;
            pageSum = arr[i];
            if(studentCount > m) return false;
        }
    }
    return true;
}

// Function to allocate books
int allocateBooks(const vector<int>& arr, int n, int m) {
    int s = 0, sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
        s = max(s, arr[i]);  // start from largest single book
    }

    int e = sum;
    int ans = -1;

    while(s <= e) {
        int mid = s + (e - s) / 2;

        if(isPossible(arr, n, m, mid)) {
            ans = mid;      // valid solution
            e = mid - 1;    // try to find smaller maximum
        } else {
            s = mid + 1;    // increase mid
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {10, 20, 30, 40, 50};
    int n = arr.size();
    int m = 2;  // number of students

    cout << allocateBooks(arr, n, m);  // Output: 90
    return 0;
}
