//
// Created by jcayot on 9/16/24.
//

#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T>
class Array {
	private:
		T*				data = nullptr;
		unsigned int	len;

	public:
		Array();
		Array(unsigned int n);
		Array(const Array<T>& other);
		~Array();

		Array<T>& operator=(const Array<T>& other);
		T& operator[](unsigned int i);

		unsigned int size() const;
};

# include <Array.tpp>

#endif
