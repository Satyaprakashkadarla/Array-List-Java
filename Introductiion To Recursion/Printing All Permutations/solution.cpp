#include <iostream>
#include <string>

using namespace std;

void permutations(string string, string current) {
    if (string.length() == 0) {
        cout << current << endl;
    } else {
        for (int i = 0; i < string.length(); i++) {
            string new_string = string;
            current += string[i];
            new_string.erase(i, 1);
            permutations(new_string, current);
            current.pop_back();
        }
    }
}

int main() {
    string input_string = "abc";
    string current = "";
    cout << "Permutations of '" << input_string << "' are:" << endl;
    permutations(input_string, current);
    return 0;
}
