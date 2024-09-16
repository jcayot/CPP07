//
// Created by jcayot on 8/29/24.
//

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
static void	swap(T &x, T &y) {
	T temp = x;
	x = y;
	y = temp;
}

template <typename T>
static T	min(const T &x, const T &y) {
	return ((x < y) ? x : y);
}

template <typename T>
static T	max(const T &x, const T &y) {
	return ((x > y) ? x : y);
}

#endif //WHATEVER_HPP
