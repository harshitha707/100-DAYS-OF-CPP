#include <iostream>

namespace firstvalue {
	class kaid;
}

class firstvalue::kaid {
public:
	void value() {
		std::cout << "say this is kaid" << std::endl;
	}
};

namespace secondvalue {
	void value() {
		std::cout << "this is beautiful and kind harshi" << std::endl;
	}
}

int main() {

	secondvalue::value();
	firstvalue::kaid obj;
	obj.value();
	return 0;
}