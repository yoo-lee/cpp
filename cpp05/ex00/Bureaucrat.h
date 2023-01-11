#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>

class Bureaucrat
{
	private:
			const std::string name;
			int grade;
			static const int MAX_GRADE = 1;
			static const int MIN_GRADE = 150;
	public:
			Bureaucrat();
			Bureaucrat(const std::string& name, int grade);
			Bureaucrat(const Bureaucrat& src);
			Bureaucrat& operator=(const Bureaucrat& src);	
			~Bureaucrat();

			const std::string& getName() const;
			int getGrade() const;
			void incrementGrade();
			void decrementGrade();			
						
			class GradeTooHighException : public std::exception
			{
				public:
						const char* what() const throw();
			};

			class GradeTooLowException : public std::exception
			{
				public:
						const char* what() const throw();
			};
};

std::ostream& operator<<(std::ostream& outputStream, const Bureaucrat& obj);

#endif


// Let’s design an artificial nightmare of offices, corridors, 
// forms, and waiting queues.
// Sounds fun? No? Too bad.
// First, start by the smallest cog in this vast 
// bureaucratic machine: the Bureaucrat.
// A Bureaucrat must have:
// • A constant name.
// • And a grade that ranges from 1 (highest possible grade) to 150 (lowest possible
// grade).
// Any attempt to instantiate a Bureaucrat using an invalid grade must throw an exception:
// either a Bureaucrat::GradeTooHighException or a
//  Bureaucrat::GradeTooLowException.
