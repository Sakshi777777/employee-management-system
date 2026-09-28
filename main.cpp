#include <iostream>
using namespace std;

int main() {

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

    int choice;
    cin >> choice;

    cout << "\nYou selected option: " << choice << endl;

    return 0;
}
