


# Grocery-Tracking Program Documentation
# CS-210 Project 3
## Jess Dowd
## 04-17-2024


## Project Overview

The Grocery-Tracking Program is a C++ application developed for the Corner Grocer to analyze text records generated throughout the day. The program provides insights into item frequency, helping the store optimize its layout for improved customer experience.

## Design and Functionality

The program is structured using a class-based approach, with the `GroceryTracker` class encapsulating all functionality. Key features include:

- **Reading Input File:** The program reads item data from a text file, `CS210_Project_Three_Input_File.txt`, and stores item frequencies in a map data structure.
- **Menu Options:** Users can choose from four menu options:
  1. Search for an item
  2. View item frequency list
  3. View item frequency histogram
  4. Exit
- **Data Backup:** Item frequencies are written to a backup file, `frequency.dat`, for data preservation.

## Reflections

- **Summarize the project and what problem it was solving:** The project aimed to assist the "Corner Grocer" in optimizing its store layout by analyzing item frequency data. By providing insights into which items are frequently purchased, the program helps the store arrange its products for better accessibility and customer satisfaction.

- **What did you do particularly well:** I implemented user input validation and error handling effectively to ensure a smooth user experience. This enhanced the program's usability and reliability.

- **Where could you enhance your code:** There is room for improvement in optimizing the code for efficiency, especially in handling large input datasets. Additionally, incorporating exception handling mechanisms could make the code more robust and secure.

- **Which pieces of the code did you find most challenging to write:** The implementation of the item frequency histogram was challenging, particularly in formatting the output to display the histogram graphically. I overcame this challenge by breaking down the problem into smaller tasks and experimenting with different formatting approaches.

- **What skills from this project will be particularly transferable:** The project enhanced my skills in C++ programming, file handling, data structures (map), and user input validation. These skills will be valuable in future projects and coursework, especially in software development and data analysis tasks.

- **How did you make this program maintainable, readable, and adaptable:** I maintained clean and well-commented code throughout the project, making it easier to understand and modify. By following best practices in code organization and documentation, I ensured that the program is maintainable, readable, and adaptable to future requirements or enhancements.

