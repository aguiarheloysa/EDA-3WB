#include <stdio.h>
#include <stdlib.h>

struct Permission{
    unsigned char dado;
};

// void granPermission(Permission *p, int bit){

// }

// void revokePermission(Permission *p, int  bit){

// }

// int hasPermission(Permission *p, int bit){
//     return 0;
// }


int main(void){
    Permission *p;
    p.dado = 1;
    p.dado = p.dado |(p.dado <<6);
    printf("%08x\n", p.dado);
    // Concedendo permissões
    // grantPermission(&user1, 0); // leitura
    // grantPermission(&user1, 1); // escrita
    // grantPermission(&user1, 2); // execução
    // grantPermission(&user2, 0); // leitura
    // grantPermission(&user2, 3); // apagar arquivos
    // grantPermission(&user2, 6); // administrar usuários
    // printf("Permissões do Usuário 1:\n");
    // showPermissions(user1);
    // printf("\nPermissões do Usuário 2:\n");
    // showPermissions(user2);
    // // União das permissões
    // Permissions unionPerm = user1 | user2;
    // printf("\nPermissões combinadas (união):\n");
    // showPermissions(unionPerm);
    // // Interseção das permissões
    // Permissions interPerm = user1 & user2;
    // printf("\nPermissões em comum (interseção):\n");
    // showPermissions(interPerm);
    // // Verificação de pertinência
    // printf("\nUsuário 1 pode apagar arquivos? %s\n",
    // hasPermission(user1, 3) ? "Sim" : "Não");


    return 0;
}