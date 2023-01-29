#include "Dog.hpp"
#include "Cat.hpp"

/* int main()
{
	Dog a;
	Dog b(a);
	a = b;

	Cat c;
	Cat d(c);
	c = d;

	a.makeSound();
	c.makeSound();
	b.makeSound();
	d.makeSound();
} */
int main()
{
const Animal* j = new Dog();
const Animal* i = new Cat();
j->makeSound();
i->makeSound();
delete j;//should not create a leak
delete i;
return 0;
}
