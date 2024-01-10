// Nested IF

// You can add as many levels of nested IF as you want

#include <iostream>

using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter numbers" << endl;
    cin >> a >> b >> c;

    if(a < b)
    {
        if(b<c)
        {
            cout << "C is Max" << endl;
        }
        else
        {
            cout << "B is Max" << endl;
        }
    }
    
    else
    {
        if(a<c)
        {
            cout << "C is Max" << endl;
        }
        else
        {
            cout << "A is Max" << endl;
        }
    }

    return 0;

}