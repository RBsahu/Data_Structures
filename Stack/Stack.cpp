//Implement Stack using STL
#include <iostream>
#include<stack>
using namespace std;

int main() 
{
    stack<int> s;    

    // Push elements into stack
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    cout << "Stack size: " << s.size() << endl;
    // Access top element
    // output 50
    cout << "\nTop Element:" << s.top();
     
    // Pop elements from stack
    s.pop();
    // Access top element
    // output 40
    cout << "\nTop Element:" << s.top();
    s.pop();
    cout << "\nStack size: " << s.size() << endl;
    
    cout << endl;
   return 0;
}