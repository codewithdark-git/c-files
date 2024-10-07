
// Pop Operation Algorithm (Remove an element from the stack)
// The Pop operation removes and returns the top element of the stack.

// Steps:
// 1> Input: Stack S and current top index.
// 2> Check if the stack is empty:
//      If top == -1, print "Stack Underflow" and exit.
// 3> If the stack is not empty:
//      Retrieve the top element S[top].
//      Decrement the top index (top = top - 1).
// 4> Return the top element.
// 5> End.


// Pseudocode:
Pop(S, top)
    if top == -1
        print "Stack Underflow"
    else
        element = S[top]
        top = top - 1
        return element
    end if


// Pop operation code
    int pop() {
        if (top == -1) {
            cout << "Stack Underflow\n";  // Stack is empty
            return -1;
        } else {
            int poppedElement = arr[top];
            top--;
            return poppedElement;
        }
    }
