#include<iostream>
#include<string>
using namespace std;
class Animal{
public:
	string name;
	int age;
	public:
	Animal(const string  &id_name,int y_age):name(id_name),age(y_age){}
	
			
		void speak(){
			cout<<"Name "<<name<<"  Age"<<age<<endl;
		}
	};
class Bird:public Animal{
	private:
		int wingLength;
		public:
			Bird(const string &id_name,int y_age,int l_wing):Animal(id_name,y_age),wingLength(l_wing){
			}
			void speak(){
				Animal::speak();
				cout<<"I am bird and I can sing.."<<endl;
			}
	       
};
class Reptile:private Animal{
	private:
	string habitat;
	public:
	Reptile(const string &id_name,int y_age,string habitat_a ):Animal(id_name,y_age),habitat(habitat_a) {
	}   
	void speak(){
		Animal::speak();
		cout<<"I am reptile and i can creep"<<endl;
	}
};
int main(){
	Bird b1("Parrot",10,3);
	Reptile r1("Crocodile",10,"creep");
	cout<<"Bird info"<<endl;
	b1.speak();
	cout<<endl;
	cout<<"Reptile info"<<endl;
	r1.speak();
		cout<<endl;
	return 0;
}