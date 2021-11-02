#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <cstddef>
#include <exception>

template <typename T> class Array {
private:
  T *array;
  unsigned int length;

  void copy(Array<T> const &other);

public:
  Array();
  Array(unsigned int n);
  virtual ~Array();
  Array(Array<T> const &other);

  Array<T> &operator=(Array<T> const &other);
  T &operator[](unsigned int idx);
  const T &operator[](unsigned int idx) const;
  unsigned int size(void) const;
};

template <typename T> Array<T>::Array() {
  length = 0;
  array = new T[0];
}

template <typename T> Array<T>::Array(unsigned int n) {
  length = n;
  array = new T[n];
  if (array == NULL) {
    throw std::exception();
  }
}

template <typename T> Array<T>::~Array() {
  delete[] array;
  array = NULL;
}

template <typename T> Array<T>::Array(Array<T> const &other) { copy(other); }

template <typename T> Array<T> &Array<T>::operator=(Array<T> const &other) {
  delete[] array;
  copy(other);
  return *this;
}

template <typename T> T &Array<T>::operator[](unsigned int idx) {
  if (idx >= length) {
    throw std::exception();
  }
  return array[idx];
}

template <typename T> const T &Array<T>::operator[](unsigned int idx) const {
  if (idx >= length) {
    throw std::exception();
  }
  return array[idx];
}

template <typename T> unsigned int Array<T>::size(void) const { return length; }

template <typename T> void Array<T>::copy(Array<T> const &other) {
  length = other.length;
  array = new T[length];
  for (unsigned int i = 0; i < other.length; ++i) {
    array[i] = (other.array)[i];
  }
}

#endif
