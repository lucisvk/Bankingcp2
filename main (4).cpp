#include <iostream>
#include "byte.cpp" 

int main() {
    byte b1(0b10101010);
    byte b2(0b01010101);

    
    std::cout << "b1 as char: " << static_cast<char>(b1) << std::endl;
    std::cout << "b1 as bool: " << static_cast<bool>(b1) << std::endl;
    std::cout << "b1 as int: " << static_cast<int>(b1) << std::endl;
    std::cout << "b1 as unsigned: " << static_cast<unsigned>(b1) << std::endl;
    std::cout << "b1 as string: " << static_cast<std::string>(b1) << std::endl;

   
    std::cout << "b1 + b2: " << (b1 + b2) << std::endl;
    std::cout << "b1 - b2: " << (b1 - b2) << std::endl;
    std::cout << "b1 * b2: " << (b1 * b2) << std::endl;
    try {
        std::cout << "b1 / b2: " << (b1 / b2) << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cerr << e.what() << std::endl;
    }
    try {
        std::cout << "b1 % b2: " << (b1 % b2) << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cerr << e.what() << std::endl;
    }

 
    std::cout << "++b1: " << ++b1 << std::endl;
    std::cout << "b1++: " << b1++ << std::endl;
    std::cout << "--b1: " << --b1 << std::endl;
    std::cout << "b1--: " << b1-- << std::endl;


    b1 = b2;
    std::cout << "b1 = b2: " << b1 << std::endl;
    b1 += b2;
    std::cout << "b1 += b2: " << b1 << std::endl;
    b1 -= b2;
    std::cout << "b1 -= b2: " << b1 << std::endl;
    b1 *= b2;
    std::cout << "b1 *= b2: " << b1 << std::endl;
    try {
        b1 /= b2;
        std::cout << "b1 /= b2: " << b1 << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cerr << e.what() << std::endl;
    }
    try {
        b1 %= b2;
        std::cout << "b1 %= b2: " << b1 << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cerr << e.what() << std::endl;
    }
    b1 &= b2;
    std::cout << "b1 &= b2: " << b1 << std::endl;
    b1 |= b2;
    std::cout << "b1 |= b2: " << b1 << std::endl;
    b1 ^= b2;
    std::cout << "b1 ^= b2: " << b1 << std::endl;
    b1 <<= byte(1);
    std::cout << "b1 <<= 1: " << b1 << std::endl;
    b1 >>= byte(1);
    std::cout << "b1 >>= 1: " << b1 << std::endl;


    std::cout << "!b1: " << !b1 << std::endl;
    std::cout << "b1 && b2: " << (b1 && b2) << std::endl;
    std::cout << "b1 || b2: " << (b1 || b2) << std::endl;

    std::cout << "b1 < b2: " << (b1 < b2) << std::endl;
    std::cout << "b1 <= b2: " << (b1 <= b2) << std::endl;
    std::cout << "b1 > b2: " << (b1 > b2) << std::endl;
    std::cout << "b1 >= b2: " << (b1 >= b2) << std::endl;
    std::cout << "b1 == b2: " << (b1 == b2) << std::endl;
    std::cout << "b1 != b2: " << (b1 != b2) << std::endl;


    std::cout << "~b1: " << ~b1 << std::endl;
    std::cout << "b1 & b2: " << (b1 & b2) << std::endl;
    std::cout << "b1 | b2: " << (b1 | b2) << std::endl;
    std::cout << "b1 ^ b2: " << (b1 ^ b2) << std::endl;
    std::cout << "b1 << 1: " << (b1 << byte(1)) << std::endl;
    std::cout << "b1 >> 1: " << (b1 >> byte(1)) << std::endl;

    std::cout << "b1[0]: " << b1[0] << std::endl;
    std::cout << "b1[7]: " << b1[7] << std::endl;

    std::cout << "Enter a byte (8 bits): ";
    byte b3;
    std::cin >> b3;
    std::cout << "You entered: " << b3 << std::endl;

    return 0;
}
