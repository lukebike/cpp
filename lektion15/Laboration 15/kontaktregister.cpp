#include <iostream>
#include <algorithm>
#include <map>
#include <string>

int main() {
    std::map<std::string, std::string> kontakter;
    kontakter["Alex"] = "07070";
    kontakter["Daniel"] = "073030303";
    kontakter["Mo"] = "094949482";
    kontakter["Frank"] = "3983298891";
    kontakter["Elizabeth"] = "92382389198";
    for (const auto& kontakt : kontakter) {
        std::cout << kontakt.first << " " << kontakt.second << "\n";
    }
    auto contactName = kontakter.find("Ad");
    if (contactName != kontakter.end()) {
        std::cout << "Telephone number found for " << contactName->first << " and it's " << contactName->second;
    }
    else {
        std::cout << "Contact does not exist in our system.";
    }
    return 0;
}