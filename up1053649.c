#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int prime_numbers[]={1999, 3989, 7993, 15907, 29989,
    59921, 119923, 239893, 479879, 959873, 1919839, 3839839};

 int non_prime_numbers[]={ 2000, 4000, 8000, 16000,
    32000, 64000, 128000, 256000, 512000, 1024000, 2056000, 4112000,
    8224000, 16456000 };



    }
    if(counter3>maxpay){
        maxpay=counter3;
        strcpy(temp_card,hashtable[i].card);
    }

}

printf("%d euros  from %s\n",maxpay,temp_card);



//2o erwtima  ������� ��� ������� ���������� ���  ������ ��� ���� ����� ��� ������� �� ����������  */
int maxfind=0;
int counter1=0;
for(i=0;i<hashsize;i++){
    if(hashtable[i].payment!=0){
            counter1=search(hashtable,hashtable[i]);

    }
    if(counter1>maxfind){
        maxfind=counter1;
        strcpy(temp_card,hashtable[i].card);
    }

}

printf("the most visits are %d from %s\n",maxfind,temp_card);


/*3o erwtima �������������� 6 counters 1 ��� ���� ����,����������� ��� ������ ����������� ��� ��� �� ��������
��� ���� ��������� ��� ���������� ��� ���������� counter ���� ���� ���� 1.
��� ����� ������� ��� ���� �� �� ���������� ������ ����������*/
int day1=0,day2=0,day3=0,day4=0,day5=0,day6=0,max_day;
char temp_day[4];
for(i=0;i<hashsize;i++){
    if(hashtable[i].payment!=0){
        if(strcmp(hashtable[i].day,"MON")==0){day1+=1;}
        else if(strcmp(hashtable[i].day,"TUE")==0){day2+=1;}
        else if(strcmp(hashtable[i].day,"WED")==0){day3+=1;}
        else if(strcmp(hashtable[i].day,"THU")==0){day4+=1;}
        else if(strcmp(hashtable[i].day,"FRI")==0){day5+=1;}
        else if(strcmp(hashtable[i].day,"SAT")){day6+=1;}
}
}
max_day=day1;
strcpy(temp_day,"MON");
if(day2>max_day){
    max_day=day2;
    strcpy(temp_day,"TUE");
    }

if(day3>max_day){
        max_day=day3;
        strcpy(temp_day,"WED");
}
if(day4>max_day){
        max_day=day4;
        strcpy(temp_day,"THU");
}
if(day5>max_day){
        max_day=day5;
        strcpy(temp_day,"FRI");
}
if(day6>max_day){
        max_day=day6;
        strcpy(temp_day,"SAT");
}
printf("%d  %s  ",max_day,temp_day);
    return 0;
}

