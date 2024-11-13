//
// Created by jcayot on 8/29/24.
//

#ifndef ITER_HPP
# define ITER_HPP

template <typename T, typename R>
void	iter(T* array, const size_t len, R (*f)) {
	for (size_t i = 0; i < len; i++) {
		f(array[i]);
	}
}

#endif //ITER_HPP
