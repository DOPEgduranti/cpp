/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduranti <gduranti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 11:34:23 by gduranti          #+#    #+#             */
/*   Updated: 2024/06/28 10:47:24 by gduranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

template <typename T>
void containerPrint( T vec ) {
	typename T::iterator it = vec.begin();
	while (it != vec.end()) {
		std::cout << *it << " ";
		++it;
	}
	std::cout << std::endl;
}

template <typename T>
T containerGen( int argc, char **argv ) {
	T cont;
	for (int i = 1; i < argc; i++)
		cont.push_back(std::strtol(argv[i], NULL, 10));
	return cont;
}

bool parseArgs( int argc, char **argv ) {
	for (int i = 1; i < argc; i++) {
		std::string str = argv[i];
		if (str.empty())
			return false;
		for (size_t j = 1; j < str.size(); j++) {
			if (!std::isdigit(str[j]))
				return false;
		}
		long l = std::strtol(argv[i], NULL, 10);
		if (l < 0 || l > INT_MAX)
			return false;
	}
	return true;
}

template <typename T>
void merge(typename T::iterator left, typename T::iterator mid, typename T::iterator right)
{
    T temp(right - left);
    typename T::iterator it1 = left, it2 = mid, tempIt = temp.begin();
    while (it1 != mid && it2 != right)
    {
        if (*it1 < *it2)
            *tempIt++ = *it1++;
        else
            *tempIt++ = *it2++;
    }
    while (it1 != mid)
        *tempIt++ = *it1++;
    while (it2 != right)
        *tempIt++ = *it2++;
    std::copy(temp.begin(), temp.end(), left);
}

template <typename T>
void insertionSort(typename T::iterator begin, typename T::iterator end)
{
    for (typename T::iterator it1 = begin + 1; it1 != end; ++it1)
    {
        long temp = *it1;
        typename T::iterator it2 = it1;
        while (it2 != begin && *(it2 - 1) > temp)
        {
            *it2 = *(it2 - 1);
            --it2;
        }
        *it2 = temp;
    }
}

template <typename T>
void mergeInsertSort(typename T::iterator left,typename T::iterator right)
{
    if (right - left <= 1)
        return;
    if (right - left <= 5) {
        insertionSort<T>(left, right);
        return ;
    }
    typename T::iterator mid = left + (right - left) / 2;
    mergeInsertSort<T>(left, mid);
    mergeInsertSort<T>(mid, right);
    merge<T>(left, mid, right);
}

void PmergeMe::merge( int argc, char **argv ) {
	if (parseArgs(argc, argv) == false) {
		std::cerr << "Error" << std::endl;
		return ;
	}
	std::vector<long> vec = containerGen< std::vector<long> >(argc, argv);
	std::deque<long> deq = containerGen< std::deque<long> >(argc, argv);
	std::cout << "Before: ";
	containerPrint(deq);
	clock_t vstart = clock();
	mergeInsertSort< std::vector<long> >(vec.begin(), vec.end());
	clock_t vend = clock();
	clock_t qstart = clock();
	mergeInsertSort< std::deque<long> >(deq.begin(), deq.end());
	clock_t qend = clock();
	std::cout << "After: ";
	containerPrint(deq);
	std::cout << "vector: " << vend - vstart << "us" << std::endl;
	std::cout << "deque: " << qend - qstart << "us" << std::endl;
}