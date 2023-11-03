#include "Login.h"
#include "User.h"
#include "UserInterface.h"
#include <iostream>

int main() {
    LoginSystem loginSystem;
    std::string username, password, role;

    while (true) { // Infinite loop to keep the program running until user decides to exit
        std::cout << "=== Dengue Surveillance System Login ===" << std::endl;
        std::cout << "Enter Username: ";
        std::cin >> username;
        std::cout << "Enter Password: ";
        std::cin >> password;

        role = loginSystem.login(username, password);

        if (role == "Unauthenticated") {
            std::cout << "Invalid credentials. Please try again." << std::endl;
        }
        else {
            std::cout << "\nLogged in as " << role << ".\n" << std::endl;

            if (role == "Patient") {
                User loggedInUser(username, "Name", "SomeState", "SomePhone");  // You might need more data to create a User
                UserInterface ui(&loggedInUser);
                ui.showMenu();
            }
            else if (role == "Doctor") {
                // DoctorInterface(); // hypothetical function for doctor's interface
            }
            else if (role == "MOH Admin") {
                // MOHAdminInterface(); // hypothetical function for MOH admin's interface
            }
        }

        std::cout << "Do you want to continue (Y/N)? ";
        char choice;
        std::cin >> choice;
        if (choice == 'N' || choice == 'n') {
            break;
        }
    }

    return 0;
}
