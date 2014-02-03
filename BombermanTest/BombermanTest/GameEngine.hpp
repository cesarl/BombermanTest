#pragma once

#include <Core/Game.hh>

class GameEngine : public Game
{
public:
	GameEngine()
	{}

	virtual ~GameEngine()
	{}

	virtual bool initialize()
	{
		return true;
	}

	virtual bool update()
	{
		return true;
	}

	virtual void draw()
	{
	}
};