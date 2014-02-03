#include <cstdlib>
#include "GameEngine.hpp"
#include <Core/Texture.hh>

unsigned int main()
{
	GameEngine engine;

	if (!engine.initialize())
		return EXIT_FAILURE;

	Texture test;
	test.load("./Assets/SunTexture.tga");

	while (engine.update())
	{
		engine.draw();
	}
	return EXIT_SUCCESS;
}