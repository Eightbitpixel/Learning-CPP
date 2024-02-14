#include <iostream>

namespace first {
    int x = 4;
}


namespace second {
    int x = 3;
}


int main () {
    using namespace first;

    std::cout << x;
}