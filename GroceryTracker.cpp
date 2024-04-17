// Developer: Jess Dowd
// Date: 4/16/24
// Purpose: tracking grocery

#include <iostream>
#include <fstream>
#include <map>

class GroceryTracker {
private:
    std::map<std::string, int> itemFrequency; // Map to store item frequencies

public:
    // Read input file and populate itemFrequency map
    void readInputFile(const std::string& filename) {
        std::ifstream inputFile(filename);
        std::string item;

        if (!inputFile.is_open()) {
            std::cerr << "Error: Unable to open file " << filename << std::endl;
            return;
        }

        while (inputFile >> item) {
            itemFrequency[item]++;
        }

        inputFile.close();
    }

    // Print item frequency list
    void printItemFrequency() const {
        std::cout << "Item Frequency List:\n";
        for (const auto& pair : itemFrequency) {
            std::cout << pair.first << " " << pair.second << std::endl;
        }
    }

    // Print item frequency histogram
    void printHistogram() const {
        std::cout << "Item Frequency Histogram:\n";
        for (const auto& pair : itemFrequency) {
            std::cout << pair.first << " ";
            for (int i = 0; i < pair.second; ++i) {
                std::cout << "*";
            }
            std::cout << std::endl;
        }
    }

    // Write item frequencies to backup file
    void writeBackupFile(const std::string& filename) const {
        std::ofstream backupFile(filename);
        if (!backupFile.is_open()) {
            std::cerr << "Error: Unable to create backup file " << filename << std::endl;
            return;
        }

        for (const auto& pair : itemFrequency) {
            backupFile << pair.first << " " << pair.second << std::endl;
        }

        backupFile.close();
    }
};

int main() {
    GroceryTracker tracker;
    tracker.readInputFile("CS210_Project_Three_Input_File.txt");

    int choice;
    do {
        // Display menu options
        std::cout << "\nMenu Options:\n";
        std::cout << "1. Search for an item\n";
        std::cout << "2. View item frequency list\n";
        std::cout << "3. View item frequency histogram\n";
        std::cout << "4. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        // Perform action based on user choice
        switch (choice) {
            case 1: {
                // Search for item frequency
                std::string searchItem;
                std::cout << "Enter the item you wish to search for: ";
                std::cin >> searchItem;
                std::cout << "Frequency of " << searchItem << ": " << tracker.getItemFrequency(searchItem) << std::endl;
                break;
            }
            case 2:
                // Print item frequency list
                tracker.printItemFrequency();
                break;
            case 3:
                // Print item frequency histogram
                tracker.printHistogram();
                break;
            case 4:
                // Exit program
                std::cout << "Exiting program...\n";
                break;
            default:
                // Handle invalid choice
                std::cout << "Invalid choice. Please enter a number between 1 and 4.\n";
        }
    } while (choice != 4);

    // Write item frequencies to backup file
    tracker.writeBackupFile("frequency.dat");

    return 0;
}
