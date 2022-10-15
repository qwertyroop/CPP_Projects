#include <iostream>
using namespace std;
int main(){
    int num1, num2;
    cout << "Enter your First number : ";
    cin >> num1;
    cout << "Enter your Second number : ";
    cin >> num2;
    char op;
    cout << "Enter Your Operator : ";
    cin >> op;
    switch (op)
    {
        // '+' for Addition 
        // '-' for Subtraction
        // '*' for Multiplication
        // '/' for Division
    case '+' :
        cout << num1 +  num2 << endl;
        break;
    case '-' :
        cout << num1 -  num2 << endl;
        break;
    case '*' :
        cout << num1 *  num2 << endl;
        break;
    case '/' :
        cout << num1 /  num2 << endl;
        break;

    
    default:
    cout << "Try Again !" <<endl;
        break;
    }
    
        
}
