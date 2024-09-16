#include <iostream>
#include <string>

using namespace std;


void pars(wstring& s)
{
    size_t i = 0;
    int state = 0;
    while(s[i]!=0 && state!=12) {
        switch(state)
        {
            case 0: switch(s[i])
            {
                case '0': case '1': case '2': case '3': case '4': case '5': case '6': case '7': case '8': case '9':
                    state = 3; wcout << s[i]; break;
                    case '.': state = 4; wcout << s[i]; break;
                    case '+': case '-':
                        state = 0; wcout << s[i] << "\n"; break;
                        case '=': state = 8; wcout << ""; break;
                        case '>': state = 9; wcout << ""; break;
                        case '<': state = 10; wcout << ""; break;
                        case '/': state = 5; wcout << ""; break;
                        case '*': state = 0; wcout << "*\n"; break;
                        case ' ': state = 11; wcout << "\n"; break;
                        default: state = 1; wcout << s[i]; break;
            }
                    break;
            case 1: switch(s[i])
            {
                case '0': case '1': case '2': case '3': case '4': case '5': case '6': case '7': case '8': case '9':
                    state = 2; wcout << s[i]; break;
                    case '.': state = 4; wcout << "\n."; break;
                    case '+': case '-':
                        state = 0; wcout << "\n" << s[i] << "\n"; break;
                        case '=': state = 8; wcout << "\n"; break;
                        case '>': state = 9; wcout << "\n"; break;
                        case '<': state = 10; wcout << "\n"; break;
                        case '/': state = 5; wcout << "\n"; break;
                        case '*': state = 0; wcout << "\n*\n"; break;
                        case ' ': state = 11; wcout << "\n"; break;
                        default: state = 1; wcout << s[i]; break;
            }
            break;
            case 2: switch(s[i])
            {
                case '0': case '1': case '2': case '3': case '4': case '5': case '6': case '7': case '8': case '9':
                    state = 2; wcout << s[i]; break;
                    case '.': state = 4; wcout << "\n."; break;
                    case '+': case '-':
                        state = 0; wcout << "\n" << s[i] << "\n"; break;
                        case '=': state = 8; wcout << "\n"; break;
                        case '>': state = 9; wcout << "\n"; break;
                        case '<': state = 10; wcout << "\n"; break;
                        case '/': state = 5; wcout << "\n"; break;
                        case '*': state = 0; wcout << "\n*\n"; break;
                        case ' ': state = 11; wcout << "\n"; break;
                        default: state = 2; wcout << s[i]; break;
            }
            break;
            case 3: switch(s[i])
            {
                case '0': case '1': case '2': case '3': case '4': case '5': case '6': case '7': case '8': case '9':
                    state = 3; wcout << s[i]; break;
                    case '.': state = 4; wcout << "."; break;
                    case '+': case '-':
                        state = 0; wcout << "\n" << s[i] << "\n"; break;
                        case '=': state = 8; wcout << "\n"; break;
                        case '>': state = 9; wcout << "\n"; break;
                        case '<': state = 10; wcout << "\n"; break;
                        case '/': state = 5; wcout << "\n"; break;
                        case '*': state = 0; wcout << "\n*\n"; break;
                        case ' ': state = 11; wcout << "\n"; break;
                        default: state = 1; wcout << "\n" << s[i]; break;
            }
            break;
            case 4: switch(s[i])
            {
                case '0': case '1': case '2': case '3': case '4': case '5': case '6': case '7': case '8': case '9':
                    state = 4; wcout << s[i]; break;
                    case '.': state = 4; wcout << "\n."; break;
                    case '+': case '-':
                        state = 0; wcout << "\n" << s[i] << "\n"; break;
                        case '=': state = 8; wcout << "\n"; break;
                        case '>': state = 9; wcout << "\n"; break;
                        case '<': state = 10; wcout << "\n"; break;
                        case '/': state = 5; wcout << "\n"; break;
                        case '*': state = 0; wcout << "\n*\n"; break;
                        case ' ': state = 11; wcout << "\n"; break;
                        default: state = 1; wcout << "\n" << s[i]; break;
            }
            break;
            case 5: switch(s[i])
            {
                case '0': case '1': case '2': case '3': case '4': case '5': case '6': case '7': case '8': case '9':
                    state = 3; wcout << "/\n" << s[i]; break;
                    case '.': state = 4; wcout << "/\n."; break;
                    case '+': case '-':
                        state = 0; wcout << s[i] << "\n"; break;
                        case '=': state = 8; wcout << "\n"; break;
                        case '>': state = 9; wcout << "\n"; break;
                        case '<': state = 10; wcout << "\n"; break;
                        case '/': state = 5; wcout << "\n"; break;
                        case '*': state = 6; wcout << ""; break;
                        case ' ': state = 11; wcout << "/\n"; break;
                        default: state = 1; wcout << "/\n" << s[i]; break;
            }
            break;
            case 6: switch(s[i])
            {
                case '0': case '1': case '2': case '3': case '4': case '5': case '6': case '7': case '8': case '9':
                    state = 6; wcout << ""; break;
                    case '.': state = 6; wcout << ""; break;
                    case '+': case '-':
                        state = 6; wcout << ""; break;
                        case '=': state = 6; wcout << ""; break;
                        case '>': state = 6; wcout << ""; break;
                        case '<': state = 6; wcout << ""; break;
                        case '/': state = 6; wcout << ""; break;
                        case '*': state = 7; wcout << ""; break;
                        case ' ': state = 6; wcout << ""; break;
                        default: state = 6; wcout << ""; break;
            }
            break;
            case 7: switch(s[i])
            {
                case '0': case '1': case '2': case '3': case '4': case '5': case '6': case '7': case '8': case '9':
                    state = 6; wcout << ""; break;
                    case '.': state = 4; wcout << ""; break;
                    case '+': case '-':
                        state = 6; wcout << ""; break;
                        case '=': state = 6; wcout << ""; break;
                        case '>': state = 6; wcout << ""; break;
                        case '<': state = 6; wcout << ""; break;
                        case '/': state = 0; wcout << ""; break;
                        case '*': state = 7; wcout << ""; break;
                        case ' ': state = 1; wcout << ""; break;
                        default: state = 6; wcout << ""; break;
            }
            break;
            case 8: switch(s[i])
            {
                case '0': case '1': case '2': case '3': case '4': case '5': case '6': case '7': case '8': case '9':
                    state = 3; wcout << "=\n" << s[i]; break;
                    case '.': state = 4; wcout << "=\n."; break;
                    case '+': case '-':
                        state = 0; wcout << "=\n" << s[i] << "\n"; break;
                        case '=': state = 0; wcout << "==\n"; break;
                        case '>': state = 9; wcout << "=\n"; break;
                        case '<': state = 10; wcout << "=\n"; break;
                        case '/': state = 5; wcout << "=\n"; break;
                        case '*': state = 0; wcout << "=\n*\n"; break;
                        case ' ': state = 11; wcout << "=\n"; break;
                        default: state = 1; wcout << "=\n" << s[i]; break;
            }
            break;
            case 9: switch(s[i])
            {
                case '0': case '1': case '2': case '3': case '4': case '5': case '6': case '7': case '8': case '9':
                    state = 3; wcout << ">\n" << s[i]; break;
                    case '.': state = 4; wcout << ">\n."; break;
                    case '+': case '-':
                        state = 0; wcout << ">\n" << s[i] << "\n"; break;
                        case '=': state = 0; wcout << ">=\n"; break;
                        case '>': state = 9; wcout << ">\n"; break;
                        case '<': state = 10; wcout << ">\n"; break;
                        case '/': state = 5; wcout << ">\n"; break;
                        case '*': state = 0; wcout << ">\n*\n"; break;
                        case ' ': state = 11; wcout << ">\n"; break;
                        default: state = 1; wcout << ">\n" << s[i]; break;
            }
            break;
            case 10: switch(s[i])
            {
                case '0': case '1': case '2': case '3': case '4': case '5': case '6': case '7': case '8': case '9':
                    state = 3; wcout << "<\n" << s[i]; break;
                    case '.': state = 4; wcout << "<\n."; break;
                    case '+': case '-':
                        state = 0; wcout << "<\n" << s[i] << "\n"; break;
                        case '=': state = 0; wcout << "<=\n"; break;
                        case '>': state = 9; wcout << "<\n"; break;
                        case '<': state = 10; wcout << "<\n"; break;
                        case '/': state = 5; wcout << "<\n"; break;
                        case '*': state = 0; wcout << "<\n*\n"; break;
                        case ' ': state = 11; wcout << "<\n"; break;
                        default: state = 1; wcout << "<\n" << s[i]; break;
            }
            break;
            case 11: switch(s[i])
            {
                case '0': case '1': case '2': case '3': case '4': case '5': case '6': case '7': case '8': case '9':
                    state = 3; wcout << s[i]; break;
                    case '.': state = 4; wcout << s[i]; break;
                    case '+': case '-':
                        state = 0; wcout << s[i] << "\n"; break;
                        case '=': state = 8; wcout << ""; break;
                        case '>': state = 9; wcout << ""; break;
                        case '<': state = 10; wcout << ""; break;
                        case '/': state = 5; wcout << ""; break;
                        case '*': state = 0; wcout << "*\n"; break;
                        case ' ': state = 11; wcout << ""; break;
                        default: state = 1; wcout << s[i]; break;
            }
            break;
        }
        i++;
    }

    if(state==12)
        wcout<<L"Error!";

    wcout<<endl;
}

int main()
{
	setlocale(LC_ALL, "");

	wstring buf = L"abc+cde*xyz qwe/*...*/rty";
	pars(buf);

	return EXIT_SUCCESS;
}
