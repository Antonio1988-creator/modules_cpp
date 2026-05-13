/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.tpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguil-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 00:46:36 by anguil-l          #+#    #+#             */
/*   Updated: 2025/09/24 00:46:59 by anguil-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SPAN_TPP_
#define _SPAN_TPP_

template<typename Iterator>
void	Span::addRange(Iterator begin, Iterator end) {
	for (; begin != end; ++begin)
		addNumber(*begin);
}

#endif
