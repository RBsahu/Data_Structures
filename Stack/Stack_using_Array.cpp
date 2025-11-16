//Implement Stack using array
#include <iostream>
using namespace std;

// Maximum capacity of the stack
const int MAX = 5; 

class Stack 
{
private:
    int arr[MAX];
    int top; // Index of the top element

public:
    Stack() 
    {
        top = -1; // Initialize top to -1 (empty stack)
    }

    void push(int item) 
    {
        if (top == MAX - 1) 
        {
            cout <<" stack is full." << std::endl;
        }
        else 
        {
            top++;
            arr[top] = item;
            cout << "Pushed: " << item <<endl;
        }
    }

    int pop() 
    {
        if (top < 0) 
        {
            cout << "stack is empty." <<endl;
            return -1; //  empty stack
        }
        else 
        {
            int poppedValue = arr[top];
            top--;
            cout << "Popped: " << poppedValue <<endl;
            return poppedValue;
        }
    }

	// Function to return the top element without removing it
    int peek() 
    {
        if (top < 0) 
        {
            cout << "Stack is empty, no element to peek." << endl;            
           return -1;
        }
        else 
        {
            return arr[top];
        }
    }

    bool isEmpty()
    {
        return (top == -1);
    }
};

int main() 
{
    Stack s;

    if (s.isEmpty())
        cout << "Stack is empty :" << endl;

    s.push(5);
    s.push(15);
    s.push(25);

    std::cout << "Top element: " << s.peek() <<endl; // Output: 25

    s.pop();
    s.pop();

    cout << "Top element: " << s.peek() << endl; // Output: 5

    s.pop(); // Popping the last element
    s.pop(); // Attempting to pop from an empty stack
    cout << "Top element: " << s.peek() << endl;

    return 0;
}