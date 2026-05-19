/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguil-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 16:20:44 by anguil-l         #+#    #+#             */
/*   Updated: 2025/09/26 19:05:18 by anguil-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
#include <ctime>
#include <iomanip>
#include <cstdlib>

class PmergeMe
{
	public:
		PmergeMe(std::vector<int> & input);
		PmergeMe(const PmergeMe & src);
		~PmergeMe();

		PmergeMe & operator=(const PmergeMe & rhs);

	private:
		std::vector<int>	_vector;
		std::deque<int>		_deque;
		int					_size;

		void	_sortVector();
		void	_sortDeque();

		template <typename Container>
		void _mergeInsertSort(Container & container)
		{
			if (container.size() <= 1)
				return;

			// Simple merge-insert: separate into pairs and sort them
			Container pending;
			Container sorted;

			typename Container::iterator it = container.begin();

			// Create pairs and sort them
			while (it != container.end())
			{
				typename Container::iterator next = it;
				++next;

				if (next == container.end())
				{
					pending.push_back(*it);
					break;
				}

				int a = *it;
				int b = *next;

				if (a > b)
					std::swap(a, b);

				sorted.push_back(a);
				pending.push_back(b);

				++it;
				++it;
			}

			// Sort main chain
			std::sort(sorted.begin(), sorted.end());

			// Insert pending elements using binary search
			for (typename Container::iterator pend = pending.begin(); pend != pending.end(); ++pend)
			{
				typename Container::iterator pos = std::lower_bound(sorted.begin(), sorted.end(), *pend);
				sorted.insert(pos, *pend);
			}

			container = sorted;
		}
};

#endif
