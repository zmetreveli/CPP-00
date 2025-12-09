📘 CPP00 – Introduction to Object-Oriented Programming in C++

CPP00 is the first module of the 42 C++ Piscine, introducing fundamental Object-Oriented Programming concepts.
This project focuses on understanding how C++ works compared to C, specifically in terms of classes, objects, memory model, namespaces, and basic I/O.

🚀 Goals of the Module

CPP00 teaches you to:

Understand the difference between procedural (C) and object-oriented (C++) programming

Create and use classes and objects

Work with member functions and attributes

Use namespaces

Handle input/output streams (std::cout, std::cin)

Learn canonical class form basics

Understand header structure, compilation and separation of .hpp / .cpp files

This module establishes the foundation that all later CPP modules build upon.

📂 Project Structure
CPP00/
│
├── ex00/   # Megaphone program
├── ex01/   # PhoneBook (dynamic behavior & simple classes)
├── ex02/   # Accounts simulation (static members, logging)
└── README.md

📝 Exercise Breakdown
ex00 – Megaphone

A simple program that takes arguments and prints them in uppercase, demonstrating:

Basic compilation

std::cout

Handling command-line arguments

ex01 – PhoneBook

Small interactive program that stores contacts.
Concepts learned:

Class design

Encapsulation

Member functions

Static arrays & simple input handling

You build two classes:

Contact

PhoneBook

ex02 – Account

A simulation of bank accounts demonstrating:

Static attributes

Static member functions

Timestamps & formatted output

Object lifecycle understanding

🧠 Key C++ Concepts Learned
Concept	Description
Classes & Objects	How to define, instantiate, and interact with C++ classes
Namespaces	Avoiding naming conflicts using namespace
I/O Streams	Using std::cout, std::cin, formatting output
Static Members	Shared attributes across instances
Encapsulation	Private vs public members
Header Files	Separating declaration and implementation
🛠️ Compilation Rules

All exercises must compile with:

c++ -Wall -Wextra -Werror -std=c++98


No external libraries or C++11+ features are allowed.

▶️ How to Run It

Example (from inside an exercise folder):

make
./program_name


Or compile manually:

c++ -Wall -Wextra -Werror -std=c++98 *.cpp -o program

📚 What This Project Taught Me

The importance of clean class design

How C++ handles memory, objects and scope

Differences between C and C++ paradigms

How to structure multi-file C++ programs

Working with the C++98 standard and avoiding modern shortcuts

This module was my first step into object-oriented programming, and it set the foundation for CPP01–CPP09.
