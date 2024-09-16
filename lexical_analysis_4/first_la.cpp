#include <iostream>
#include <string>

using namespace std;

wstring tr = L"aб*дэфг*ий*лмноп*р**ув";

void transl(wstring& s)
{
    size_t i = 0;
    int state = 0;
    while(s[i]!=0 && state!=9) {
        switch(state)
        {
            case 0: switch(s[i])
                {
                    case 'c': state = 5; break;
                    case 'h':
                        case 'q':
                        case 'w':
                        case 'x':
                            state = 9; break;
                    case 'k': state = 4; break;
                    case 's': state = 3; break;
                    case 't': state = 6; break;
                    case 'y': state = 1; break;
                    case 'z': state = 2; break;
                    case ' ': wcout<<' '; break;
                    case '\"': wcout<<L'ъ'; break;
                    case '\'': wcout<<L'ь'; break;
                    case '@': break;
                    default: wcout<<tr[s[i]-L'a'];
                }
                break;
            case 1: switch(s[i])
                {
                    case 'a': state = 0; wcout<<L'я'; break;
                    case 'e': state = 0; wcout<<L'е'; break;
                    case 'o': state = 0; wcout<<L'ё'; break;
                    case 'u': state = 0; wcout<<L'ю'; break;
                    case 'c': state = 5; wcout<<L'ы'; break;
                    case 'h':
                        case 'q':
                        case 'w':
                        case 'x':
                            state = 9; wcout<<L'ы'; break;
                    case 'k': state = 4; wcout<<L'ы'; break;
                    case 's': state = 3; wcout<<L'ы'; break;
                    case 't': state = 6; wcout<<L'ы'; break;
                    case 'y': state = 1; wcout<<L'ы'; break;
                    case 'z': state = 2; wcout<<L'ы'; break;
                    case ' ': state = 0; wcout<<L"ы "; break;
                    case '\"': state = 0; wcout<<L"ыъ"; break;
                    case '\'': state = 0; wcout<<L"ыь"; break;
                    case '@': state = 0; wcout<<L'ы'; break;
                    default: state = 0; wcout<<L'ы'<<tr[s[i]-L'a'];
                }
                break;
            case 2: switch(s[i])
                {
                    case 'h': state = 0; wcout<<L'ж'; break;
                    case 'q':
                        case 'w':
                        case 'x':
                            state = 9; wcout<<L'з'; break;
                    case 'c': state = 5; wcout<<L'з'; break;
                    case 'k': state = 4; wcout<<L'з'; break;
                    case 's': state = 3; wcout<<L'з'; break;
                    case 't': state = 6; wcout<<L'з'; break;
                    case 'y': state = 1; wcout<<L'з'; break;
                    case 'z': state = 2; wcout<<L'з'; break;
                    case ' ': state = 0; wcout<<L"з "; break;
                    case '\"': state = 0; wcout<<L"зъ"; break;
                    case '\'': state = 0; wcout<<L"зь"; break;
                    case '@': state = 0; wcout<<L"з"; break;
                    default: state = 0; wcout<<L'з'<<tr[s[i]-L'a'];
                }
                break;
            case 3: switch(s[i])
                {
                    case 'h': state = 7; break;
                    case 'q':
                        case 'w':
                        case 'x':
                            state = 9; wcout<<L'с'; break;
                    case 'c': state = 5; wcout<<L'с'; break;
                    case 'k': state = 4; wcout<<L'с'; break;
                    case 's': state = 3; wcout<<L'с'; break;
                    case 't': state = 6; wcout<<L'с'; break;
                    case 'y': state = 1; wcout<<L'с'; break;
                    case 'z': state = 2; wcout<<L'с'; break;
                    case ' ': state = 0; wcout<<L"с "; break;
                    case '\"': state = 0; wcout<<L"съ"; break;
                    case '\'': state = 0; wcout<<L"сь"; break;
                    case '@': state = 0; wcout<<L"с"; break;
                    default: state = 0; wcout<<L'с'<<tr[s[i]-L'a'];
                }
                break;
            case 4: switch(s[i])
                {
                    case 'h': state = 0; wcout<<L'х'; break;
                    case 'q':
                        case 'w':
                        case 'x':
                            state = 9; wcout<<L'к'; break;
                    case 'c': state = 5; wcout<<L'к'; break;
                    case 'k': state = 4; wcout<<L'к'; break;
                    case 's': state = 3; wcout<<L'к'; break;
                    case 't': state = 6; wcout<<L'к'; break;
                    case 'y': state = 1; wcout<<L'к'; break;
                    case 'z': state = 2; wcout<<L'к'; break;
                    case ' ': state = 0; wcout<<L"к "; break;
                    case '\"': state = 0; wcout<<L"къ"; break;
                    case '\'': state = 0; wcout<<L"кь"; break;
                    case '@': state = 0; wcout<<L"к"; break;
                    default: state = 0; wcout<<L'к'<<tr[s[i]-L'a'];
                }
                break;
            case 5:
                if(s[i]=='h') { state = 0; wcout<<L'ч'; }
                else state = 9;
                break;
            case 6: switch(s[i])
                {
                    case 's': state = 0; wcout<<L'ц'; break;
                    case 'h':
                        case 'q':
                        case 'w':
                        case 'x':
                            state = 9; wcout<<L'т'; break;
                    case 'c': state = 5; wcout<<L'т'; break;
                    case 'k': state = 4; wcout<<L'т'; break;
                    case 't': state = 6; wcout<<L'т'; break;
                    case 'y': state = 1; wcout<<L'т'; break;
                    case 'z': state = 2; wcout<<L'т'; break;
                    case ' ': state = 0; wcout<<L"т "; break;
                    case '\"': state = 0; wcout<<L"тъ"; break;
                    case '\'': state = 0; wcout<<L"ть"; break;
                    case '@': state = 0; wcout<<L"т"; break;
                    default: state = 0; wcout<<L'т'<<tr[s[i]-L'a'];
                }
                break;
            case 7: switch(s[i])
                {
                    case 'c': state = 8; break;
                    case 'h':
                        case 'q':
                        case 'w':
                        case 'x':
                            state = 9; wcout<<L'ш'; break;
                    case 'k': state = 4; wcout<<L'ш'; break;
                    case 's': state = 3; wcout<<L'ш'; break;
                    case 't': state = 6; wcout<<L'ш'; break;
                    case 'y': state = 1; wcout<<L'ш'; break;
                    case 'z': state = 2; wcout<<L'ш'; break;
                    case ' ': state = 0; wcout<<L"ш "; break;
                    case '\"': state = 0; wcout<<L"шъ"; break;
                    case '\'': state = 0; wcout<<L"шь"; break;
                    case '@': state = 0; wcout<<L"ш"; break;
                    default: state = 0; wcout<<L'ш'<<tr[s[i]-L'a'];
                }
                break;
            case 8:
                if(s[i]=='h') { state = 0; wcout<<L'щ'; }
                else { state = 9; wcout<<L'ш'; }
        }
        i++;
    }

    if(state==9)
        wcout<<L"Error!";

    wcout<<endl;
}

int main()
{
    setlocale(LC_ALL, "");
    wstring buf;
    wcin>>buf;
    transl(buf);
    return EXIT_SUCCESS;
}
