
#include <iostream>
#include <stack>
using namespace std;
int main() {
    stack<int> stack;
    stack.push('a');
    stack.push('b');
    stack.push('c');
    stack.push('d');

         stack.pop();
    stack.pop();

    while (!stack.empty()) {
        cout << stack.top() <<" ";
        stack.pop();
    }
}
