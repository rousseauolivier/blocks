#ifndef COLLISION_H
#define COLLISION_H

#define SET_COLLISION 0
#define SET_INACTIVE 1

int overlap();
void checkIfWithinBounds(gameObject *o, int flag);
void checkEnemyCollisions(gameObject *enemy, gameObject player);

extern int reset;

#endif // COLLISION_H


