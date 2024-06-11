#include <iostream>
#include <string>

int main(){
    int numStudents;
    std::cout << "Enter the number of students: ";
    std::cin >> numStudents;

    for (int i = 0; i < numStudents; i++) {
        int age;
        int mark;
        std::cout << "Enter age and mark for student " << i + 1<<
          ":";
        std::cin >> age >> mark;

        //concatenating age and mark
        std::string ageMark = std::to_string(age) + " " + std::to_string(mark);

        //calculating the results of the marks multiplied by their age
        int result = age * mark;

        std::cout << "Age: " << age << ", Marks: " << mark << ",concatenated: " << ageMark << ", Result: " << result << std::endl;

    }

    return 0;
}