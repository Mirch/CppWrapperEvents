#pragma once
#include <vector>
#include "Event.h"

namespace Core {
	
	class __declspec(dllexport) EventsRepository {
	private:
		std::vector<Event*> events;

		static EventsRepository* INSTANCE;
	public:

		static EventsRepository* GetInstance();

		inline void Add(Event* e) { events.push_back(e); }
		inline Event* GetEvent(int i) const { return events[i]; }
	};

}