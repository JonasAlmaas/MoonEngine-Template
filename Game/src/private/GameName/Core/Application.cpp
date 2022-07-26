#include "pch.h"
#include "GameName/Core/Application.h"

#include "GameName/GameLayer.h"


namespace GameName {

	Application::Application(const Moon::ApplicationSpecification& spec)
		: Moon::Application(spec)
	{
		PushLayer(new GameLayer());
	}

}
