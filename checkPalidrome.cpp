#include <iostream>
#include <string>

int main() {
    std::string text;

    std::cout << "Press text: ";
    std::getline(std::cin, text);

    bool pal = true;
    for (int i = 0; i < text.length()/2; ++i) {
        if (text[i] != text[text.length() - 1 - i]) {
            pal = false;
            break;
        }
    }

    if (pal)
        std::cout << "This is palindrome!" << std::endl;
    else
        std::cout << "This is not palindrome!" << std::endl;

    return 0;
}
