
// Traversing the Stack Algorithm (Display all elements in the stack)
// The Traverse operation prints or processes each element of the stack, starting from the top.

// Steps:
// 1> Input: Stack S and current top index.
// 2> If stack is empty (top == -1), print "Stack is empty".
// 3> If stack is not empty:
//      Start from the top and print each element until the bottom is reached.
// 4> End.


// Pseudocode:
Traverse(S, top)
    if top == -1
        print "Stack is empty"
    else
        for i = top to 0
            print S[i]
        end for
    end if


// Traverse operation code 
    void traverse() {
        if (top == -1) {
            cout << "Stack is empty\n";
        } else {
            cout << "Stack elements: ";
            for (int i = top; i >= 0; i--) {
                cout << arr[i] << " ";  // Print each element
            }
            cout << endl;
        }
    }