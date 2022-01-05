# include <iostream>
using namespace std;

class Company {
		
		private:
			string Company_name;
			string HQ_Name;
			
		public:
			// set name
			void setName(string scar) {
				this -> Company_name = scar;
			}
			// get name
			string getName() {
				return Company_name;
			}
			// adding new company
			void addCompany() {
		
				string c_name, hq;
				int n_emp, n_Dep;
				
				cout << "Enter Company Name:";
				cin >> c_name;
				
				Company::setName(c_name);
				
				cout << "\nEnter HeadQuarter Name:";
				cin >> hq;
				
				Company::HQ_Name;
				
				cout <<"\n****Enter Data of Employee****\n";
				cout << "\nEnter Number of Employees:";
				cin >> n_emp;
				
				employee.Employee::setEmpNumber(n_emp);
				
				cout <<"\n****Enter Data of Drpartment****\n";
				cout <<"\nEnter Data of Department:";
				cin >> n_Dep;
				
				department.Department::setDepNumber(n_Dep);
				
				cout << "\n\n";
				
			}
			// display
			void displayInfo() {
				
				cout<<"\n***********************"<<endl;
				cout<<"**************************"<<endl;
				cout<<"The name of Company is " << Company::getName() << "." << endl;
				cout<<"Its Headquarter is in " << Company::HQ_Name <<"." << endl;
				
					if(Department::getDepNumber() > 1)
					{
						cout<< "The Company has" << Department::getDepNumber() <<"department." << endl;
					} else {
						cout << "The Company has" << Department::getDepNumber() << "department." << endl;
					}
					
				cout<< Employee::getEmpNumber() << "Employee works in this company." << endl;
				cout<<"**********************" <<endl;
				cout<<"**********************" <<endl;
				
			}
		
	};
	
class Department: public Company {
		private:
			int No_of_Department;
		
		public:
			// set departmnt number
			void setDepNumber(int scar) {
			 	scar = No_of_Department;
			}
			// get department number
			int getDepNumber() {
			 	return No_of_Department;
			}
			
	};
	
class Employee: public Company {
	
		private:
			int No_of_Department;
		
		public:
			// set employee number
			void setEmpNumber(int scar) {
				scar = No_of_Department;
			}
			// get employee number
			int getEmpNumber() {
				return this ->No_of_Department;
			}
	
	};
	 
int main() {
	
		Department department;
		Employee employee;
		Company company;
		
		return 0;
		
	}
