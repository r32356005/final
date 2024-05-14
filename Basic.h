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

void IsPlayerDead(Player *player);                                     //判定玩家死亡
void IsMonsterDead(Monster *monster);                                  //判定怪物死亡
void Display_Player(Player *player);                                   //顯示玩家資訊







