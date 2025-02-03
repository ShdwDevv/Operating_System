#include <iostream>
#include <type_traits>

// Function template enabled only if T is an integral type
// template <typename T, typename = std::enable_if_t<std::is_integral_v<T>>>
// void printType(T value) {
//     std::cout << "Integral value: " << value << std::endl;
// }

// Function template enabled only if T is a floating-point type
template <typename T, typename = std::enable_if_t<std::is_floating_point_v<T>>>
void printType(T value) {
    std::cout << "Floating-point value: " << value << std::endl;
}

int main() {
    // printType(42);        // Calls the integral version
    printType(3.14);      // Calls the floating-point version
    // printType("Hello"); // Error: No matching function (because std::string is not integral or floating-point)
    return 0;
}
