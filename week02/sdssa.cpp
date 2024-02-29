/*#include <iostream>
#include <string>

std::string convert_to_base(uint64_t num, int base) {
    if (num == 0) {
        return "0";
    }
    
    std::string result;
    
    while (num > 0) {
        int digit = num % base;
        result = std::to_string(digit) + result;
        num /= base;
    }
    
    return result;
}

int main() {
    uint64_t number;
    int base;
    
    std::cout << "Enter the number: ";
    std::cin >> number;
    
    std::cout << "Enter the base: ";
    std::cin >> base;
    
    std::string converted = convert_to_base(number, base);
    
    std::cout << "Converted number: " << converted << std::endl;
    
    return 0;
}*/

#include <iostream>
#include <string>

using namespace std;

string convert_to_base(uint64_t num, int base) {
    if (num == 0) {
        return "0";
    }
    
    string result;
    
    while (num > 0) {
        int digit = num % base;
        result = to_string(digit) + result;
        num /= base;
    }
    
    return result;
}

int main() {
    uint64_t num;
    int base;
    cin >> num >> base;
    cout << convert_to_base(num, base) << endl;
    return 0;
}
