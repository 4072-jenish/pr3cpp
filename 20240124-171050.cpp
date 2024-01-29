Skip to content

Code
Issues
Pull requests
BreadcrumbsC-Heritage
/3_3.cpp
Latest commit
kunal-gangani
kunal-gangani
4 hours ago
History
60 lines (60 loc) · 1.19 KB
File metadata and controls

Code

Blame
Older
Newer

Added
5 hours ago
#include<iostream>
using namespace std;
class Animal{
	public:
		int age;
		char name[25];
		void set_values(int age,char name){
			this->age=age;
			this->name[25]=name;
		}
		void get_values(){
			cout<<"I am "<<name<<" & I am "<<age<<" old."<<endl;
		}
};
class Zebra : public Animal{
	public:
		char place[25];
		char type[25];
		void ZebraInput(){
			cout<<"Enter Zebra's Age : ";
			cin>>age;
			cout<<"Enter Zebra's Name : ";
			cin>>name;
			cout<<"Enter Zebra's Origin Place : ";
			cin>>place;
			cout<<"Enter Zebra's Food Type : ";
			cin>>type;
		}
		void ZebraOutput(){
			get_values();
			cout<<"Zebra's Origin Place is : "<<place<<" And It is "<<type<<endl;
		}
};
class Dolphin : public Animal{
	public:
		char place;
		char type;
		void DolphinInput(){
			cout<<"Enter Dolphin's Age : ";
			cin>>age;
			cout<<"Enter Dolphin's Name : ";
			cin>>name;
			cout<<"Enter Dolphin's Origin Place : ";
			cin>>place;
			cout<<"Enter Dolphin's Food Type : ";
			cin>>type;
		}
		void DolphinOutput(){
			get_values();
			cout<<"Dolphin's Origin Place is : "<<place<<" And It is "<<type<<endl;
		}
};
int main(){
	Zebra z;
	Dolphin d;
	z.ZebraInput();
	z.ZebraOutput();
	d.DolphinInput();
	d.DolphinOutput();
}
Blaming C-Heritage/3_3.cpp at master · kunal-gangani/C-Heritage