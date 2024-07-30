//Name:Siddhant Kiran Bhosale
//PRN:23070123038
//Aim:Implemention of Decision Making Statements to find Positive and Negative number

#include <iostream>
using namespace std;

int main() {
    float num;
    cout << "Enter a number: ";
    cin >> num;
    if(num>0)
    {
        cout << "The num is POSITIVE";
    }
    else
    { cout << "The num is NEGATIVE";}

    return 0;
}


/*Output:
Positive-
Enter a number: 2
The num is POSITIVE

Negative-
Enter a number: -9
The num is NEGATIVE*/