#include <stdio.h>
#include <string.h>

struct Address
{
    char street[50];
    char city[50];
    char state[50];
    int pinCode;
};

struct Employee
{
    int EmpID;
    char EmpName[50];
    char position[50];
    struct Address address;
};

int main(void)
{
    struct Employee emp;
    emp.EmpID = 1;
    strcpy(emp.EmpName, "John Doe");
    strcpy(emp.position, "Manager");
    strcpy(emp.address.street, "123 Main Street");
    strcpy(emp.address.city, "San Francisco");
    strcpy(emp.address.state, "California");
    emp.address.pinCode = 94107;

    printf("Employee ID: %d\n", emp.EmpID);
    printf("Employee Name: %s\n", emp.EmpName);
    printf("Position: %s\n", emp.position);
    printf("Address:\n");
    printf("  Street: %s\n", emp.address.street);
    printf("  City: %s\n", emp.address.city);
    printf("  State: %s\n", emp.address.state);
    printf("  Pin Code: %d\n", emp.address.pinCode);

    return 0;
}
