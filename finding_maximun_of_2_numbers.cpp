// 2nos -> x > y

#include <iostream>

using namespace std;

int main(){
    int x, y;

    cout << "Enter two numbers: " << endl;
    
    cin >> x >> y;

    if (x > y) {
        
        cout << "Max is x, X = " << x << endl;
    }

    else {
        cout << "Max is Y, Y = " << y << endl;
    }

    return 0;

}