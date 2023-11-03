#include "User.h"
#include "DengueCases.h"
#include <iostream>

User::User(const std::string& user, const std::string& name, const std::string& state, const std::string& phone)
    : username(user), fullName(name), stateOfResidence(state), phoneNumber(phone) { }




std::string User::getFullName() const {
    return fullName;
}

std::string User::getStateOfResidence() const {
    return stateOfResidence;
}

std::string User::getPhoneNumber() const {
    return phoneNumber;
}

void User::setFullName(const std::string& name) {
    fullName = name;
}

void User::setStateOfResidence(const std::string& state) {
    stateOfResidence = state;
}

void User::setPhoneNumber(const std::string& phone) {
    phoneNumber = phone;
}

void User::managePersonalInfo() {
    char choice;
    do {
        std::cout << "\n=== Manage Personal Information ===\n" << std::endl;
        std::cout << "1. Edit Full Name\n" << std::endl;
        std::cout << "2. Edit State of Residence\n" << std::endl;
        std::cout << "3. Edit Phone Number\n" << std::endl;
        std::cout << "4. View Personal Information\n" << std::endl; // New option
        std::cout << "5. Exit\n" << std::endl;
        std::cout << "Enter choice: ";
        std::cin >> choice;
        std::cin.ignore();  // clear newline left in buffer

        switch (choice) {
        case '1':
            std::cout << "Enter new full name: ";
            std::getline(std::cin, fullName);
            break;
        case '2':
            std::cout << "Enter new state of residence: ";
            std::getline(std::cin, stateOfResidence);
            break;
        case '3':
            std::cout << "Enter new phone number: ";
            std::getline(std::cin, phoneNumber);
            break;
        case '4':
            viewPersonalInfo();
            break;
        case '5':
            return;  // Exit the method
        default:
            std::cout << "Invalid choice, try again." << std::endl;
        }
    } while (choice != '5');
}

void User::viewPersonalInfo() {
    std::cout << "\n=== View Personal Information ===\n" << std::endl;
    std::cout << "Full Name: " << fullName << std::endl;
    std::cout << "State of Residence: " << stateOfResidence << std::endl;
    std::cout << "Phone Number: " << phoneNumber << std::endl;
}

void User::viewTotalDengueCases() {
}


void User::viewDailyDengueCasesByState() {
    // Implement code to view total dengue cases here...
}

void User::viewDengueAlerts() {
    std::cout << "Viewing dengue alert messages: " << username << std::endl;
    // Implement code to view dengue cases by state here...
}

void User::sortDengueCases() {
    std::cout << "Viewing dengue alert messages: " << username << std::endl;
    // Implement code to view dengue cases by state here...
}
// Implement other user methods as required...
