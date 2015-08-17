/* 14.18.6.c */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN 41
#define MAX 20

typedef struct {
    char first[LEN];
    char last[LEN];
} id;
typedef struct {
    int play;
    int hit;
    int brun;
    int RBI;
} data;
struct player {
    int number;
    id name;
    data score;
    float averg;
};

int main(void)
{
    FILE *fp;
    int tpnum, tpplay, tphit, tpbrun, tpRBI;
    int total_play = 0, total_hit = 0, total_brun = 0, total_RBI = 0;
    float total_averg = 0.0;
    char tpfirst[LEN];
    char tplast[LEN];
    struct player teamx[MAX];
    
    int line = 0;       // count non-repetitive player
    int mark = -1;      // flag to detect repetitive player
    if ((fp = fopen("baseball.txt", "rb")) == NULL)
    {
        fprintf(stderr, "Can't open file baseball.txt\n");
        exit(1);
    }
    
    while (fscanf(fp, "%d %s %s %d %d %d %d",
               &tpnum, tpfirst, tplast, &tpplay, &tphit, &tpbrun, &tpRBI) == 7)
    {
        if (line < 1)
        {
            teamx[0].number = tpnum;
            strcpy(teamx[0].name.first, tpfirst);
            strcpy(teamx[0].name.last, tplast);
            teamx[0].score.play = tpplay;
            teamx[0].score.hit = tphit;
            teamx[0].score.brun = tpbrun;
            teamx[0].score.RBI = tpRBI;
            line++;
        }
        else if (line >= 1)
        {
            for (int i = 0; i < line; i++)
                if (tpnum == teamx[i].number)
                    mark = i;
            if (mark == -1)
            {
                teamx[line].number = tpnum;
                strcpy(teamx[line].name.first, tpfirst);
                strcpy(teamx[line].name.last, tplast);
                teamx[line].score.play = tpplay;
                teamx[line].score.hit = tphit;
                teamx[line].score.brun = tpbrun;
                teamx[line].score.RBI = tpRBI;
                line++;
            }
            else if (mark != -1)
            {
                teamx[mark].score.play += tpplay;
                teamx[mark].score.hit += tphit;
                teamx[mark].score.brun += tpbrun;
                teamx[mark].score.RBI += tpRBI;
            }
        }
        printf("%d player%c: %d %s %s %d %d %d %d\n", line,((line>1)?'s':'\b'),
               tpnum, tpfirst, tplast, tpplay, tphit, tpbrun, tpRBI);
    }
    puts("The players's data: ");
    for (int i = 0; i < line; i++)
    {
        total_play += teamx[i].score.play;
        total_hit += teamx[i].score.hit;
        total_brun += teamx[i].score.brun;
        total_RBI += teamx[i].score.RBI;
        teamx[i].averg = (float)teamx[i].score.hit / teamx[i].score.play;
        
        printf("%d %s %s %d %d %d %d %.4f\n", teamx[i].number,
                                              teamx[i].name.first,
                                              teamx[i].name.last,
                                              teamx[i].score.play,
                                              teamx[i].score.hit,
                                              teamx[i].score.brun,
                                              teamx[i].score.RBI,
                                              teamx[i].averg);
    }
    total_averg = (float)total_hit / total_play;
    puts("Total statistics:");
    printf("%d %d %d %d %.4f\n", total_play, total_hit,
                                 total_brun, total_RBI,
                                 total_averg);
        
    return 0;
}
