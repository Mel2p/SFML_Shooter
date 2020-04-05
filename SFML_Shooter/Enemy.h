#pragma once
#include "Entity.h"

class Enemy : public Entity
{
public:
	Enemy();
	~Enemy();

private:

	void usePattern();
	void addEnemyToCounter();

	int id;
	int size;
	int hp;
};

