// oop 2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

using namespace std;

/*class Person
{
protected:
	string name;
	int age; 
	string gender;
	int weight;
public:
	void PersonPrint()
	{
		cout << name << "\t" << age << "\t" << gender << "\t" << weight << endl;
	}
	Person(string name, int age, string gender, int weight)
	{
		this->name = name;
		this->age = age;
		this->gender = gender;
		this->weight = weight;
	}
	void setName(string name)
	{
		this->name = name;
	}
	void setAge(int age)
	{
		this->age = age;
	}
	void setGender(string gender)
	{
		this->gender = gender;
	}
	void setWeight(int weight)
	{
		this->weight = weight;
	}
};
class Student : public Person
{
private:
	int yearOfStudy;
public:
	Student(int yearOfStudy) : Person("", 0, "", 0)
	{
		this->yearOfStudy = yearOfStudy;
	}
	void setYearOfStudy(int yearOfStudy)
	{
		this->yearOfStudy = yearOfStudy;
	}
	int getYearOfStudy()
	{
		return yearOfStudy;
	}
	int setIncrease()
	{
		return yearOfStudy;
		yearOfStudy++;
	}
	void PersonPrint()
	{
		cout << name << "\t" << age << "\t" << gender << "\t" << weight << "\t" << yearOfStudy <<endl;
	}
};*/

class Person {
public:
	string name;
	int age;
	string gender;
	int weight;
	void changeName();
	void changeWeight(int personWeight);
	void PersonPrint()
	{
		cout << name << "\t" << age << "\t" << gender << "\t" << weight << "\t" << endl;
	}
};

class Student : public Person
{
	int year;
public:
	Student(string Name, int Age, string Gender, int Weigh, int Year);
	void incYear();
	void changeYear();
};

void Person::changeName()
{
	cout << "Input name: \n";
	cin >> name;
}

void Person::changeWeight(int personWeight)
{
	cout << "Input weight: \n";
	cin >> weight;
}

Student::Student(string Name, int Age, string Gender, int Weigh, int Year)
{
	name = Name;
	age = Age;
	gender = Gender;
	weight = Weigh;
	year = Year;
}

void Student::incYear()
{
	int Inc;
	cout << "Add year :\n";
	cin >> Inc;
	year += Inc;
}

void Student::changeYear()
{
	cout << "Input year: \n";
	cin >> year;
}


class Fruit
{
public:
	string name;
	string color;
	Fruit(string name, string color) : name(name), color(color)
	{

	}
};
class Apple : public Fruit
{
public:
	Apple(string color = "Red", string name = "Apple") : Fruit(name, color)
	{
		
	}
	string getName()
	{
		return name;
	}
	string getColor()
	{
		return color;
	}
};
class Banana : public Fruit
{
public:
	Banana(string name = "Banana", string color = "Yellow") : Fruit(name, color)
	{

	}
	string getName()
	{
		return name;
	}
	string getColor()
	{
		return color;
	}
};
class GrannySmith : public Apple
{
public:
	GrannySmith(string name = "Granny Smith", string color = "Green") : Apple(name, color)
	{

	}
};

int main()
{
	Person st1;
	st1.name = "Arthur";
	st1.age = 22;
	st1.gender = "men";
	st1.weight = 95;
	//Student st2("");
	st1.PersonPrint();

	Apple a("red");
	Banana b;
	GrannySmith c;

	cout << "My " << a.getName() << " is " << a.getColor() << ".\n";
	cout << "My " << b.getName() << " is " << b.getColor() << ".\n";
	cout << "My " << c.getName() << " is " << c.getColor() << ".\n";


	cout << "Ни**я не понятно, но очень интересно" << endl;

	return 0;
}