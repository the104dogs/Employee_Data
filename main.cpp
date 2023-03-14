#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Employee {
  private:
    string name;
    int age;
    double salary;

  public:
    Employee(string n, int a, double s) {
      name = n;
      age = a;
      salary = s;
    }

    string getName() {
      return name;
    }

    int getAge() {
      return age;
    }

    double getSalary() {
      return salary;
    }

    void setSalary(double s) {
      salary = s;
    }
};

bool compareEmployees(Employee e1, Employee e2) {
  return e1.getSalary() > e2.getSalary();
}

int main() {
  vector<Employee> employees;
  employees.push_back(Employee("John", 35, 45000.00));
  employees.push_back(Employee("Jane", 30, 50000.00));
  employees.push_back(Employee("Bob", 40, 55000.00));
  employees.push_back(Employee("Alice", 25, 40000.00));

  sort(employees.begin(), employees.end(), compareEmployees);

  for (Employee e : employees) {
    cout << e.getName() << ": $" << e.getSalary() << endl;
  }

  return 0;
}