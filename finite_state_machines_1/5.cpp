#include <iostream>
#include <string>

bool f(const std::string &str) {
    int state = 0;
    int i = 0;

    while (str[i] != '\0') {
        switch (state)
        {
            case 0: switch (str[i])
            {
                case '0': state = 1; break;
                case '1': state = 3; break;
            }
            break;

            case 1: switch (str[i])
            {
                case '0': state = 3; break;
                case '1': state = 2; break;
            }
            break;

            case 2: switch (str[i])
            {
                case '0': state = 2; break;
                case '1': state = 2; break;
            }
            break;

            case 3: switch (str[i])
            {
                case '0': state = 4; break;
                case '1': state = 3; break;
            }
            break;

            case 4: switch (str[i])
            {
                case '0': state = 4; break;
                case '1': state = 5; break;
            }
            break;

            case 5: switch (str[i])
            {
                case '0': state = 3; break;
                case '1': state = 3; break;
            }
            break;
        }
        i++;
    }

    return state == 2 || state == 5;
}

int main() {
    std::cout << f("1101010") << std::endl;
    std::cout << f("11011001") << std::endl;
    std::cout << f("01101100") << std::endl;
    std::cout << f("011011001") << std::endl;
}