#pragma once
#include "../../CoreCPP/Event.h"
using namespace System;

namespace Events {
	
	public delegate void Funct(int n);

	public ref class Event {
	public:
		Core::Event* instance;
	public:
		Event();
		Event(Core::Event* obj);

		void Subscribe(Funct^ f);
		void Trigger(int num);

	};
}