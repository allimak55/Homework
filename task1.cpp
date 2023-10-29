#include <iostream>
#include <cmath>

int main(){
    double result = 0;
    int n;
    std::cout << "Input n:";
    std::cin >> n;
    for (int i = 1; i < n; ++i){
        result += (1.0 / i); 
    }
    std::cout << result << "\n";    
    return 0;
}