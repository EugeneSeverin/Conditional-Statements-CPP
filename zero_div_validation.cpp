#include <iostream>

using namespace std;

int main()
{

    int a, b, result;

    cout << "Enter two numbers: " << endl;

    cin >> a >> b;

    if(b == 0)
    {
        cout << "ZeroDivisionError" << endl;
    }

    else
    {
        result = a / b;
        cout << "Result is: " << result << endl;
    }

    return 0;

}