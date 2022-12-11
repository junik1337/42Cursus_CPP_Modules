/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 20:36:42 by ayassir           #+#    #+#             */
/*   Updated: 2022/12/11 21:01:09 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::setFirstName(std::string first)
{
    this->first_name = first;
}

std::string Contact::getFirstName()
{
    return (this->first_name);
}

void Contact::setLastName(std::string last)
{
    this->last_name = last;
}

std::string Contact::getLastName()
{
    return (this->last_name);
}

void Contact::setnickName(std::string nick)
{
    this->nickname = nick;
}

std::string Contact::getnickName()
{
    return (this->nickname);
}

void Contact::setPhoneNumber(std::string phone)
{
    this->phone_number = phone;
}

std::string Contact::getPhoneNumber()
{
    return (this->phone_number);
}

void Contact::setDarkSecret(std::string dark)
{
    this->dark_secret = dark;
}

std::string Contact::getDarkSecret()
{
    return (this->dark_secret);
}