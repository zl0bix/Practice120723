#include<iostream>
#include<string>

class MechanismPart {
public:
	MechanismPart() = default;
	MechanismPart(std::string mName) {
		this->mName = mName;
	}
	std::string mName;
};

class OpenDoor :public virtual MechanismPart {
public:
	OpenDoor(std::string mName) :MechanismPart(mName) {
		std::cout << "Open door" << '\n';
	}
};

class SpinWheel :public virtual MechanismPart {
public:
	SpinWheel(std::string mName) :MechanismPart(mName) {
		std::cout << "Spin wheel" << '\n';
	}
};

class Car :public OpenDoor, public SpinWheel {
public:
	Car() = default;
	Car(std::string ODmName, std::string SWmName):OpenDoor(ODmName),SpinWheel(SWmName) {
		std::cout << "Car is progress\n";
	}
};
int main() {

	Car bmw("aaaa","sasas");

	return{};
}

