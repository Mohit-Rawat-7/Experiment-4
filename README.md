# Experiment 4
### Program 1
### Aim:
To take two numbers from the user and perform bitwise logical operations on them.

### Software Used:
Visual Studio Code

## Theory:
Bitwise operators in C++ work directly on the binary representation of integers:

&: Bitwise AND (each bit is set to 1 if both corresponding bits are 1)
|: Bitwise OR (each bit is set to 1 if at least one corresponding bit is 1)
^: Bitwise XOR (each bit is set to 1 if the corresponding bits are different)
~: Bitwise NOT (flips all bits: 0s become 1s and 1s become 0s)
<<: Left Shift (moves bits to the left and adds zeros on the right)
>>: Right Shift (moves bits to the right and may add zeros on the left, depending on the type)
Bitwise operations are useful for tasks like manipulating specific bits within an integer.

# Porgram code:
``` javascript
#include <iostream>
using namespace std;
int main(){
    bool a;
    bool b;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    cout<<"Bitwise AND ("<<a<<"&"<<b<<"): "<<(a&b)<<endl;
    cout<<"Bitwise OR ("<<a<<"|"<<b<<"): "<<(a|b)<<endl;
    cout<<"Bitwise XOR ("<<a<<"^"<<b<<"): "<<(a^b)<<endl;
    cout<<"Bitwise NOT (~"<<a<<"): "<<(~a)<<endl;
    cout<<"Left Shift ("<<a<<"<<1): "<<(a<<1)<<endl;
    cout<<"Right Shift ("<<a<<">>1): "<<(a>>1)<<endl;

    return 0;
}
```

### Output:
![image](https://github.com/user-attachments/assets/ad8bd709-3322-4173-87d1-ed173f331bee)


### Conclusion:
We learned how to use bitwise operators to work with individual bits in C++.

### Program 2
### Aim:
To take a number from the user along with specific bit positions, and set or reset these bits in the number.

### Software Used:
Visual Studio Code

## Theory:
Bitwise shift operators move bits in a number:

<<: Left Shift (moves bits to the left, adding zeros on the right, like multiplying by 2^n)
>>: Right Shift (moves bits to the right, removing bits from the right, like dividing by 2^n)
You can also use bitwise operators to set (turn a bit to 1) or reset (turn a bit to 0) specific bits in a number.

# Program code:
``` javascript
#include <iostream>
#include <bitset>
using namespace std;

int main() {
    int num, set, reset;
    // Input the number and bit positions to set and reset
    cout << "Enter a number: ";
    cin >> num;
    cout << "Enter the bit position to set (0 to 7): ";
    cin >> set;
    cout << "Enter the bit position to reset (0 to 7): ";
    cin >> reset;
    // Display the original number in binary
    std::cout << num << " in binary is " << std::bitset<8>(num) << std::endl;
    // Set the bit at set_pos
    int num_set = num | (1 << set);
    std::cout << "Result after setting bit number " <<set<< " is " << std::bitset<8>(num_set) << std::endl;
    // Reset the bit at reset_pos
    int num_reset = num_set & ~(1 << reset);
    std::cout << "Result after resetting bit number " <<reset<< " is " << std::bitset<8>(num_reset) << std::endl;
    return 0;
}
```

### Output:
![image](https://github.com/user-attachments/assets/79a27d95-ceba-4cef-8ae5-72aa354c9e0a)

### Conclusion:
We learned how to shift bits and manipulate specific bits using bitwise operators in C++.
