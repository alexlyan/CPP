#include <iostream>
using namespace std;

int main() {
    char c = '\0';
    bool prev_space = false;
    while (cin.get(c)) { // на каждой итерации считываем один символ в переменную c
        /* здесь можно пользоваться значением прочитанным в переменную c */

        if (c != ' ') {
            cout << c;
            prev_space = false;
        } else if (c == ' ' && prev_space == false) {
            cout << c;
            // cout << c << prev_space << '\n';
            prev_space = true;
        } else if (c == ' ' && prev_space == true){
            prev_space = true;
        }
    }
    return 0;
}
