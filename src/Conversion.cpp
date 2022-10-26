/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou < mhaddaou@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 23:20:13 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/26 00:18:40 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Conversion.hpp"

Conversion::Conversion(){}

Conversion::Conversion(const Conversion & other){
    *this = other;
}

Conversion& Conversion::operator=(const Conversion& other){
    c = other.c;
    d = other.d;
    f = other.f;
    df = other.df;
    return (*this);
}

Conversion::~Conversion(){}

int Conversion::ChckIsInteger(std::string str) const{
    int i = 0;
    while (str[i]){
        if (!isdigit(str[i]))
            return (1);
        i++;
    }   
    return (0);
}

Conversion::Conversion(std::string str){
    if (Conversion::ChckIsInteger(str) == 0)
        std::cout << "is integer" << std::endl;
    else
        std::cout << "is not integer" << std::endl;
    if (Conversion::CheckIsNoPrintableChar(str))
    
}

const char* Conversion::InvalidArgs::what() const throw(){
    return ("ERROR : invalid arguments");
}

const char * Conversion::NoPrintableChar::what() const throw(){
    return ("Non displayable");
}

const char * Conversion::Impossible::what() const throw(){
    return ("impossible");
}

const char * Conversion::NotaNumber::what() const throw(){
    return ("nan");
}

const char * Conversion::NotaFloat::what() const throw(){
    return ("nanf");
}

int Conversion::ChckIsInteger(std::string str) const{
    int i = 0;
    for (; str[i]; i++){
        if (!isprint(str[i]))
            return (1);
    }
    return (0);
}

int Conversion::ConvertStrToInterger(std::string str) const{
    return (atoi(str.c_str()));
}

float Conversion::ToFloat(int number) const{
    return (static_cast<float>(number));
}