#include "course.h"

Course::Course( const Course& t){
	ID=t.ID;
	name=t.name;
	}
Course& Course::operator= (const Course& t){
	ID=t.ID;
	name=t.name;
	return *this;
	}


void Course::printInfo( ostream &os)const{
	os<<*this;
	}
