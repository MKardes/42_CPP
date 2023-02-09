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
}
int main()
{
const Animal* j = new Dog();
const Animal* i = new Cat();
j->makeSound();
i->makeSound();
delete j;//should not create a leak
delete i;}*/
int	main()
{
Dog *a[3] = {new Dog(), new Dog(), new Dog()};
while(1)
{
	*a[0] = *a[1];
	*a[1] = *a[2];
}

Dog *b = new Dog();
Dog *c = new Dog();

*b = *c;

return 0;
}
