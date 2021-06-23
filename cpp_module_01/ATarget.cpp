/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alilin <alilin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 14:25:53 by alilin            #+#    #+#             */
/*   Updated: 2021/06/23 14:40:21 by alilin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"

ATarget::ATarget():
	type(NULL)
{
}

ASprll::ATarget(const std::string &type):
	type(type)
{
}

ATarget::ATarget(const ATarget &other)
{
	this->type = other.type;
}
ATarget &ATarget::operator=(const ATarget &other)
{
	this->type = other.type;
	return (*this);
}

ATarget::~ATarget()
{
}

std::string getType() const
{
	return (this->type);
}
