#include <iostream>


namespace firstvalue {
	void value() {
		std::cout << "value is kaid" << std::endl;
	}
	class harshi {
	public:
		void value() {
			std::cout << "value is harshi" << std::endl;
		}
	};
}

int main() {
	firstvalue::value();
	firstvalue::harshi obj;
	obj.value();
	return 0;
}

