#include <iostream>
using namespace std;
int main()
{
    double x, y, R;
    cout << "X = ";
    cin >> x;
    cout << "R = ";
    cin >> R;

    if (x <= -7-R || (-7+R <= x && x <= -4)) {
        y = R;
    }
    else {
        if (-7 - R < x && x <= -7 + R) {
            y = R - sqrt(R*R - pow((x+7),2));
        }
        else {
            if (-4 <= x && x <= 0) {
                y = -(R*x)/4;
            }
            else {
                if (x > 0 && x <= M_PI) {
                    y = sin(x);
                }
                else {
                    y = x - M_PI;
                }
            }
        }
    }
    cout << "Y = " << y << endl;
    cin.get();
}

