#pragma once
#include <vector>

typedef void(*sub)(int p);

namespace Core {

	class __declspec(dllexport) Event {
	public:
		static const char* TYPE; //just for testing purposes
		std::vector<sub> subscribers;
	public:
		Event();

		void Subscribe(void (*func)(int));
		void Trigger(int number);

		static const char* GetType();

	};
}