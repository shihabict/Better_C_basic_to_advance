#include <iostream>

namespace n_1{
    int x = 10;
}

namespace n_2{
    int x = 15;
}

int main(){
    int x = 0;

    std::cout << x << "\n";
    std::cout << n_1::x << "\n";
    std::cout << n_2::x << "\n";

    return 0;
}