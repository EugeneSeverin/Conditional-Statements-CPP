#include <iostream>

using namespace std;

int main()
{
    int age;

    cout << "Enter age" << endl;
    cin >> age;

    if(age<50)
    {
        cout << "Young" << endl;
    }
    
    else
    {
        cout << "Not Young" << endl;
    }

    return 0;

}