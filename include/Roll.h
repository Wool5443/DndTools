#ifndef ROLL_H_
#define ROLL_H_

typedef unsigned DiceType;

int RollDice(DiceType type);
int RollStatDice(DiceType type, bool rethrowOne);

#endif // ROLL_H_
