/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou < mhaddaou@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 15:09:06 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/25 23:42:29 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Conversion.hpp"

int main (int ac, char **av){
    try{
        if (ac == 2){
            Conversion T(av[1]);
        }
        else
            throw Conversion::InvalidArgs();
    }
    catch(std::exception& e){
        std::cerr << e.what() << std::endl;
    }
}