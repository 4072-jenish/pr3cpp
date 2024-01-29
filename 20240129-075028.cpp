#include<iostream>
#include<string. h>

using namespace std;
class Takevalue{
public:
		int num;
		void value(){
        
		cout<<"enter  your Number : ";
		      	cin>> num;
            
		}
};
class  Squar  :  public  Takevalue
{

	public:
		void Square(){
		       	value();
        	cout<<"The Square of Number is "<<num*num<<endl;
            
		}
};
class  Cube  :  public  Takevalue
{

	public:
		void Cube(){
		       	value();
	    cout<<"The Cube of Number is "<<num*num*num<<endl;
            
		}
};
int main(){

	Cube c1;
	Squar s1;
    
	s1.Square();
	c1.Cube();
    
	return 0;
    
}