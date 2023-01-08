	#include "Animal.h"
	#include "WrongAnimal.h"
	#include "WrongCat.h"
int main()
{
    const Animal* sample[4];

    for (int i = 0; i < 2; ++i)
    {
        sample[i] = new Dog();
    }
    for (int i = 2; i < 4; ++i)
    {
        sample[i] = new Cat();
    }

    for (int i = 0; i < 4; ++i)
    {
        delete sample[i];
    }

    Cat cat;
    Cat cat2;
    // cat.setBrainIdeas(0, "str");
    cat2 = cat;
    std::cout << "cat brain ideas 0: " << cat.getBrain() << std::endl;
    std::cout << "cat2 brain ideas 0: " << cat2.getBrain() << std::endl;
    // std::cout << "cat brain ideas 0 addres: " << &(cat.getBrain()) << std::endl;
    // std::cout << "cat2 brain ideas 0 addres: " << &(cat2.getBrain()) << std::endl;

    Cat cat3;
    // cat3.setBrainIdeas(0, "str");
    Cat cat4(cat3);
    std::cout << "cat3 brain ideas 0: " << cat3.getBrain() << std::endl;
    std::cout << "cat4 brain ideas 0: " << cat4.getBrain() << std::endl;
    // std::cout << "cat3 brain ideas 0 addres: " << &(cat3.getBrain()) << std::endl;
    // std::cout << "cat4 brain ideas 0 addres: " << &(cat4.getBrain()) << std::endl;
}

// #define ANIMALNUMBER 8
// int main()
// {
// const Animal* animal = new Animal();
// // const Animal* d = new Dog();
// // const Animal* c = new Cat();
// for(int i = 0; i < ANIMALNUMBER; i++)
// {
// 	if (i < ANIMALNUMBER / 2)
// 		animal[i] = new Dog();
// 	else
// 		animal[i] = new Cat();
// 	std::cout << animal[i]. getType() << std::endl;
// }



// delete d;//should not create a leak?
// delete c;

