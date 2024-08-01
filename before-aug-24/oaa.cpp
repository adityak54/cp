// 2nd Question
#include <iostream>
#include <regex>
#include <string>
using namespace std;
int main() {
    int n;
    cin >> n;
    cin.ignore(); // Consume the newline character after reading n

    regex pattern("^0*10*$");
    string binary_str;
    // cin>>binary_str;
// for (int i = 0; i < n; ++i) { std::string binary_str;

    getline(cin, binary_str);

bool is_power_of_two = regex_match(binary_str, pattern); std::cout << (is_power_of_two? "True" : "False") << std::endl;

// }

return 0;

}