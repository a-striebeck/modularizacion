#include ".\include\functions.hpp"
int main()
{   
    students Students;
    int totalStudents = 0;

    totalStudents = readFromFile(Students);
    totalStudents = menu(Students, totalStudents);
    save(Students, totalStudents);
    return 0;
}