/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 12:11:34 by ayassir           #+#    #+#             */
/*   Updated: 2022/12/11 21:02:41 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>

class Contact
{
    private :
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string dark_secret;
    public :
        void setFirstName(std::string first);
        std::string getFirstName();
        void setLastName(std::string last);
        std::string getLastName();
        void setnickName(std::string nick);
        std::string getnickName();
        void setPhoneNumber(std::string phone);
        std::string getPhoneNumber();
        void setDarkSecret(std::string dark);
        std::string getDarkSecret();
        int     finished;
        
};

#endif