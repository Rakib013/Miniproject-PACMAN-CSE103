#include<stdio.h>
#include<stdlib.h>

void nb_shape();
void jhn_shape();
void rakib_shape();

int main(){
    int n=3, m=2, chose;
    char ps;

    system("clear");
    printf("\n\t\t\t\t\u263a Welcome to the gratest game platform ever \u263a\n");
    printf("\t\t\t\t\t\t");
    for(int i=0; i<10; i++){
        printf("-");
    }
    printf("\n");
    printf("\t\t\t\t\t\t| P\u263acm\u263an |\n");
    printf("\t\t\t\t\t\t");
    for(int i=0; i<10; i++){
        printf("-");
    }
    printf("\n\n");
    printf("\t\t\t\t");
    for(int i=0; i<45; i++){
        printf("-");
    }
    printf("\n\t\t\t\tDeveloped by Rakib, Nur Jahan and Naba Hassan\n");
    printf("\t\t\t\t");
    for(int i=0; i<45; i++){
        printf("-");
    }
    printf("\n\n\t\t\t\tHere we have three types of game for you.\n");
    printf("\t\t\t\t\u263a. Easy-(NB-shape)\n");
    printf("\t\t\t\t\u263a. Medium-(JHN-shane)\n");
    printf("\t\t\t\t\u263a. Hard-(RAKIB-shape)\n");
    printf("\n\t\t\t\t Please Enter your choice: ");
    scanf("%d", &chose);
    if(chose == 1){
        system("clear");
        printf("\n\t\t\t\t You chose the Easiest type game which is NB-shape.\n");
        printf("\n\n\t\t\t\t\t Here is your game instraction:\n");
        printf("\t\t\t  ");
        for(int i=0; i<71; i++){
            printf("\u263A");
        }
        printf("\n");

        printf("\t\t\t  \u263a\t\u263a. Press S and hit the Enter button if you want to go Down\t\u263a\n");
        printf("\t\t\t  \u263a\t\u263a. Press W and hit the Enter button if you want to go UP\t\u263a\n");
        printf("\t\t\t  \u263a\t\u263a. Press A and hit the Enter button if you want to go Left\t\u263a\n");
        printf("\t\t\t  \u263a\t\u263a. Press D and hit the Enter button if you want to go Right\t\u263a\n");

        printf("\t\t\t  ");
        for(int i=0; i<71; i++){
            printf("\u263A");
        }
        printf("\n");
        printf("\n\t\t\t  Press S and hit Enter to start your game:) ");
        scanf(" %c", &ps);
        // Here game is going to start
        nb_shape();
    }else if(chose == 2){
        system("clear");
        printf("\n\t\t\t\t You chose the Medium type game which is JHN-shape.\n");
        printf("\n\n\t\t\t\t\t Here is your game instraction:\n");
        printf("\t\t\t  ");
        for(int i=0; i<71; i++){
            printf("\u263A");
        }
        printf("\n");

        printf("\t\t\t  \u263a\t\u263a. Press S and hit the Enter button if you want to go Down\t\u263a\n");
        printf("\t\t\t  \u263a\t\u263a. Press W and hit the Enter button if you want to go UP\t\u263a\n");
        printf("\t\t\t  \u263a\t\u263a. Press A and hit the Enter button if you want to go Left\t\u263a\n");
        printf("\t\t\t  \u263a\t\u263a. Press D and hit the Enter button if you want to go Right\t\u263a\n");

        printf("\t\t\t  ");
        for(int i=0; i<71; i++){
            printf("\u263A");
        }
        printf("\n");
        printf("\n\t\t\t  Press S and hit Enter to start your game:) ");
        scanf(" %c", &ps);
        // Here game is going to start
        jhn_shape();
    }else if(chose == 3){
        system("clear");
        printf("\n\t\t\t\t You chose the Hard type game which is RAKIB-shape.\n");
        printf("\n\n\t\t\t\t\t Here is your game instraction:\n");
        printf("\t\t\t  ");
        for(int i=0; i<71; i++){
            printf("\u263A");
        }
        printf("\n");

        printf("\t\t\t  \u263a\t\u263a. Press S and hit the Enter button if you want to go Down\t\u263a\n");
        printf("\t\t\t  \u263a\t\u263a. Press W and hit the Enter button if you want to go UP\t\u263a\n");
        printf("\t\t\t  \u263a\t\u263a. Press A and hit the Enter button if you want to go Left\t\u263a\n");
        printf("\t\t\t  \u263a\t\u263a. Press D and hit the Enter button if you want to go Right\t\u263a\n");

        printf("\t\t\t  ");
        for(int i=0; i<71; i++){
            printf("\u263A");
        }
        printf("\n");
        printf("\n\t\t\t  Press S and hit Enter to start your game:) ");
        scanf(" %c", &ps);
        // Here game is going to start
        rakib_shape();
    }

    return 0;
}

