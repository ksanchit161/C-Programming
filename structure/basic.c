#include<stdio.h>
#include<string.h>
int main(){
typedef struct pokemon{
    char name[20];
    int hp;
    int speed;
    char tier;
}pok;

pok pikachu;
strcpy(pikachu.name,"pickachu");
pikachu.hp=70;
pikachu.speed=100;
pikachu.tier='A';

printf("\n");

pok charizard;
strcpy(charizard.name,"charizard");
charizard.hp=100;
charizard.speed=60;
charizard.tier='S';

printf(" name : %s\n",pikachu.name);
printf(" hp of pikachu : %d\n",pikachu.hp);
printf(" speed of pikachu : %d\n",pikachu.speed);
printf(" tier of pikachu : %c\n",pikachu.tier);

printf("\n");

printf(" name : %s\n",charizard.name);
printf(" hp of charizard : %d\n",charizard.hp);
printf(" speed of charizard : %d\n",charizard.speed);
printf(" tier  of charizard : %c\n",charizard.tier);


    return 0;
}