#ifndef USER_H
#define USER_H

#include <string>
#include "DengueCases.h"

class User {
private:
    std::string username;
    std::string fullName;
    std::string stateOfResidence;
    std::string phoneNumber;

public:
    User(const std::string& user, const std::string& name, const std::string& state, const std::string& phone);

    // Getter methods
    std::string getUsername() const;
    std::string getFullName() const;
    std::string getStateOfResidence() const;
    std::string getPhoneNumber() const;

    // Setter methods
    void setFullName(const std::string& name);
    void setStateOfResidence(const std::string& state);
    void setPhoneNumber(const std::string& phone);

    // Methods to manage user activities (e.g., viewing dengue cases, etc.)
    void managePersonalInfo();
    void viewPersonalInfo();
    void viewTotalDengueCases();
    void viewDailyDengueCasesByState();
    void viewDengueAlerts();
    void sortDengueCases();

    // Other user methods can be added here...
};

#endif // USER_H
