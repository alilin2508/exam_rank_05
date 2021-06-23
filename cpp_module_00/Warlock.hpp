/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alilin <alilin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 13:50:23 by alilin            #+#    #+#             */
/*   Updated: 2021/06/23 14:18:21 by alilin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
# define WARLOCK_HPP
#include <iostream>
#include <string>

class Warlock
{
public:

	Warlock(const std::string &name, const std::string &title);
	~Warlock();

	const std::string &getName() const;
	const std::string &getTitle() const;
	void setTitle(const std::string &title);
	void introduce() const;

private:

	Warlock();
	Warlock(const Warlock &other);
	Warlock &operator=(const Warlock &other);
	std::string name;
	std::string title;
};

#endif
