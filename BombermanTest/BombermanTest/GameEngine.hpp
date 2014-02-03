#pragma once

#include <Core/Game.hh>
#include <Core/SdlContext.hh>

class GameEngine : public Game
{
public:
	GameEngine()
	{}

	virtual ~GameEngine()
	{}

	virtual bool initialize()
	{
		if (!_context.start(400, 400, "My beautifull window"))
			return false;
		return true;
	}

	virtual bool update()
	{
		return true;
	}

	virtual void draw()
	{
	}
private:
	SdlContext _context;
};