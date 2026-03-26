// C++ program to swap two nibbles in a byte
/*
Concept: What is a Nibble?
1 byte = 8 bits
1 nibble = 4 bits
[ high nibble ][ low nibble ]
   bits 7–4       bits 3–0

Logic:
Step 1: Extract lower nibble
x & 0x0F
0x0F = 00001111
Step 2: Shift it to left (becomes high nibble)
(x & 0x0F) << 4
Step 3: Extract higher nibble
x & 0xF0
0xF0 = 11110000
Step 4: Shift it to right (becomes low nibble)
(x & 0xF0) >> 4
Step 5: Combine both
|   // bitwise OR

*/
#include<iostream>
using namespace std;

int swapNibbles(int x)
{
    return ((x & 0x0F) << 4 | (x & 0xF0) >> 4);
}

// Driver code
int main()
{
    int x = 10;
    cout << swapNibbles(x);
    return 0;
}
