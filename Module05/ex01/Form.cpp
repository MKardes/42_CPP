#include "Form.hpp"

Form::Form();
Form::Form(const Form &copy);
Form::~Form();
Form &Form::operator=(const Form &copy);

std::ostream &operator<<(std::ostream &o, Form &s)
{
	o << this->name << std::endl;
	return o;
}
