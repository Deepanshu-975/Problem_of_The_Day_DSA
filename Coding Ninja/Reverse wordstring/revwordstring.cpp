#include <string>
#include <sstream>

std::string reverseString(std::string s) {
    int length = s.length();
    std::string temp = "";
    std::string ans = "";
    std::stringstream ss(s);

    while (ss >> temp) {
        if (ans != "") {
            ans = temp + " " + ans;
        } else {
            ans = temp;
        }
    }

    return ans;
}
