//Implement Stack using Linked List
#include <iostream>
using namespace std;

class Stack 
{
private:
    struct node
    {    
        int data;
        node* link;
    };
    node* top = nullptr;
public:
    Stack() 
    {
        top = nullptr;
    }
    void push(int item) 
    {
        node* temp = new node;
        if(temp == nullptr)
            cout << " stack is full." << endl;

        temp->data = item;
        temp->link = top;
        top = temp;
		cout << "Pushed: " << item << endl;        
    }

    int pop() 
    {
        if (top == nullptr) 
        {
            cout << "stack is empty." <<endl;
            return -1; //  empty stack
        }
        
        node* temp = top;
        int item = temp->data;
        top = top->link;

        delete temp;
        return item;
    }	
    ~Stack()
    {
        if (top == nullptr)
            return;

        node* temp;
        while(top!= nullptr) 
        {
            temp = top;
            top = top->link;
            delete temp;
		}
	}
};

int main() 
{
    Stack s;    

    s.push(15);
    s.push(45);
    s.push(25);
        
    int i1 = s.pop();
    cout << "\nItem popped:" << i1;
    int i2 = s.pop();
    cout << "\nItem popped:" << i2 << endl;
   
    return 0;
}