#include <iostream>
#include <string>
#include <set>

inline int charToInt(char ch) {
    return ((int) ch) - 48;
}


bool f(const std::string &str) {
    std::set<int> states;
    int i = 0;
    states.insert(-1);

    while (str[i] != '\0') {
        std::set<int> tempStates;
        std::set<int>::iterator currState;
        int charInt = charToInt(str[i]);

        for (currState = states.begin(); currState != states.end(); currState++) {
            if (*currState == -1) {
                for (int next_state = 0; next_state <= 9; next_state++)
                    if (next_state != charInt)
                        tempStates.insert(next_state);
            } else if (0 <= *currState && *currState <= 9) {
                if (charInt == *currState)
                    tempStates.insert(*currState + 10);
                else
                    tempStates.insert(*currState);
            }
        }

        states = tempStates;
        tempStates.clear();
        i++;
    }

    // any of 10..19 state is active
    bool result = false;
    for (int state_num = 10; state_num <= 19; state_num++)
        result = result || states.count(state_num) > 0;
    return result;
}


int main() {
    std::cout << f("120340") << std::endl;
    std::cout << f("12340") << std::endl;
}