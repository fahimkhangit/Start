//This Program is  for finding out the aggregate marks and percentage marks obtained by a student//
#include<stdio.h>
int main(){
int eng, bang, math, ict, hT, aggregateMarks;
float percentageMarks;
// Taking input
printf("Enter your English exam marks:  " );
scanf("%d",&eng);
printf("\n Enter your Bangla exam marks:  " );
scanf("%d",&bang);
printf("\n Enter your Math exam marks:  " );
scanf("%d",&math);
printf("\n Enter your ICT exam marks:  " );
scanf("%d",&ict);
printf("\n Enter your history exam marks:  " );
scanf("%d",&hT);
//Calculation part
aggregateMarks = eng+bang+math+ict;
//Giving output
printf("your aggregate mark is: %d", aggregateMarks);
//Calculation part
percentageMarks = (aggregateMarks/500)*100;
//Second output
printf("\n your percentage mark is: %f\n", percentageMarks);
return 0;

}
