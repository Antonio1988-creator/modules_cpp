#include "../include/Bureaucrat.hpp"
#include <iostream>

int main()
{
    std::cout << "=== ex00: quick test ===" << std::endl;

    try {
        Bureaucrat a("Alice", 42);
        std::cout << a << std::endl;

        Bureaucrat b = a; // copy constructor or assignment
        std::cout << "copy: " << b << std::endl;

        std::cout << "Promoting Alice..." << std::endl;
        a.promote();
        std::cout << a << std::endl;

        std::cout << "Demoting Alice..." << std::endl;
        a.demote();
        std::cout << a << std::endl;
    }
    catch (std::exception &e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== invalid creation tests ===" << std::endl;
    try {
        Bureaucrat badLow("BadLow", 151);
        (void)badLow;
    }
    catch (std::exception &e) {
        std::cout << "Expected error: " << e.what() << std::endl;
    }

    try {
        Bureaucrat badHigh("BadHigh", 0);
        (void)badHigh;
    }
    catch (std::exception &e) {
        std::cout << "Expected error: " << e.what() << std::endl;
    }

    std::cout << "\n=== edge-case promote/demote ===" << std::endl;
    try {
        Bureaucrat top("Top", 1);
        std::cout << top << std::endl;
        std::cout << "Trying to promote Top (should fail)" << std::endl;
        top.promote();
    }
    catch (std::exception &e) {
        std::cout << "Expected error: " << e.what() << std::endl;
    }

    try {
        Bureaucrat low("Low", 150);
        std::cout << low << std::endl;
        std::cout << "Trying to demote Low (should fail)" << std::endl;
        low.demote();
    }
    catch (std::exception &e) {
        std::cout << "Expected error: " << e.what() << std::endl;
    }

    std::cout << "\nDone." << std::endl;
    return 0;
}
