#include <iostream>
#include <vector>

struct stEmployee
{
    std::string fName;
    std::string lName;
    float salary;
};

void readEmplyee(std::vector<stEmployee> &employees)
{
    char youChoice = 'Y';
    stEmployee employee;
    do
    {

        std::cout << "Enter first name" << std::endl;
        std::cin >> employee.fName;

        std::cout << "Enter last name" << std::endl;
        std::cin >> employee.lName;

        std::cout << "Enter salary" << std::endl;
        std::cin >> employee.salary;
        employees.push_back(employee);

        std::cout << " you want add more number? [Y]/[N]" << std::endl;
        std::cin >> youChoice;

    } while (youChoice == 'y' || youChoice == 'Y');
}

void printEmplyee(std::vector<stEmployee> &employees)
{

    for (stEmployee &employee : employees)
    {
        std::cout << employee.fName;
        std::cout << employee.lName;
        std::cout << employee.salary;
    }
}

int main()
{
    std::vector<stEmployee> employee;

    readEmplyee(employee);

    printEmplyee(employee);

    return 0;
}