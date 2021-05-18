#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float a, b, c, ab, ac, bc, a2, b2, c2;
    cin >> a;
    cin >> b;
    cin >> c;
    ab = a + b;
    ac = a + c;
    bc = b + c;
    a2 = a * a;
    b2 = b * b;
    c2 = c * c;
    if (a >= bc || b >= ac || c >= ab){
        cout << "NAO FORMA TRIANGULO" <<endl;
    }else{
        if (a2 == b2 + c2 || b2 == a2 + c2 || c2 == a2 + b2){
            cout << "TRIANGULO RETANGULO" <<endl;
        }else{
            if (a2 > b2 + c2 || b2 > a2 + c2 || c2 > a2 + b2){
                cout << "TRIANGULO OBTUSANGULO" <<endl;
            }else{
                cout << "TRIANGULO ACUTANGULO" <<endl;
            }
        }
        if (a == b && b == c){
            cout << "TRIANGULO EQUILATERO" <<endl;
        }else{
            if (a == b || b == c || a == c){
                cout << "TRIANGULO ISOSCELES" <<endl;
            }
        }
    }
    return 0;
}
