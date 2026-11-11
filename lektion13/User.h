#ifndef USER_CLASS_H
#define USER_CLASS_H

#include <string>

class User
{
    private:
        std::string password_;

    protected:
        std::string username_;
    
    public:
        User(std::string password, std::string username);
        bool authenticate(std::string password);
        bool change_password(std::string old_password, std::string new_password);
};

#endif