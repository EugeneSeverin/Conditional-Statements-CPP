#include <iostream>

using namespace std;

int main()
{
    int age;

    cout << "Enter age" << endl;
    cin >> age;

    if(age>12 && age<50)
    {
        cout << "Eligible" << endl;
    }
    
    else
    {
        cout << "Not Eligible" << endl;
    }

}