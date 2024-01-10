#include <iostream>
#include <cmath>

using namespace std;



int main()
{
    float a, b, c, d, r1, r2;

    cout << "Enter a: "<< endl;

    cin >> a;

    cout << "Enter b: " << endl;

    cin >> b;

    cout << "Enter c:" << endl;

    cin >> c;

    d = pow(b,2) - 4 * a * c;

    if(a == 0)
    {
        cout << "Equation is linear" << endl;
    }
    else
    {
        if(d >= 0)
        {    
            if(d == 0) 
            {
                r1 = (-b)/(2*a);

                cout << "D is real, roots are equal. " << endl << "R = " << r1 << endl;
            }
            else
            {
                r1 = (-b - sqrt(d))/(2 * a);

                r2 = (-b + sqrt(d))/(2 * a);

                cout << "D is real, roots are unequal. " << endl << "R1 = " << r1 << ". " << "R2 = " << r2 << "." << endl;
            }

        }

        else
        {
            cout << "D = " << d << ". " << "The roots are imaginary" <<endl;
        }
    }

}