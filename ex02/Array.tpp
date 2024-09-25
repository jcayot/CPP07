#ifndef ARRAY_TPP
# define ARRAY_TPP

#include <Array.hpp>

template<typename T>
Array<T>::Array(): Array(0) {}

template<typename T>
Array<T>::Array(unsigned int n) {
	data = new T[n];
	len = n;
}

template<typename T>
Array<T>::Array(const Array<T>& other) {
	*this = other;
}

template<typename T>
Array<T>::~Array() {
	delete[] data;
}

template<typename T>
Array<T>& Array<T>::operator=(const Array<T>& other) {
	if (this != &other) {
		delete[] this->data;
		this->data = new T[other.len];
		this->len = other.len;
		for (unsigned int i = 0; i < other.len; i++) {
			this->data[i] = other.data[i];
		}
	}
	return (*this);
}

template<typename T>
T& Array<T>::operator[](unsigned int i) {
	if (i >= len)
		throw std::out_of_range("Array index out of range");
	return (data[i]);
}

template<typename T>
unsigned int Array<T>::size() const {
	return (len);
}

#endif
