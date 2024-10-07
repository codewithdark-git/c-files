
// 1. Push Operation Algorithm (Add an element to the stack)
// The Push operation adds an element to the top of the stack.

// Steps:
// 1> Input: Stack S, current top index, element x to be pushed.
// 2> Check if the stack is full:
//      If top == MAX - 1, print "Stack Overflow" and exit.
// 3> If the stack is not full:
//      Increment the top index (top = top + 1).
//       Set S[top] = x (place the new element at the top).
// 4> End.

// Pseudocode:
Push(S, top, x)
    if top == MAX - 1
        print "Stack Overflow"
    else
        top = top + 1
        S[top] = x
    end if

// Push operation in code
    void push(int x) {
        if (top == MAX - 1) {
            cout << "Stack Overflow\n";  // Stack is full
        } else {
            top++;
            arr[top] = x;
            cout << x << " pushed into stack\n";
        }
    }