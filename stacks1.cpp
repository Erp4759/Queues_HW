#include <iostream>
#include <stack>

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

    cout << "Enter stack elements:" << endl;
    for (int i = 0; i < n; ++i) {
        int element;
        cin >> element;
        stk.push(element);
    }

    reverseStack(stk);

    cout << "Stack after reversal: ";
    while (!stk.empty()) {
        cout << stk.top() << " ";
        stk.pop();
    }
    cout << endl;

    return 0;
}
