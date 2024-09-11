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
                case '1': state = 5; break;
            }
            break;

            case 1: switch (str[i])
            {
                case '0': state = 2; break;
                case '1': state = 6; break;
            }
            break;

            case 2: switch (str[i])
            {
                case '0': state = 3; break;
                case '1': state = 7; break;
            }
            break;

            case 3: switch (str[i])
            {
                case '0': state = 4; break;
                case '1': state = 8; break;
            }
            break;

            case 4: switch (str[i])
            {
                case '0': state = 0; break;
                case '1': state = 9; break;
            }
            break;

            case 5: switch (str[i])
            {
                case '0': state = 5; break;
                case '1': state = 10; break;
            }
            break;

            case 6: switch (str[i])
            {
                case '0': state = 7; break;
                case '1': state = 11; break;
            }
            break;

            case 7: switch (str[i])
            {
                case '0': state = 8; break;
                case '1': state = 12; break;
            }
            break;

            case 8: switch (str[i])
            {
                case '0': state = 9; break;
                case '1': state = 13; break;
            }
            break;

            case 9: switch (str[i])
            {
                case '0': state = 5; break;
                case '1': state = 14; break;
            }
            break;

            case 10: switch (str[i])
            {
                case '0': state = 11; break;
                case '1': state = 0; break;
            }
            break;

            case 11: switch (str[i])
            {
                case '0': state = 12; break;
                case '1': state = 1; break;
            }
            break;

            case 12: switch (str[i])
            {
                case '0': state = 13; break;
                case '1': state = 2; break;
            }
            break;

            case 13: switch (str[i])
            {
                case '0': state = 14; break;
                case '1': state = 3; break;
            }
            break;

            case 14: switch (str[i])
            {
                case '0': state = 10; break;
                case '1': state = 4; break;
            }
            break;
        }
        i++;
    }

    return state == 0;
}

int main() {
    std::cout << f("000011") << std::endl;
    std::cout << f("00000111") << std::endl;
}