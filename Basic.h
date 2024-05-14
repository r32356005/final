enum character_class{warrior,witch}; //角色職業

//basic information of player
typedef struct player{              
    char name[21];                   //player's name
    int hp;                          //health of the player
    int def;                         //defence of the player
    int ap                           //action point of the player 
    enum character_class cc;       
}Player;


//basic information of the monsters
typedef struct monster{
    char name[21];
    int hp;
    int def;
}Monster;

int Calculate_damage(Player *player,Monster *monster,...);             //計算傷害
void player_damage(Player *player,int damage);                         //玩家受到傷害
void monster_damage(Monster *monster,int damage);                      //怪物受到傷害
void IsPlayerDead(Player *player);                                     //判定玩家死亡
void IsMonsterDead(Monster *monster);                                  //判定怪物死亡
void Display_Player(Player *player);                                   //顯示玩家資訊







