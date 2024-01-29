#include<iostream>

using namespace std;

class TakeNumber{

	public:

		int num;
		void Takedata(){
			cout<<"Enter Number : ";
			cin>>num;
		}

};

class Square : public TakeNumber
{

	public:


		void Squar(){
			
			Takedata();
			cout<<"The Square of Number "<<num<<" is "<<num*num<<endl;
			
		}
};
class Cubee : public TakeNumber
{
	public:

		void Cube(){
			Takedata();
			cout<<"The Cube of Number "<<num<<" is "<<num*num*num<<endl;
		}

};

int main(){

	
	Cubee c;
	Squar s;
	s.Squar();
	c.Cube();
	
	return 0;
}
