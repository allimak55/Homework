#include  <iostream>
#include <cmath>

int main(){
    double a, b, c;
    double x1, x2, D;
    std::cout << "Please enter the coefficients of the equation\n";
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    D = b * b - 4 * a * c;
    if (D < 0){
        std::cout << "Sorry, no roots\n";
    } else if (D == 0){
        std::cout << "One root = " << -b / (2 * a);
    } else {
        std::cout << "One root = " << (-b + sqrt(D)) / (2 * a) << "\n";
        std::cout << "Two root = " << (-b - sqrt(D)) / (2 * a) << "\n";
    }
    return 0;
}
