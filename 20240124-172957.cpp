#include<iostream>
using namespace std;

class EmployeInfo {

public:
    int emid;
    int emage;
    int salary;
};

class EmployeInfo2 {

public:
    char fname[25];
    char sname[25];
    char desgnt[25];

};
class GetDetails : public EmployeInfo, public EmployeInfo2 {

public:

    void Setdata() {
        cout<<"Enter Employe ID : ";
        cin>>emid;
        cout<<"Enter Employe Age : ";
        cin>>emage;
        cout<<"Enter Employe First Name : ";
        cin>>fname;
        cout<<"Enter Employe Surname : ";
        cin>>sname;
        cout<<"Enter Employe Designation : ";
        cin>>desgnt;
        cout<<"Enter Employe Salary : ";
        cin>>salary;
        
    }

    void Getdata() {
        
        cout<<" Employe's ID  : "<<emid<<endl;
        cout<<" Employe's First Name : "<<fname<<endl;
        cout<<" Employe's Surname  : "<<sname<<endl;
        cout<<" Employe's Age  : "<<emage<<endl;
        cout<<" Employe's Designation  : "<<desgnt<<endl;
        cout<<" Employe's Salary  : "<<salary<<endl;
        
    }
};

int main() {
    
    int i,n;
    
    cout<<"Enter the Number of Employe Details you Want : ";
    cin>>n;
    
    GetDetails g[n];
    
    for(i=0; i<n; i++) {
        g[i].Setdata();
    }
    
    for(i=0; i<n; i++) {
        g[i].Getdata();
    }
    
    return 0;
}
