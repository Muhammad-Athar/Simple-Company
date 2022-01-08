# include <iostream>
using namespace std;

class Company {
		
		private:
			string Company_name;
			string HQ_Name;
			
			void setName(string scar) {
				this -> Company_name = scar;
			}
			
			string getName() {
				return Company_name;
			}

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
	
class Department:virtual public Company {
		private:
			int No_of_Department;
		
		public:
			
			void setDepNumber(int scar) {
			 	scar = No_of_Department;
			}
			
			int getDepNumber() {
			 	return No_of_Department;
			}
			
	};
	
class Employee:virtual public Company {
	
		private:
			int No_of_Department;
		
		public:
			
			void setEmpNumber(int scar) {
				scar = No_of_Department;
			}
	
			int getEmpNumber() {
				return this ->No_of_Department;
			}
	
	};

	main(){
		
		Company company;
		Department department;
		Employee employee;
		
		return 0;
		
	}