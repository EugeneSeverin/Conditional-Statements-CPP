#include <iostream>

using namespace std;

int main(){

    int roll_no;

    cout << "Enter Roll Number" << endl;

    cin >> roll_no;

    if(roll_no < 1)

    {
        cout << "Invalid Roll Number" << endl;
    }
    
    else
    {
        cout << "Valid Roll Number" << endl;
    }
    return 0;

}