#include <SnapCore.h>

class SnapzEditor : public Snapz::Application
{
public:
	SnapzEditor()
	{

	}

	~SnapzEditor()
	{

	}

};

Snapz::Application* Snapz::CreateApplication()
{
	return new SnapzEditor();
}