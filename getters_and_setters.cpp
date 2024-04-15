#include<iostream>
using namespace std;
class person
{
	private:
		string name;
		int age;
		string city;
		
		public:
			person()
			{
				name="no_name";
				age=0;
				city="not_applicable";
			}
			person(string name, int age, string city)
			{
				this->name=name;
				this->age=age;
				this->city=city;
			}
			void display()
			{
				cout<<"\n PERSON INFORMATION :: "<<endl;
				cout<<"\n Name : "<<name<<" Age : "<<age<<" City : "<<city<<endl;
			}
			string getname()
			{
				return name;
			}
			int getage()
			{
				return age;
			}
			 string getcity()
			{
				return city;
			}
			void setname()
			{
				this->name=name;
			}
			void setage()
			{	
				this->age=age;
			}
			void setcity()
			{
				this->city=city;
			}
};
int main()
{
	person p("xey", 20, "newyork");
	p.display();
	person p1;
	p1.display();
}
