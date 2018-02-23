#include "Event.h"
#include <iostream>

__declspec(dllexport) const char* Core::Event::TYPE = "CORE_EVENT";

Core::Event::Event() {
}

void Core::Event::Subscribe(void(*func)(int)) {
	subscribers.push_back(func);
}

void Core::Event::Trigger(int number) {
	std::cout << "Triggered " << this << std::endl;
	for (int i = 0; i < subscribers.size(); i++)
		subscribers[i](number);
}

const char* Core::Event::GetType() {
	return TYPE;
}