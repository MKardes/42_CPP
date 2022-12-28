#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
/*
int main()
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
}*/
int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete i;
	delete j;
	
	const WrongAnimal* metaWrong = new WrongAnimal();
	const WrongAnimal* catWrong = new WrongCat();
	std::cout << catWrong->getType() << std::endl;
	metaWrong->makeSound();
	catWrong->makeSound();
	delete metaWrong;
	delete catWrong;
	return 0;
}
