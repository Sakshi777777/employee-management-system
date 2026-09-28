##include <iostream>
#include <string>
using namespace std;

int main() {

    int choice;

    cout << "========================================\n";
    cout << "       EMPLOYEE MANAGEMENT SYSTEM\n";
    cout << "========================================\n";

    cout << "\n1. Add Employee";
    cout << "\n2. View All Employees";
    cout << "\n3. Search Employee";
    cout << "\n4. Update Employee";
    cout << "\n5. Delete Employee";
    cout << "\n6. Salary Summary";
    cout << "\n0. Exit";

    cout << "\n\nEnter your choice: ";
    cin >> choice;

    if (choice == 1) {

        int employeeID;
        string name;
        string department;
        string designation;
        double salary;

        cout << "\n========== ADD EMPLOYEE ==========\n";

        cout << "Enter Employee ID: ";
        cin >> employeeID;

        cin.ignore();

        cout << "Enter Employee Name: ";
        getline(cin, name);

        cout << "Enter Department: ";
        getline(cin, department);

        cout << "Enter Designation: ";
        getline(cin, designation);

        cout << "Enter Monthly Salary: ";
        cin >> salary;

        cout << "\nEmployee added successfully!\n";

        cout << "\n========== EMPLOYEE DETAILS ==========\n";
        cout << "Employee ID : " << employeeID << endl;
        cout << "Name        : " << name << endl;
        cout << "Department  : " << department << endl;
        cout << "Designation : " << designation << endl;
        cout << "Salary      : " << salary << endl;
    }

    else if (choice == 0) {
        cout << "\nThank you for using Employee Management System!\n";
    }

    else {
        cout << "\nThis feature is coming soon.\n";
    }

    return 0;
}
