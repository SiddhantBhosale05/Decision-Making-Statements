//Name:Siddhant Kiran Bhosale
//PRN:23070123038
//Aim:Implementation of Decision Making Statements to program a Simple Calculator using Switch Case

#include <iostream>
using namespace std;
 
int main() {
    char op;
    float num1, num2;
 
    cout<< " Simple Calculator : " << endl<< " 1.Addition" << endl <<" 2.Subtraction" << endl <<" 3.Multiplication"<< endl <<" 4.Division "<< endl;
    cout<< " Enter your choice : ";
    cin >> op;
    cout<< " Enter The Value for num1 and num2 : ";
    cin >> num1 >> num2;
 
    switch (op) {
    case '1':
        cout << num1 + num2;
        break;
 
    case '2':
        cout << num1 - num2;
        break;
 
    case '3':
        cout << num1 * num2;
        break;
 
    case '4':
        if(num2==0) { 
            cout<<"Divide by zero Error";
        }
        else {
            cout << num1 / num2;
        }
        break;
 
    default:
        cout << "Error! operator is not correct";
    }
    
    return 0;
}


/*Output:
For Addition-
 Simple Calculator : 
 1.Addition
 2.Subtraction
 3.Multiplication
 4.Division 
 Enter your choice : 1
 Enter The Value for num1 and num2 : 2
3
5

For Substraction-
 Simple Calculator : 
 1.Addition
 2.Subtraction
 3.Multiplication
 4.Division 
 Enter your choice : 2
 Enter The Value for num1 and num2 : 2
1
1

For Multiplicatin-
 Simple Calculator : 
 1.Addition
 2.Subtraction
 3.Multiplication
 4.Division 
 Enter your choice : 3
 Enter The Value for num1 and num2 : 2
2
4

For Division-
 Simple Calculator : 
 1.Addition
 2.Subtraction
 3.Multiplication
 4.Division 
 Enter your choice : 4
 Enter The Value for num1 and num2 : 1
0
Divide by zero Error*/
