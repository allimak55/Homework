#include <iostream>

int main(){
    double a, b, c, d, x , A, B, y;
    std::cout << "Please, enter the first segment \n";
    std::cin >> a;
    std::cin >> b;
    std::cout << "Please, enter the second segment \n";
    std::cin >> c;
    std::cin >> d;
    std::cout << "Please, enter a point from the first segment \n";
    std::cin >> x;
    y = ((x - a)*(d - c)) / (b - a) ;
    std::cout << "Corresponding image = " << y << "\n"; 


}
