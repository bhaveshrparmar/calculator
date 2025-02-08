#include <iostream>
using namespace std;

int main() {
    char choise;

    do{
    int num1, num2;
    char op;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operator (+, -, *, /, %): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;

    switch (op) {
        case '+':
            cout << "Result: " << num1 + num2;
            break;
        case '-':
            cout << "Result: " << num1 - num2;
            break;
        case '*':
            cout << "Result: " << num1 * num2;
            break;
        case '/':
            if (num2 != 0)
                cout << "Result: " << num1 / num2;
            else
                cout << "Error: Division by zero!";
            break;
        case '%':
            if (num2 != 0)
                cout << "Result: " << num1 % num2;
            else
                cout << "Error: Modulus by zero!";
            break;
        default:
            cout << "Invalid operator!";
            break;

    }
    cout<<endl;
    
     cout<<"Enter Yes or No : ";
            cin>>choise;

    }while(choise == 'y');
        cout<<"Calculator Exited! ";


           return 0;
    }

 
