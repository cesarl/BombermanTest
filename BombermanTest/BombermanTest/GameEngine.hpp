#pragma once

#include <Core/Game.hh>
#include <Core/SdlContext.hh>
#include <Core/Clock.hh>
#include <Core/Input.hh>

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
		_context.updateClock(_clock);
		_context.updateInputs(_input);
		return true;
	}

	virtual void draw()
	{
		_context.flush();
	}
private:
	SdlContext _context;
	Clock _clock;
	Input _input;
};