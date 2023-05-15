#pragma once

#include "Tile.h"

class TileMap
{
private:
	float gridSizef;
	sf::Vector2u maxSize;
	unsigned gridSizeU;
	unsigned layers;
	std::vector< std::vector< std::vector<Tile> > > map;
public:
	TileMap();
	virtual ~TileMap();

	//functions
	void update();
	void render(sf::RenderTarget& target);
};

