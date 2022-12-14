/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 16:58:19 by ayassir           #+#    #+#             */
/*   Updated: 2022/12/11 21:02:37 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>
# include <sstream>
# include <string.h>
# include <ctype.h>
# include <stdlib.h>

class PhoneBook
{
    public :
        Contact contact[8];
};

#endif