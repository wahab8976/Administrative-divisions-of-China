#include <iostream>
#include "./includes/calculator.h"
using namespace std;
void calculator::getNumbers()
{
    cout << "Enter a number" << endl;
    cin >> num1;
    cout << "Enter another  number" << endl;
    cin >> num2;
    total = num1 + num2;
}

void calculator::ShowNumbers()
{
    cout << "The sum of " << num1 << " and " << num2 << " is " << total << endl;
    cout << "Good Bye";
}
int main()
{
    float x, y;

    calculator calc;
    calc.getNumbers();
    calc.ShowNumbers();
}