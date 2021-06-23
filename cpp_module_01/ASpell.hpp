/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alilin <alilin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 14:16:41 by alilin            #+#    #+#             */
/*   Updated: 2021/06/23 14:34:55 by alilin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASPELL_HPP
# define ASPELL_HPP

class ASpell
{
public:

	ASpell();
	ASpell(const std::string &name, const std::string &effects);
	ASpell(const ASpell &other);
	Aspell &operator=(const ASpell &other);
	virtual ~ASpell();

	std::string getName() const;
	std::string getEffects() const;
	virtual ASpell *clone() const = 0;

private:

	std::string name;
	std::string effects;
};

#endif
