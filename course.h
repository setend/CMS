#ifndef COURSE_H_
#define COURSE_H_
#include <iostream>
#include <string>


class Course{

public:
	Course();
	Course(const Course& t);
	Course& operator= (const Course &t);
	std::string setName(const std::string &s){
		name=s;
		}
	std::ostream& operator<< (std::ostream& os,const Course&)const;
	std::istream& operator>> (std::istream& is, Course&);
	std::string getID() const { return ID;}

	void printInfo(std::ostream& = cout)const;

private:
	std::string ID;
	std::string name;
}

#endif
