#pragma once
#include "../../CoreCPP/EventsRepository.h"
#include "Event.h"

namespace Events {
	public ref class EventsRepository {
	public:
		EventsRepository();

		inline void Add(Event^ e) { GetInstance()->Add(e->instance);  }
		inline Event^ GetEvent(int i) { return gcnew Event(GetInstance()->GetEvent(i)); }

		inline Core::EventsRepository* GetInstance() { return Core::EventsRepository::GetInstance(); }

	};
}