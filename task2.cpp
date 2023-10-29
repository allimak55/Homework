#include <iostream>
#include <cmath>

int main(){
    int n;
    double result = 1.0;
    std::cout << "Input n:  ";
    std::cin >> n;
    while (n > 1){
        result += (1.0 / n);
        --n;
    }
    std::cout << "Sum = " << result << "\n";
    return 0;
}