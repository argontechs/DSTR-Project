// Login.h

#ifndef LOGIN_H
#define LOGIN_H

#include <string>

class LoginSystem {
private:
    static const int MAX_USERS = 3;
    std::string usernames[MAX_USERS] = { "John", "doc456", "admin789" };
    std::string passwords[MAX_USERS] = { "john1234", "password456", "password789" };
    std::string userRoles[MAX_USERS] = { "Patient", "Doctor", "MOH Admin" };

    bool verifyCredentials(const std::string& username, const std::string& password) const {
        for (int i = 0; i < MAX_USERS; i++) {
            if (usernames[i] == username && passwords[i] == password) {
                return true;
            }
        }
        return false;
    }

    std::string getRole(const std::string& username) const {
        for (int i = 0; i < MAX_USERS; i++) {
            if (usernames[i] == username) {
                return userRoles[i];
            }
        }
        return "Unauthenticated";
    }

public:
    // For the sake of simplicity, we'll use strings to represent roles and "Unauthenticated" when login fails
    std::string login(const std::string& username, const std::string& password) {
        if (verifyCredentials(username, password)) {
            return getRole(username);
        }
        else {
            return "Unauthenticated";
        }
    }
};

#endif // LOGIN_H
