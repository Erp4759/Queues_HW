#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
    int n, k;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    cout << "Enter the window size k: ";
    cin >> k;

    queue<int> negatives;
    vector<int> result;

    for (int i = 0; i < n; ++i) {
        if (arr[i] < 0)
            negatives.push(i);

        if (i >= k - 1) {
            while (!negatives.empty() && negatives.front() < i - k + 1)
                negatives.pop();

            if (!negatives.empty())
                result.push_back(arr[negatives.front()]);
            else
                result.push_back(0);
        }
    }

    cout << "Result: " << k << ":\n";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

