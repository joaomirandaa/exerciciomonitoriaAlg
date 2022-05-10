#include <stdio.h>

int main(){
        
        int x = 0;
        char y;
        
        printf ("Telefonou para a vitima?");
        scanf ("%c", &y);
        getchar();
        
        if (y=='s'){
        x++;
        }
        
        printf ("Esteve no local do crime?");
        scanf ("%c", &y);
        getchar();
        if (y=='s'){
        x++;
        }
        printf ("Mora perto da vitima?");
        scanf ("%c", &y);
        getchar();
        if (y=='y'){
            x++;
        }
        printf ("Devia para a vitima?");
        scanf ("%c", &y);
        getchar();
        if (y=='s'){
            x++;
        }
        printf ("Ja trabalhou para a vitima?");
        scanf ("%c", &y);
        getchar();
        if (y=='s'){
            x++;
        }
        if (x==2){
            printf ("a pessoa eh suspeita!");
        }
        else if(x==3 || x==4){
            printf ("a pessoa eh cumplice!");
        }
        else if (x==5){
            printf ("a pessoa eh assasina");
        }
        
        else{
            printf ("a pessoa eh inocente!");
        
        }
        
        
        return 0;
    }