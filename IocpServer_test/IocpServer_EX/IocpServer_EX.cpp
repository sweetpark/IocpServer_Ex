#include <iostream>
#include <string>

class Person
{
public:
	std::string name;
public:
	Person(std::string n) : name(n) {};
	virtual void PrintInfo()
	{
		std::cout << "Person 입니다!" << std::endl;
	}

};

class Student : public Person
{
public:
	int stu_num;

public:
	//초기화 리스트
	// 생성자 (파라미터) : 멤버변수(값), 멤버변수(값), 멤버변수(값), 멤버변수(값),.... {};
	Student(std::string n, int stu_num) : Person(n), stu_num(stu_num) {};
	virtual void PrintInfo()
	{
		Person::PrintInfo();
		std::cout << "학번은" << this->stu_num << std::endl;
	}
};




int main()
{


	Person* pt_person;
	Person per("사람1");
	Student stu("학생1", 10);

	pt_person = &per;
	pt_person->PrintInfo();


	std::cout << "=================" << std::endl;
	pt_person = &stu;
	pt_person->PrintInfo();



	return 0;
}
