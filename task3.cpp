#include <iostream>
#include <cmath>

int main(){
    double x, S, S1;
    int n;
    std::cout << "Input x: ";
    std::cin >> x;
    std::cout << "Input n: ";
    std::cin >> n;
    S = sin(x);
    S1 = sin(x);
    for (int i = 0; i < n; ++i){
        std::cout << S << " " << "\n";
        S += S1*(sin(x));
        S1 *= sin(x);
    }
    std::cout << "S = " << S;
    return 0;
}