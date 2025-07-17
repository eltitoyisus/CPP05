/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramos-a <jramos-a@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 23:35:19 by jramos-a          #+#    #+#             */
/*   Updated: 2025/07/16 23:35:19 by jramos-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

// constructor of forms only 1 parameter
// implement the exec function in the propper classes
// check if the form is signed and the bureaucrat grade

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main() {
	try {
		Bureaucrat b1("Alice", 5);
		Bureaucrat b2("Bob", 45);
		Bureaucrat b3("Charlie", 137);

		ShrubberyCreationForm shrub("Home");
		PresidentialPardonForm pardon("Criminal");
		RobotomyRequestForm robot("Bender");

		std::cout << "\n--- Trying ShrubberyCreationForm ---\n";
		b3.signAForm(shrub);
		b3.executeForm(shrub);

		std::cout << "\n--- Trying RobotomyRequestForm ---\n";
		b2.signAForm(robot);
		b2.executeForm(robot);

		std::cout << "\n--- Trying PresidentialPardonForm ---\n";
		b1.signAForm(pardon);
		b1.executeForm(pardon);

	} catch (std::exception &e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	return 0;
}
