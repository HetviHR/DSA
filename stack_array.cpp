#include <iostream>
using namespace std;

class Stack {
private:
    int top;
    int n;
    int a[];

public:
    Stack(int size) {
        top = -1;
        n = size;
        for (int i = 0; i < n; ++i) {
            a[i] = 0;
        }
    }

    bool is_empty() {
        return top == -1;
    }

    bool is_full() {
        return top >= n - 1;
    }

    void push(int val) {
        if (is_full()) {
            cout << "Overflow: Stack is full" << endl;
        } else {
            top++;
            a[top] = val;
        }
    }

    void pop() {
        if (is_empty()) {
            cout << "Underflow: Stack is empty" << endl;
        } else {
            cout << "Deleted element is: " << a[top] << endl;
            top--;
        }
    }

    void peek() {
        if (is_empty()) {
            cout << "Stack is empty" << endl;
        } else {
            cout << "Top element is: " << a[top] << endl;
        }
    }

    void print_stack() {
        cout << "The stack is: ";
        for (int i = 0; i <= top; ++i) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int size;
    cout << "Enter the size of the stack: ";
    cin >> size;

    Stack stack(size);

    while (true) {
        cout << "\n1. Push\n2. Pop\n3. Peek\n4. Print the stack\n5. Exit" << endl;
        cout << "Enter your choice: ";
        int choice;
        cin >> choice;

        switch (choice) {
            case 1:
                int value;
                cout << "Enter the value you want to push: ";
                cin >> value;
                stack.push(value);
                break;
            case 2:
                stack.pop();
                break;
            case 3:
                stack.peek();
                break;
            case 4:
                stack.print_stack();
                break;
            case 5:
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
