/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou < mhaddaou@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 22:51:48 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/26 00:22:14 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
#define CONVERSION_HPP

#include <iostream>
#include <string>
#include <ctype.h>
#include <cctype>
#include <cstdlib>

class Conversion{
    private:
        char    c;
        int     d;
        float   f;
        double  df;
    public:
        Conversion();
        Conversion(std::string str);
        Conversion (const Conversion &other);
        Conversion& operator=(const Conversion &other);
        ~Conversion();
        class NoPrintableChar :public std::exception{
            public:
                virtual const char * what() const throw(); 
        };
        class Impossible :public std::exception{
            public:
                virtual const char * what() const throw();
        };
        class NotaNumber : public std::exception{
            public:
                virtual const char * what() const throw();
        };
        class NotaFloat : public std::exception{
            public:
                virtual const char * what() const throw();
        };
        class InvalidArgs : public std::exception{
            public:
                virtual const char * what() const throw();
        };
        int ChckIsInteger(std::string str) const;
        int CheckIsNoPrintableChar(std::string str) const;
        int CheckIsFloat(std::string str) const;
        int CheckIsChar(std::string str) const;
        int checkIsDouble(std::string str) const;
        int ConvertStrToInterger(std::string str) const;
        float ToFloat(int number) const;
        // char ToChar(int number) const;
        // double ToDouble(int number) const;
};

#endif