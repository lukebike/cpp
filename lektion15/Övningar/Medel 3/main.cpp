#include <iostream>
#include <vector>
#include <algorithm>

bool finnsIListan(const std::vector<std::string>& lista, std::string sokt) {
    auto it = std::find(lista.begin(), lista.end(), sokt);
    if (it != lista.end()) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    std::vector<std::string> names;
    names.push_back("Froyo");
    names.push_back("Victor");
    names.push_back("Annalise");
    for (auto name : names) {
        std::cout << "My name is " << name << "\n";
    }
    bool isKevin = finnsIListan(names, "Kevin");
    if (isKevin) {
        std::cout << "Kevin is here\n";
    }
    else {
        std::cout << "No Kevin found\n";
    }
    bool isAnnalise = finnsIListan(names, "Annalise");
    if (isAnnalise) {
        std::cout << "Annalise is here\n";
    }
    else {
        std::cout << "No Annalise found\n";
    }
}