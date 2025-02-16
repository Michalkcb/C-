/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 15:45:08 by mbany             #+#    #+#             */
/*   Updated: 2025/02/15 17:15:59 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Just to make sure that everybody is awake, write a program that behaves as follows:
$>./megaphone "shhhhh... I think the students are asleep..."
SHHHHH... I THINK THE STUDENTS ARE ASLEEP...
$>./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF.
$>./megaphone
* LOUD AND UNBEARABLE FEEDBACK NOISE *
$>
*/
#include <iostream>

int s_len(char *s)
{
    int i = 0;
    while (s[i])
        i++;
    return (i);
}

int rev_print(char *s)
{
    int len = s_len(s) - 1; // Ostatni znak jest na pozycji s_len - 1

    while (len >= 0) // Pętla do 0, aby nie wyjść poza zakres
    {
        std::cout << s[len]; // Wypisz pojedynczy znak
        len--;
    }
    std::cout << std::endl; // Nowa linia
    return (0);
}

int main(int ac, char **av)
{
    if (ac < 2)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        int i = 1;
        while (i < ac)
        {
            char *s = av[i]; // Pobierz kolejne argumenty
            rev_print(s);    // Odwróć i wypisz
            i++;
        }
    }
    return 0;
}
