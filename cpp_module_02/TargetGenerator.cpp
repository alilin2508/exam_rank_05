/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alilin <alilin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 13:33:02 by alilin            #+#    #+#             */
/*   Updated: 2021/06/24 13:55:55 by alilin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator()
{
}

TargetGenerator::~TargetGenerator()
{
	std::list<ATarget *>::iterator _begin = this->target.begin();
	std::list<ATarget *>::iterator _end = this->target.end();

	while (_begin != _end)
	{
		delete (*_begin);
		this->target.erase(_begin);
		_begin++;
	}
}

void TargetGenerator::learnTargetType(ATarget *atarget)
{
	std::list<ATarget *>::iterator _begin = this->target.begin();
	std::list<ATarget *>::iterator _end = this->target.end();

	if (atarget)
	{
		while (_begin != _end)
		{
			if ((*_begin)->getType() == atarget->getType())
				return ;
			_begin++;
		}
		this->target.push_back(atarget->clone());
	}
	return ;
}

void TargetGenerator::forgetTargetType(std::string const &targetName)
{
	std::list<ATarget *>::iterator _begin = this->target.begin();
	std::list<ATarget *>::iterator _end = this->target.end();

	while (_begin != _end)
	{
		if ((*_begin)->getType() == targetName)
		{
			delete (*_begin);
			this->target.erase(_begin);
			return ;
		}
		_begin++;
	}
	return ;
}

ATarget *TargetGenerator::createTarget(std::string const &targetName)
{
	std::list<ATarget *>::iterator _begin = this->target.begin();
	std::list<ATarget *>::iterator _end = this->target.end();

	while (_begin != _end)
	{
		if ((*_begin)->getType() == targetName)
		{
			return ((*_begin)->clone());
		}
		_begin++;
	}
	return (NULL);
}
