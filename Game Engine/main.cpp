#include "window.h"

using namespace std;

int main()
{
	using namespace engine;
	using namespace graphics;

	Window window(960, 540, "Game Engine!");
	glClearColor(0.2f, 0.3f, 0.8f, 1.0f);

	while (!window.closed())
	{
		cout << window.getWidth() << ", " << window.getHeight() << endl;

		window.clear();
		glBegin(GL_QUADS);
		glVertex2f(-0.5f, -0.5f);
		glVertex2f(-0.5f,  0.5f);
		glVertex2f( 0.5f,  0.5f);
		glVertex2f( 0.5f, -0.5f);
		glEnd();
		window.update();
	}

	//system("PAUSE");
	return 0;
}