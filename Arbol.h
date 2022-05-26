#pragma once

class Arbol{
private:
	int value;
	Arbol* tree = nullptr;
public:
	Arbol(const int newValue) {
		value = newValue;
	}
	void setValue(int a) {
		value = a;
	}
	Arbol getValue() {
		return value;
	}
};