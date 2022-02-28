# 42_Cpp_Module_04

The goal of the **C++ modules 00 to 08** is to introduce the student to Object-Oriented Programming and the C++ programming language in general.
Because of the complexity of the language, the students code has to comply with the C++98 standard.

**C++ module 04** introduces the learner to the fundamental OOP concepts of subtype polymorphism, abstract classes and interfaces.

## Description

ex00:  
Implement an animal class, as well as a Dog and a Cat class, inheriting from the animal class and having their specific sounds. Also implement a a WrongAnimal and a WrongCat class, to check how polymorphism can go wrong.
(intro to polymorphism)

ex01:  
Implement a Brain class and give Cat and Dog a 'private Brain (pointer)' attribute. Also create an array of Animals (half Cats/half Dogs), which are destroyed at the end of your program.
(understanding the difference between 'deep' and 'shallow' class copies)

ex02:  
Fix the Animal class so nobody can instantiate it.
(intro to 'abstract classes')

ex03:  
Write AMateria class, and its 2 concrete classes Ice & Cure. Create concrete class Character, which can equip and unequip Ice & Cure objects. Also write a MateriaSource class, which is able to learn new AMateria 'templates' if needed.
(first use of 'interfaces' (since we use CC++98, we use 'pure abstract classes')

## Learnings

Again, a good refresher to the given topics, with the typical '42 twist'.

### Resources

* [cplusplus.com](http://www.cplusplus.com/)
* [Virtual/pure virtual functions & abstract classes](https://www.youtube.com/watch?v=T8f4ajtFU9g)
* [Deep vs shallow copy](https://www.learncpp.com/cpp-tutorial/shallow-vs-deep-copying/)
