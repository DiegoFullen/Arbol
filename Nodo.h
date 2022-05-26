#pragma once
template <typename T>

class Nodo{
private:
	T value;
	Nodo* hijo = nullptr;
public:
	Nodo(const T& newValue) {
		value = newValue;
	}
	T& getValue() {
		return value;
	}
	void addValue(const T& newValue) {
		if (hijo == nullptr) {
			hijo = new Nodo<T>(newValue);
		}
		else {
			hijo->addValue(newValue);
		}
	}
};