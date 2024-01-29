#include<iostream>
#include<string.h>

using namespace std;

class A{

	public:
		int id;
		char name[100];
		char role[100];
		int salary;
		int exp;
		char comp[100];
		char address[100];
		char email[100];
		long long int contact;
        
		void Setdata(){
			cout<<"Enter your ID : ";
			cin>>id;
			cout<<"Enter your  Name : ";
			cin>>name;
			cout<<"Enter your Role : ";
			cin>>role;
		}
        
};
class B : public A
{
	public:
		void Setdatai(){
			cout<<"Enter your Salary : ";
			cin>>salary;
			cout<<"Enter your Experiense : ";
			cin>>exp;
		}
};
class C : public B
{

	public:
		void Setdataj(){
			cout<<"Enter Company Name : ";
			cin>>comp;
			cout<<"Enter Address : ";
			cin>>address;
		}
		void Getdata(){
			cout<<"Employe's Name is :- "<<name<<endl;
			cout<<"Employe's Role is :- "<<role<<endl;
			cout<<"Employe's Salary is :- "<<salary<<endl;
		}
};
class D : public C
{

	public:
		void Setdatak(){
			cout<<"Enter Email : ";
			cin>>email;
			cout<<"Enter Phone Number : ";
			cin>>contact;
		}
        
		void Getdataa(){
			cout<<"Employe's ID is : "<<id<<endl;
			cout<<"Employe Name is : "<<name<<endl;
			cout<<"Employe's Role is : "<<role<<endl;
			cout<<"Employe's Salary is : "<<salary<<endl;
			cout<<"Employe's Experiense is : "<<exp<<endl;
			cout<<"Employe's Company Name is : "<<comp<<endl;
			cout<<"Employe's Address is : "<<address<<endl;
			cout<<"Employe's Email is : "<<email<<endl;
			cout<<"Employe's Phone Number is : "<<contact<<endl;
		}
        
};
int main(){
	int i,n;
	cout<<"Enter Number of Employee Details you want : ";
	cin>>n;
	D d[n];
	for(i=0;i<n;i++){
		cout<<"Enter Details of Employee "<<i+1<<endl;
		d[i].Setdata();
		d[i].Setdatai();
		d[i].Setdataj();
		d[i].Setdatak();
	}
	for(i=0;i<n;i++){
    
		cout<<"Details of Employee "<<i+1<<endl;
		d[i].Getdataa();
        
	}
    
	return 0;
}