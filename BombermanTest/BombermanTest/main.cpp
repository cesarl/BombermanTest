#include <cstdlib>
#include "GameEngine.hpp"
#include <Core/Texture.hh>
#include <Core/AShader.hh>
#include <Model.hh>

unsigned int main()
{
	GameEngine engine;

	if (!engine.initialize())
		return EXIT_FAILURE;

	Texture test;
	test.load("./Assets/SunTexture.tga");

	AShader shader;
	auto res = shader.load("./Shaders/test.fragment", GL_FRAGMENT_SHADER);
	res = shader.load("./Shaders/test.vertex", GL_VERTEX_SHADER);
	res = shader.build();

	gdl::Model model;
	model.loadFromFbx("./Assets/Lenny The Sanake.FBX");

	while (engine.update())
	{
		engine.draw();
	}
	return EXIT_SUCCESS;
}