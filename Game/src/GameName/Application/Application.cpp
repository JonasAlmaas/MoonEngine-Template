#include "pch.h"
#include "GameName/Application/Application.h"

#include "GameName/Layer/GameLayer.h"


namespace GameName {

	Application::Application(const Moon::ApplicationSpecification& spec)
		: Moon::Application(spec)
	{
		PushLayer(new GameLayer());
	}

}
