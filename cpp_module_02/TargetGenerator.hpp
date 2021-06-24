/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alilin <alilin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 13:30:14 by alilin            #+#    #+#             */
/*   Updated: 2021/06/24 13:43:17 by alilin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP
#include "ATarget.hpp"
#include <string>
#include <iostream>
#include <list>

class ATarget;

class TargetGenerator
{
public:

	TargetGenerator();
	TargetGenerator(const std::string &name, const std::string &effects);
	virtual ~TargetGenerator();

	void learnTargetType(ATarget *atarget);
	void forgetTargetType(std::string const &targetName);
	ATarget *createTarget(std::string const &targetName);

protected:

	TargetGenerator(const TargetGenerator &other);
	TargetGenerator &operator=(const TargetGenerator &other);
	std::list<ATarget *> target;
};

#endif
