# ✨ CPP00 – Introduction to C++ (42 Barcelona)

🚀 Your first step into Object-Oriented Programming
📚 Understanding classes, objects, namespaces & I/O
🧠 Designed to build the foundation for all future C++ modules

🎯 Objective

## CPP00 introduces the core principles of C++ through small exercises that teach you:

🏗️ How classes & objects work

🎛️ Public vs private encapsulation

🌐 How to use namespaces

💬 Handling input/output with iostreams

🧱 Structuring programs across .cpp and .hpp files

🧮 Using static attributes & methods

🧵 Understanding the basics of OOP memory model


## 📁 Project Structure

CPP00
├── ex00/   # Megaphone (basic I/O)
├── ex01/   # PhoneBook (classes + encapsulation)
└── ex02/   # Account (static members, logs, object lifecycle)

🧪 Exercises Overview
🟦 ex00 – Megaphone

💡 Your first C++ program
Transforms input arguments into uppercase using std::toupper and prints them with std::cout.


## 🟩 ex01 – PhoneBook

📱 Mini contact manager
Builds your first real class system in C++:

Component	Purpose
Contact	Stores user data (name, phone, secret…)
PhoneBook	Manages up to 8 contacts, search & formatting

You learn:

Encapsulation

Member functions

Simple formatted output

Input parsing


## 💡 Key Concepts Learned
Concept	Description
Classes & Objects	Core OOP structure in C++
Namespaces	Avoid collisions (std::)
I/O Streams	std::cout, std::cin, formatting
Encapsulation	public / private logic
Static Members	Shared data across all objects
Headers	.hpp declarations vs .cpp implementations
🔧 Compilation

All exercises must compile with:

c++ -Wall -Wextra -Werror -std=c++98


🚫 No C++11 features, templates, STL containers, or additional libraries.

▶️ Running the Programs

Example:

cd ex01
make
./phonebook


Or manual:

c++ -Wall -Wextra -Werror -std=c++98 *.cpp -o program

🧠 What I Gained From CPP00

A solid first understanding of object-oriented principles

Clear distinction between C vs C++ paradigms

Clean code structure using headers + cpp files

How encapsulation makes code safer and more modular

Confidence to move into CPP01 → CPP09

🔗 Repository

👉 https://github.com/zmetreveli/CPP-00

🎨 ¿Quieres que lo haga aún más visual?

Puedo añadir:

🖼️ Banners tipo portada

🎖️ Badges animados (shields.io)

📊 Tablas más elaboradas

📌 Un "quick demo" con ejemplos de output

🧭 Un índice navegable con anchors
