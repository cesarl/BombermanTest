#include <cstdlib>
#include "GameEngine.hpp"

unsigned int main()
{
	GameEngine engine;

	if (!engine.initialize())
		return EXIT_FAILURE;
	while (engine.update())
	{
		engine.draw();
	}
	return EXIT_SUCCESS;
}