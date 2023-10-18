#include <iostream>

int main(){
    int a, b, c, d, x , A, B, y;
    std::cout << "Please, enter the first segment \n";
    std::cin >> a;
    std::cin >> b;
    std::cout << "Please, enter the second segment \n";
    std::cin >> c;
    std::cin >> d;
    std::cout << "Please, enter a point from the first segment \n";
    std::cin >> x;
    A = (b - a) / x;
    y = (d - c) / A;
    std::cout << "Corresponding image = " << y << "\n"; 


}