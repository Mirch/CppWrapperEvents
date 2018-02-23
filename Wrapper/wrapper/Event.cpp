#include "Event.h"
using namespace System;
using namespace System::Runtime::InteropServices;

Events::Event::Event() {
	instance = new Core::Event();
	Console::WriteLine("Created object of type " + gcnew String(instance->GetType()));
}

Events::Event::Event(Core::Event* obj) {
	instance = obj;
	Console::WriteLine("Created object of type " + gcnew String(instance->GetType()));
}

void Events::Event::Subscribe(Funct^ f) {
	IntPtr ip = Marshal::GetFunctionPointerForDelegate(f);
	instance->Subscribe(static_cast<void(*)(int)>(ip.ToPointer()));
}

void Events::Event::Trigger(int num) {
	instance->Trigger(num);
}