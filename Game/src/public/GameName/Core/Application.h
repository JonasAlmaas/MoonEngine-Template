#pragma once


namespace GameName {

	class Application : public Moon::Application
	{
	public:
		Application(const Moon::ApplicationSpecification& spec);
		virtual ~Application() = default;

	};

}
