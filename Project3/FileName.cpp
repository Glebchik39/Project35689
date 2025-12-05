#include <iostream>
#include <set>
#include <map>
using namespace std;

class Student
{
	string name;
	int age;
public:
	Student() { age = 0; }
	Student(string n, int a)
	{
		name = n;
		age = a;
	}
	void Print()
	{
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
	}

	void SetName(string n)
	{
		name = n;
	}

	string GetName() const
	{
		return name;
	}

	void SetAge(int g)
	{
		age = g;
	}

	int GetAge() const
	{
		return age;
	}

	 bool operator > (Student obj) const
	{
		if (age > obj.age)
		{
			return true;
		}
		else {
			return false;
		}
	}

	bool operator < (Student obj) const
	{
		if (age < obj.age)
		{
			return true;
		}
		else {
			return false;
		}
	}


};

ostream& operator<< (ostream& os, const Student& obj) 
{
	os << "Name: " << obj.GetName() << "\t" << "Age: " << obj.GetAge() << endl;
	return os;
}


typedef pair<Student,Student> mypair;

int main()
{
	setlocale(0, "ru");
	map<Student, Student> group;
	int age;
	string name;
	for (size_t i = 0; i < 5; i++)
	{
		cout << "Enter a name: ";
		cin >> name;
		cout << "Enter a age: ";
		cin >> age;
		Student obj(name, age);
		group.insert(mypair(obj, obj));

	}
	for (auto ptr = group.begin(); ptr != group.end(); ptr++)
	{
		cout << ptr->first << "\t" << ptr->second << endl;
	}


	




}