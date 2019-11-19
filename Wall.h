#pragma once
#include "StaticObject.h"
class Wall :public StaticObject
{
public:

	Wall(sf::Vector2f location);
	void draw(sf::RenderWindow &m_window);
	void setToInitPosition();

	//double dispach
	virtual todo handleCollision(Objects &Obj)override;
	virtual todo handleCollision(Door &Obj)override { return NOTHING ; };
	virtual todo handleCollision(Robot &Obj)override { return MOVE_BACK; };
	virtual todo handleCollision(Guard &Obj)override { return MOVE_BACK; };
	virtual todo handleCollision(Bomb &Obj) override { return NOTHING; };
	virtual todo handleCollision(Wall &Obj)override { return NOTHING; };
	//virtual todo handleCollision(Gift &Obj)override { return NOTHING; };
	virtual todo handleCollision(Rock &Obj)override { return NOTHING; };
	
private:
	sf::Vector2f m_location;
	sf::Texture  m_texture;
};
