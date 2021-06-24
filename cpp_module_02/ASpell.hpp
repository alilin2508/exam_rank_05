/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alilin <alilin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 14:16:41 by alilin            #+#    #+#             */
/*   Updated: 2021/06/23 16:18:08 by alilin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASPELL_HPP
# define ASPELL_HPP
#include "ATarget.hpp"
#include <string>
#include <iostream>

class ATarget;

class ASpell
{
public:

	ASpell();
	ASpell(const std::string &name, const std::string &effects);
	ASpell(const ASpell &other);
	ASpell &operator=(const ASpell &other);
	virtual ~ASpell();

	std::string getName() const;
	std::string getEffects() const;
	virtual ASpell *clone() const = 0;
	void launch(const ATarget &target) const;

protected:

	std::string name;
	std::string effects;
};

#endif
