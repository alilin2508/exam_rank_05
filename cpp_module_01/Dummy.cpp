/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alilin <alilin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 15:41:51 by alilin            #+#    #+#             */
/*   Updated: 2021/06/23 15:44:17 by alilin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dummy.hpp"

Dummy::Dummy():
	ATarget("Target Practice Dummy")
{
}

Dummy::Dummy(const Dummy &other)
{
	this->type = other.type;
}
Dummy &Dummy::operator=(const Dummy &other)
{
	this->type = other.type;
	return (*this);
}

Dummy::~Dummy()
{
}

Dummy *Dummy::clone() const
{
	return (new Dummy(*this));
}