void nb_shape(){
    char arr[30][50];
    int n=3, m=2;
    int score = 0;
    char move;

    system("clear");
    for(int i=0; i<30; i++){
        for(int j=0; j<50; j++){
            if(i==0 || i==29 || j==0 || j==49){
                arr[i][j] = '#';
            }else if(j == 5 && i>2 && i<25){
                arr[i][j] = '#';
            }else if(j == 6 && i==4 || j == 7 && i ==5 || j == 8 && i ==6 || j == 9 && i ==7 || j == 10 && i == 8 || j == 11 && i == 9 || j == 12 && i == 10 || j == 13 && i == 11 || j == 14 && i == 12 || j == 15 && i == 13 || j == 16 && i == 14 || j == 17 && i == 15 || j == 18 && i == 16 || j == 19 && i == 17 || j == 20 && i == 18 || j == 21 && i == 19 || j == 22 && i == 20 || j == 23 && i == 21 || j == 24 && i == 22 || j == 25 && i == 23 || j == 26 && i == 24){
                arr[i][j] = '#';
            }else if(j == 26 && i>2 && i<25){
                arr[i][j] = '#';
            }else if(j == 30 && i>2 && i<25){
                arr[i][j] = '#';
            }else if(i == 3 && j>30 && j<43){
                arr[i][j] = '#';
            }else if(j == 42 && i>2 && i<12 || j == 41 && i == 12 || j == 41 && i == 14){
                arr[i][j] = '#';
            }else if(i == 13 && j>30 && j<41){
                arr[i][j] = '#';
            }else if(j == 42 && i>14 && i<25 || i == 24 && j>30 && j<42){
                arr[i][j] = '#';
            }else{
                arr[i][j] = '.';
            }
        }
    }

    arr[n][m] = 'X';
    printf("Score -> %d", score);
    printf("\n");
    for(int i=0; i<30; i++){
        for(int j=0; j<50; j++){
            if(arr[i][j] == 'X'){
                printf("\u263A ");
            }else{
                printf("%c ", arr[i][j]);
            }
        }
        printf("\n");
    }

    while(1){
        printf("Enter your move: ");
        scanf(" %c", &move);
        if(move == 's'){
            n++;
            if(n>0){
                arr[n-1][m] = ' ';
            }
        }

        if(move == 'w'){
            n--;
            if(n>0){
                arr[n+1][m] = ' ';
            }
        }

        if(move == 'a'){
            m--;
            if(n>0){
                arr[n][m+1] = ' ';
            }
        }

        if(move == 'd'){
            m++;
            if(n>0){
                arr[n][m-1] = ' ';
            }
        }

        if(arr[n][m] == '#'){
            system("clear");
            printf("\nGame is over!");
            printf("\t\t\tScore -> %d\n", score);
            break;
        }

        if(arr[n][m] == 'O'){
            system("clear");
            printf("\nGame Finished!");
            printf("\t\t\tScore -> %d\n", score);
            break;
        }

        if(arr[n][m] == '.'){
            score++;
            arr[n][m] = 'X';
        }

        // Print the map
        system("clear");
        printf("Score -> %d", score);
        printf("\n");
        arr[n][m] = 'X';
        for(int i=0; i<30; i++){
            for(int j=0; j<50; j++){
                if(arr[i][j] == 'X'){
                    printf("\u263A ");
                }else{
                    printf("%c ", arr[i][j]);
                }
            }
            printf("\n");
        }
    }
}

void jhn_shape(){
    int n=3, m=2;
    char arr[30][60];
    char move;
    int score = 0;

    system("clear");
    for(int i = 0; i<30; i++){
        for(int j = 0; j<60; j++){
            if(i==0 || j==0 || i==29 || j==59){
                arr[i][j] = '#';
            }else if(i == 4 && j>5 && j<22){
                arr[i][j] = '#';
            }else if(j == 21 && i>4 && i<22){
                arr[i][j] = '#';
            }else if(i == 21 && j>7 && j<22){
                arr[i][j] = '#';
            }else if(j == 8 && i>13 && i<21){
                arr[i][j] = '#';
            }else if(i == 13 && j>7 && j<15){
                arr[i][j] = '#';
            }else if(j == 25 && i>3 && i<22 || j == 35 && i>3 && i<22 || i == 12 && j>25 && j<35){
                arr[i][j] = '#';
            }else if(j == 40 && i>3 && i<22  || j == 52 && i>3 && i<22){
                arr[i][j] = '#';
            }else if(j==41 && i==5 || j==42 && i==6 || j==43 && i==7 || j==44 && i==8 || j==45 && i==9 || j==46 && i==10 || j==47 && i==11 || j==48 && i==12 || j==49 && i==13 || j==50 && i==14 || j==51 && i==15){
                arr[i][j] = '#';
            }else{
                arr[i][j] = '.';
            }
        }
    }

    arr[n][m] = 'X';
    printf("Score -> %d", score);
    printf("\n");
    for(int i=0; i<30; i++){
        for(int j=0; j<60; j++){
            if(arr[i][j] == 'X'){
                printf("\u263A ");
            }else{
                printf("%c ", arr[i][j]);
            }
        }
        printf("\n");
    }

    while(1){
        printf("Enter your move: ");
        scanf(" %c", &move);
        if(move == 's'){
            n++;
            if(n>0){
                arr[n-1][m] = ' ';
            }
        }

        if(move == 'w'){
            n--;
            if(n>0){
                arr[n+1][m] = ' ';
            }
        }

        if(move == 'a'){
            m--;
            if(n>0){
                arr[n][m+1] = ' ';
            }
        }

        if(move == 'd'){
            m++;
            if(n>0){
                arr[n][m-1] = ' ';
            }
        }

        if(arr[n][m] == '#'){
            system("clear");
            printf("\nGame is over!");
            printf("\t\t\tScore -> %d\n", score);
            break;
        }

        if(arr[n][m] == 'O'){
            system("clear");
            printf("\nGame Finished!");
            printf("\t\t\tScore -> %d\n", score);
            break;
        }

        if(arr[n][m] == '.'){
            score++;
            arr[n][m] = 'X';
        }

        // Print the map
        system("clear");
        printf("Score -> %d", score);
        printf("\n");
        arr[n][m] = 'X';
        for(int i=0; i<30; i++){
            for(int j=0; j<60; j++){
                if(arr[i][j] == 'X'){
                    printf("\u263A ");
                }else{
                    printf("%c ", arr[i][j]);
                }
            }
            printf("\n");
        }
    }
}

