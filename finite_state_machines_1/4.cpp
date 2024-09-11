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
                case '0': state = 0; break;
                case '1': state = 1; break;
            }
            break;

            case 1: switch (str[i])
            {
                case '0': state = 2; break;
                case '1': state = 2; break;
            }
            break;

            case 2: switch (str[i])
            {
                case '0': state = 3; break;
                case '1': state = 3; break;
            }
            break;

            case 3: switch (str[i])
            {
                case '0': state = 4; break;
                case '1': state = 4; break;
            }
            break;

            case 4: switch (str[i])
            {
                case '0': state = 5; break;
                case '1': state = 5; break;
            }
            break;

            case 5: switch (str[i])
            {
                case '0': state = 6; break;
                case '1': state = 6; break;
            }
            break;

            case 6: switch (str[i])
            {
                case '0': state = 7; break;
                case '1': state = 7; break;
            }
            break;

            case 7: switch (str[i])
            {
                case '0': state = 8; break;
                case '1': state = 8; break;
            }
            break;

            case 8: switch (str[i])
            {
                case '0': state = 9; break;
                case '1': state = 9; break;
            }
            break;

            case 9: switch (str[i])
            {
                case '0': state = 10; break;
                case '1': state = 10; break;
            }
            break;

            case 10: switch (str[i])
            {
                case '0': state = 0; break;
                case '1': state = 0; break;
            }
            break;
        }
        i++;
    }

    return state == 10;
}

int main() {
    std::cout << f("000000110110") << std::endl;
    std::cout << f("001000110110") << std::endl;
}