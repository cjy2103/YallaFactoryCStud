#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<time.h>

/****************************************************************
 *********************** 구조체 정의 *****************************
 ****************************************************************/
#pragma pack (push, 1)
struct Student
{
    char name[100];
    int score;
    char rank;
    char address[100];
    int age;
    char department[50];
    char sex[10];

};
#pragma pack(pop)

/****************************************************************
 *********************** 프로토 타입 함수 *************************
 ****************************************************************/
void fileRead();
void fileWrite();


/****************************************************************
 *********************** 메인 함수 *****************************
 ****************************************************************/

int main(){
    
    fileWrite();
    printf("\n");
    fileRead();    

    return 0;
}


/****************************************************************
 ********************* 사용자 정의 함수 **************************
 ****************************************************************/

/*@DESC 파일 읽기 함수
 * 
 */ 
void fileRead(){

    clock_t start = clock();

    struct Student st2;

    FILE *fp2 = fopen("dataTest.bin","rb");
    fread(&st2, sizeof(st2), 2 ,fp2);

    clock_t end = clock();
    printf("\n");
    printf(" 학생1(Read) :\n 이름 : %s\n 점수 : %d\n 학점 : %c\n 주소 : %s\n 나이: %d\n 학과: %s\n 성별 : %s\n ",st2.name,st2.score,st2.rank,st2.address,st2.age,st2.department,st2.sex);
    printf("FileRead 시간 : %f\n",(double)(end-start)/CLOCKS_PER_SEC);

    fclose(fp2);
}

/*@DESC 파일 쓰기 함수
 * 
 */ 
void fileWrite(){
    
    clock_t start = clock();

    struct Student st1 = {"honggildong",90,'A',"경기도 성남시 분당구 불정로 6",20,"컴퓨터공학과","남"};
    FILE *fp = fopen("dataTest.bin","wb");

    fwrite(&st1, sizeof(st1), 1 ,fp);
    clock_t end = clock();
    printf("\n");
    printf(" 학생1(Write) :\n 이름 : %s\n 점수 : %d\n 학점 : %c\n 주소 : %s\n 나이: %d\n 학과: %s\n 성별 : %s\n ",st1.name,st1.score,st1.rank,st1.address,st1.age,st1.department,st1.sex);
    printf("FileWrite 시간 : %f\n",(double)(end-start)/CLOCKS_PER_SEC);
    fclose(fp);
}
 