void rakib_shape(){
    int n=3, m=2;
    char arr[30][60];
    char move;
    int score = 0;

    system("clear");
    for(int i=0; i<30; i++){
        for(int j=0; j<60; j++){
            if(i == 0 || j==0 || i==29 || j== 59){
                arr[i][j] = '#';
            }else if(j == 2 && i>6 && i<21 || i == 7 && j>2 && j<10 || j == 9 && i>6 && i<14 || i == 13 && j>2 && j<9){
                arr[i][j] = '#';
            }else if(i == 14 && j == 3 || i==15 && j==4 || i==16 && j==5 || i==17 && j==6 || i==18 && j==7 || i==19 && j==8 || i==20 && j==9){
                arr[i][j] = '#';
            }else if(i==7 && j==17 || i==8 && j==16 || i==9 && j==15 || i==10 && j==14 || i==11 && j==13 || i==12 && j==12 || i==13 && j==12 || j==12 && i>13 && i<21 || i==12 && j>11 && j<22){
                arr[i][j] = '#';
            }else if(i==8 && j==18 || i==9 && j==19 || i==10 && j==20 || i==11 && j==21 || i==12 && j==22 || i==13 && j==22 || j==22 && i>13 && i<21){
                arr[i][j] = '#';
            }else if(j==25 && i>6 && i<21 || j==26 && i==13 || j==27 && i==12 || j==28 && i==11 || j==29 && i==10 || j==30 && i==9 || j==31 && i==8 || j==32 && i==7){
                arr[i][j] = '#';
            }else if(j==27 && i==14 || j==28 && i==15 || j==29 && i==16 || j==30 && i==17 || j==31 && i==18 || j==32 && i==19){
                arr[i][j] = '#';
            }else if(j == 38 && i>6 && i<21){
                arr[i][j] = '#';
            }else if(j == 45 && i>6 && i<21 || i==7 && j>45 && j<53 || j==53 && i>7 && i<14 || i==13 && j>45 && j<53 || j==53 && i>11 && i<20 || i==20 && j>45 && j<53){
                arr[i][j] = '#';
            }else{
                arr[i][j] = '.';
            }
        }
    }

    arr[n][m] = 'X';
    printf("Score -> %d", score);
    printf("\n");
    for(int i=0; i<30; i++){
        for(int j=0; j<60; j++){
            if(arr[i][j] == 'X'){
                printf("\u263A ");
            }else{
                printf("%c ", arr[i][j]);
            }
        }
        printf("\n");
    }

    while(1){
        printf("Enter your move: ");
        scanf(" %c", &move);
        if(move == 's'){
            n++;
            if(n>0){
                arr[n-1][m] = ' ';
            }
        }

        if(move == 'w'){
            n--;
            if(n>0){
                arr[n+1][m] = ' ';
            }
        }

        if(move == 'a'){
            m--;
            if(n>0){
                arr[n][m+1] = ' ';
            }
        }

        if(move == 'd'){
            m++;
            if(n>0){
                arr[n][m-1] = ' ';
            }
        }

        if(arr[n][m] == '#'){
            system("clear");
            printf("Game is over!");
            printf("\t\t\tScore -> %d\n", score);
            break;
        }

        if(arr[n][m] == 'O'){
            system("clear");
            printf("Game Finished!");
            printf("\t\t\tScore -> %d\n", score);
            break;
        }

        if(arr[n][m] == '.'){
            score++;
            arr[n][m] = 'X';
        }

        // Print the map
        system("clear");
        printf("Score -> %d", score);
        printf("\n");
        arr[n][m] = 'X';
        for(int i=0; i<30; i++){
            for(int j=0; j<60; j++){
                if(arr[i][j] == 'X'){
                    printf("\u263A ");
                }else{
                    printf("%c ", arr[i][j]);
                }
            }
            printf("\n");
        }
    }
}