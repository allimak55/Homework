#include <iostream>
#include <cmath>

int main(){
    double x, y, R, r;
    std::cout << "Enter point coordinates \n";
    std::cin >> x;
    std::cin >> y;
    std::cout << "Enter the radius of the outer circle\n";
    std::cin >> R;
    std::cout << "Enter the radius of the inner circle\n";
    std::cin >> r;
    if ((x * x + y * y) <= (R * R)) {
        if ((x * x + y * y) >= (r * r)){
            std::cout << "The point falls into the ring";
        } else {
            std::cout << "The point doesn't fit into the ring";
        }
    } else {
        std::cout << "The point doesn't fit into the ring";
    }
    return 0;
}
