#include "UserInterface.h"
#include <iostream>

void UserInterface::showMenu() {
    int choice;
    while (true) {
        std::cout << "\n=== User Menu ===\n";
        std::cout << "1. Manage Personal Info\n";
        std::cout << "2. View Total Dengue Cases\n";
        std::cout << "3. View Daily Dengue Cases For All States\n";
        std::cout << "4. View Dengue Alert Messages\n";
        std::cout << "5. Sort Dengue Cases Using Date Range Reported By Multiple Doctors\n";
        std::cout << "6. Logout\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            currentUser->managePersonalInfo();
            break;
        case 2:
            currentUser->viewTotalDengueCases();
            break;
        case 3:
            currentUser->viewDailyDengueCasesByState();
            break;
        case 4:
            currentUser->viewDengueAlerts();
            break;
        case 5:
            currentUser->sortDengueCases();
            break;
        case 6:
            std::cout << "Logging out...\n";
            return;  // Exit the menu
        default:
            std::cout << "Invalid choice. Please try again.\n";
            break;
        }
    }
}
