#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << " Enter elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    vector<int> nge(n, -1); // Вектор для хранения следующего большего элемента
    stack<int> indices;     // Стек для хранения индексов элементов

    for (int i = 0; i < n; ++i) { // Пока стек не пуст и текущий элемент больше элемента на вершине стека
        while (!indices.empty() && arr[i] > arr[indices.top()]) {
            nge[indices.top()] = arr[i];
            indices.pop();
        }
        indices.push(i);
    }

    cout << "Result:\n";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " --> " << (nge[i] == -1 ? -1 : nge[i]) << endl;
    }

    return 0;
}

