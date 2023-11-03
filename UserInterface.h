#ifndef USERINTERFACE_H
#define USERINTERFACE_H

#include "User.h"

class UserInterface {
private:
    User* currentUser; // Pointer to the currently logged-in user

public:
    UserInterface(User* user) : currentUser(user) {}

    void showMenu();  // Show the user menu and handle choices

    // Other functions to handle different user actions can be added here.
};

#endif // USERINTERFACE_H
