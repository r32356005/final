
void Attack(Player *player,Monster *monster){
  monster.hp-=player.atk;
};
void Defense(Player *player){
  player.def+=??;
};
void ExtraAP(Player *player){
  player.ap+=1;
};
//Warrior's skill
void Bang(Player *player,Monster *monster){
  monster.hp-=(player.atk*2);
};
void Recovery(Player *player){
  player.hp+=??;
};
void Berserker(Player *player){
  player.atk+=??;
  player.def+=??;
};
//Wizard's skill
void ArmorPenetration(Monster *monster){
  monster.def-=??;
};
void Weakness(Monster *monster){
  monster.atk-=??;
};
void StoppingTime(Monster *monster){
  monster.ap+=1;
};
