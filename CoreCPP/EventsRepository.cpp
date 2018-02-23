#include "EventsRepository.h"

using namespace Core;

EventsRepository* EventsRepository::INSTANCE = nullptr;


EventsRepository* EventsRepository::GetInstance() {
	if (INSTANCE == nullptr)
		INSTANCE = new Core::EventsRepository();
	return (Core::EventsRepository*)INSTANCE;
}