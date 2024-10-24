#include <iostream>
#include <stack>
#include <vector>

using namespace std;

void insertAtBottom(stack<int>& stk, int value) {
    if (stk.empty()) {
        stk.push(value);
    } else {
        int topElement = stk.top();
        stk.pop();
        insertAtBottom(stk, value);
        stk.push(topElement);
    }
}

void reverseStack(stack<int>& stk) {
    if (!stk.empty()) {
        int topElement = stk.top();
        stk.pop();
        reverseStack(stk);
        insertAtBottom(stk, topElement);
    }
}

int main() {
    stack<int> stk;
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> elements(n);
    cout << "Enter stack elements:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> elements[i];
    }

    for (int i = n - 1; i >= 0; --i) {
        stk.push(elements[i]);
    }

    reverseStack(stk);

    cout << "Result: ";
    while (!stk.empty()) {
        cout << stk.top() << " ";
        stk.pop();
    }
    cout << endl;

    return 0;
}
