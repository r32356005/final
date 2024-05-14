#ifndef Damage_h

#define Damage_h
int Calculate_damage(Player *player,Monster *monster,...);             //計算傷害
void player_damage(Player *player,int damage);                         //玩家受到傷害
void monster_damage(Monster *monster,int damage);                      //怪物受到傷害

#endif
