#include "User.h"

User::User(std::string password, std::string username):password_(password), username_(username){}

bool User::authenticate(std::string password){
    return password == password_;
}

bool User::change_password(std::string old_password, std::string new_password){
    if(authenticate(old_password)){
        password_ == new_password;
        return true;
    };
    return false;
}