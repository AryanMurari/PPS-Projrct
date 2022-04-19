#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



void main() {

   int pps,calculas,chemistry,civil,japanese,aptitude;
   int sum;
   float percentage;


    printf("C Program to Calculate total marks scored in Exams :  ");

    printf("\n\n Enter Marks Scored in PPS : ");
	scanf("%d", &pps);

    printf("\n\n Enter Marks Scored in Calculus : ");
    scanf("%d", &calculas);

    printf("\n\n Enter Marks Scored in Chemistry : ");
    scanf("%d", &chemistry);

    printf("\n\n Enter Marks Scored in Civil Workshop : ");
    scanf("%d", &civil);

    printf("\n\n Enter Marks Scored in Japanese : ");
    scanf("%d", &japanese);

    printf("\n\n Enter Marks Scored in Aptitude : ");
    scanf("%d", &aptitude);


    sum = pps+calculas+chemistry+civil+japanese+aptitude;

    percentage =  (sum*100)/600;

    printf("\n\n Total marks scored  = %d /600", sum );

     printf("\n\n Percentage Scored  = %f", percentage );

}
