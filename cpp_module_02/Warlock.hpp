/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alilin <alilin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 13:50:23 by alilin            #+#    #+#             */
/*   Updated: 2021/06/24 13:47:28 by alilin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
# define WARLOCK_HPP
#include <iostream>
#include <string>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"
#include <list>

class Warlock
{
public:

	Warlock(const std::string &name, const std::string &title);
	~Warlock();

	const std::string &getName() const;
	const std::string &getTitle() const;
	void setTitle(const std::string &title);
	void introduce() const;
	void learnSpell(ASpell *aspell);
	void forgetSpell(std::string spellName);
	void launchSpell(std::string spellName, ATarget &target);

private:

	Warlock();
	Warlock(const Warlock &other);
	bool isSpell(std::string spellName);
	Warlock &operator=(const Warlock &other);
	std::string name;
	std::string title;
	SpellBook 	book;
};

#endif
