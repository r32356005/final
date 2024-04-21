enum character_class{warrior,witch}; //some character classes

//basic information of the player
typedef struct player{              
    char name[21];                   //player's name
    int hp;                          //health of the player
    int def;                         //defence of the player
    enum character_class cc;       
}player;


//basic information of the monsters
typedef struct monster{
    char name[21];
    int hp;
};
