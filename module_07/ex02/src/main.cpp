/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguil-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 18:12:13 by anguil-l          #+#    #+#             */
/*   Updated: 2025/04/26 18:12:24 by anguil-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Array.hpp"
#include <string>

int	main(void)
{
	std::cout << "--- Test 1: Empty array construction ---" << std::endl;
	Array<int>	empty;
	std::cout << "Empty array size: " << empty.size() << std::endl;
	std::cout << std::endl;

	std::cout << "--- Test 2: Array construction with n=5 ---" << std::endl;
	Array<int>	arr(5);
	std::cout << "Array size: " << arr.size() << std::endl;
	unsigned int	i;
	i = 0;
	while (i < arr.size())
	{
		std::cout << "arr[" << i << "] = " << arr[i] << std::endl;
		i++;
	}
	std::cout << std::endl;

	std::cout << "--- Test 3: Modifying array elements ---" << std::endl;
	i = 0;
	while (i < arr.size())
	{
		arr[i] = i * 10;
		i++;
	}
	i = 0;
	while (i < arr.size())
	{
		std::cout << "arr[" << i << "] = " << arr[i] << std::endl;
		i++;
	}
	std::cout << std::endl;

	std::cout << "--- Test 4: Copy constructor ---" << std::endl;
	Array<int>	copy(arr);
	std::cout << "Copy array size: " << copy.size() << std::endl;
	i = 0;
	while (i < copy.size())
	{
		std::cout << "copy[" << i << "] = " << copy[i] << std::endl;
		i++;
	}
	std::cout << std::endl;

	std::cout << "--- Test 5: Modifying copy does not affect original ---"
		<< std::endl;
	copy[0] = 999;
	std::cout << "After copy[0] = 999:" << std::endl;
	std::cout << "arr[0] = " << arr[0] << std::endl;
	std::cout << "copy[0] = " << copy[0] << std::endl;
	std::cout << std::endl;

	std::cout << "--- Test 6: Assignment operator ---" << std::endl;
	Array<int>	assigned;
	assigned = arr;
	std::cout << "Assigned array size: " << assigned.size() << std::endl;
	i = 0;
	while (i < assigned.size())
	{
		std::cout << "assigned[" << i << "] = " << assigned[i] << std::endl;
		i++;
	}
	std::cout << std::endl;

	std::cout << "--- Test 7: Modifying assigned does not affect original ---"
		<< std::endl;
	assigned[2] = 555;
	std::cout << "After assigned[2] = 555:" << std::endl;
	std::cout << "arr[2] = " << arr[2] << std::endl;
	std::cout << "assigned[2] = " << assigned[2] << std::endl;
	std::cout << std::endl;

	std::cout << "--- Test 8: String array ---" << std::endl;
	Array<std::string>	str_arr(3);
	str_arr[0] = "hello";
	str_arr[1] = "world";
	str_arr[2] = "42";
	i = 0;
	while (i < str_arr.size())
	{
		std::cout << "str_arr[" << i << "] = " << str_arr[i] << std::endl;
		i++;
	}
	std::cout << std::endl;

	std::cout << "--- Test 9: Out of bounds access (exception) ---"
		<< std::endl;
	try
	{
		std::cout << arr[10] << std::endl;
	}
	catch (const std::out_of_range &e)
	{
		std::cout << "Caught exception: " << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "--- Test 10: Float array ---" << std::endl;
	Array<float>	float_arr(3);
	float_arr[0] = 3.14f;
	float_arr[1] = 2.71f;
	float_arr[2] = 1.41f;
	i = 0;
	while (i < float_arr.size())
	{
		std::cout << "float_arr[" << i << "] = " << float_arr[i] << std::endl;
		i++;
	}

	return (0);
}
