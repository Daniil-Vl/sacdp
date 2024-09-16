#include <iostream>
#include <string>
#include <set>

bool f(const std::string& str) {
    std::set<int> states;
    int i = 0;
    states.insert(0);

    while (str[i] != '\0') {
        std::set<int> ns;
        std::set<int>::iterator it;

        for (it = states.begin(); it != states.end(); it++) {
            switch (*it)
            {
                case 0: switch (str[i])
                    {
                        case '0': ns.insert(0); break;
                        case '1': ns.insert(0); ns.insert(1); break;
                    }
                    break;

                case 1: switch (str[i])
                    {
                        case '0': ns.insert(2); break;
                        case '1': ns.insert(2); break;
                    }
                    break;

                case 2: switch (str[i])
                    {
                        case '0': ns.insert(3); break;
                        case '1': ns.insert(3); break;
                    }
                    break;

                case 3: switch (str[i])
                    {
                        case '0': ns.insert(4); break;
                        case '1': ns.insert(4); break;
                    }
                    break;

                case 4: switch (str[i])
                    {
                        case '0': ns.insert(5); break;
                        case '1': ns.insert(5); break;
                    }
                    break;

                case 5: switch (str[i])
                    {
                        case '0': ns.insert(6); break;
                        case '1': ns.insert(6); break;
                    }
                    break;

                case 6: switch (str[i])
                    {
                        case '0': ns.insert(7); break;
                        case '1': ns.insert(7); break;
                    }
                    break;

                case 7: switch (str[i])
                    {
                        case '0': ns.insert(8); break;
                        case '1': ns.insert(8); break;
                    }
                    break;

                case 8: switch (str[i])
                    {
                        case '0': ns.insert(9); break;
                        case '1': ns.insert(9); break;
                    }
                    break;

                case 9: switch (str[i])
                    {
                        case '0': ns.insert(10); break;
                        case '1': ns.insert(10); break;
                    }
                    break;

                case 10: switch (str[i]) {
                    default:
                        break;
                }
            }
        }

        states = ns;
        ns.clear();
        i++;
    }

    return states.count(10) > 0;
}

int main() {
    std::cout << f("000000110110") << std::endl;
    std::cout << f("001000110110") << std::endl;
}