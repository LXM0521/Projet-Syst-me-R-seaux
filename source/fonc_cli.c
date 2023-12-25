#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <signal.h>
#include <unistd.h>
#include <sys/types.h>
#include <netdb.h>
#include <string.h>
#include "../header/fonc_cli.h"


void getinfos(int choix ,char *res){
    char *tempstart=(char *)malloc(sizeof(char)*100);
    char *tempstop=(char *)malloc(sizeof(char)*100);
    switch (choix)
    {
    case 1:
        gettempstart(tempstart,1);
        strcat(res,tempstart);
        strcat(res,";");
        /* code */
        break;
    case 2:
        gettempstart(tempstart,1);
        gettempstart(tempstop,2);
        strcat(res,tempstart);
        strcat(res,";");
        strcat(res,tempstop);
        strcat(res,";");
        break;
    case 3:
        break;
    }
    char choix2='\0';
    if(choix!=1){
        printf("Votre résultat :\n");
        printf("1: Le trajet au meilleur prix\n");
        printf("2: Le trajet de dureé optimum\n");
        do{
            printf("Le numéro de votre choix :");
            char choixs2[100]="";
            scanf("%s",choixs2);
            if(strlen(choixs2)==1){
                    choix2=choixs2[0];
            }
            //scanf("%c",&choix2);
            //printf("%d",choix);
        }while(choix2!='1'&&choix2!='2');
    }else{
        choix2='1';
    }
    sprintf(res+strlen(res),"%c",choix2);
    //strcat(res,choix);
    //q->modet=choix;
    free(tempstart);
    free(tempstop);
}

void gettempstart(char *tempstart,int m){
        int heure=-1;
        int minutes=-1;
        if(m==1){
            printf("A quelle heure prévoyez-vous de partir au plus tot:\n");
            printf("Indiquer l'heure de départ plus tot:\n");
        }else{
            printf("A quelle heure prévoyez-vous de partir au plus tard\n");
            printf("Indiquer l'heure de départ plus tard:\n");
        }
        scanf("%d", &heure);
        while(heure<0||heure>23){
            if(m==1){
                printf("Indiquer l'heure de départ plus tot:\n");
            }else{
                printf("Indiquer l'heure de départ plus tard:\n");
            }
            int c;
            while((c=getchar())!='\n'&&c!=EOF){

            }
            scanf("%d", &heure);
        }
        if(m==1){
            printf("Indiquer les minutes de départ plus tot:\n");
        }else{
            printf("Indiquer les minutes de départ plus tard:\n");
        }
        scanf("%d", &minutes);
        while(minutes<0||minutes>59){
            if(m==1){
                printf("Indiquer les minutes de départ plus tot:\n");
            }else{
                printf("Indiquer les minutes de départ plus tard:\n");
            }
            int c;
            while((c=getchar())!='\n'&&c!=EOF){
                
            }
            scanf("%d", &minutes);
        }
        sprintf(tempstart,"%d:%d",heure,minutes);
        //printf("\n123%s",tempstart);
}