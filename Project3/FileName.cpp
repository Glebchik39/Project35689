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

	string GetName()
	{
		return name;
	}

	void SetAge(int g)
	{
		age = g;
	}

	int GetAge()
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
typedef pair<Student,Student> mypair;

int main()
{
	setlocale(0, "ru");
	map<Student, Student> group;
	int age;
	string name;
	for (size_t i = 0; i < 5; i++)
	{
		cin >> name;
		cin >> age;
		Student obj(name, age);
		group.insert(mypair(obj, obj));

	}
	for (auto el : group)
    {
		cout << el.first << "\t" << el.second << endl;
    }


	//set<int> Coll;
	//Coll.insert(5);
	//Coll.insert(4);
	//Coll.insert(3);
	//Coll.insert(2);
	//Coll.insert(1);
	//Coll.insert(-5);
	//Coll.insert(-3);
	//Coll.insert(-3);
	//Coll.insert(-3);
	//Coll.insert(-3);
	//Coll.insert(-3);

	//for (auto i : Coll)
	//{
	//	cout << i << "\t";
	//}
	//cout << endl;
	//for (auto ptr = Coll.begin(); ptr != Coll.end(); ptr++)
	//{
	//	cout << *ptr << "\t";
	//}


	//setlocale(0, "ru");
	//typedef pair<string, string> mypair;

	//map<string, string> dick;
	//dick.insert(mypair("Dungein", "Павел"));
	//dick.insert(mypair("cock", "Ренат"));
	//dick.insert(mypair("jorking", "Глеб"));
	//dick.insert(mypair("blow job", "Богдан"));
	//for (auto el : dick)
	//{
	//	cout << el.first << ": " << el.second << endl;
	//}

	//string str;
	//cin >> str;

	//auto ptr = dick.find(str);
	//cout << ptr->second << endl;
	//cout << dick[str] << endl;




}