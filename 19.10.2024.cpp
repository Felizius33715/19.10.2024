#include <iostream>
#include <memory>

class smartArray {
public:
	smartArray(int size) {
		Arr = new int[size];
	}
	~smartArray() {
		delete[] Arr;
	}
	void setElement(int index, int value, int size) {
		if (index >= 0 && index < size) {
			Arr[index] = value;
		}
		else {
			std::cout << "index is out of range array: ";
		}
	}
	void printElement(int index) {
		std::cout << "Array[" << index << "] = " << Arr[index] << std::endl;
	}
private:
	int* Arr;
};

void create_arr(int size) {
	smartArray sa(size);
	int value;
	for (int i = 0; i < size; i++) {
		std::cout << "Please insert value of array" << std::endl;
		std::cin >> value;
		sa.setElement(i, value, size);
	}
	for (int j = 0; j < size; j++){ sa.printElement(j); }
}

int main()
{
	int s;
	std::cout << "Please insert size of array:" << std::endl;
	std::cin >> s;
	create_arr(s);
	return 0;
}