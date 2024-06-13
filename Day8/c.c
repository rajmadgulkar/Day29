#include <stdio.h>
void main(){
int Attendance;
printf("Enter your Attendance\n");
scanf("%d",&Attendance);
printf("Attendence of the student is %d\n", Attendance);

if(Attendance>=0 && Attendance<35){
printf("10 Assignments\n");
}else if(Attendance>=35 && Attendance<45){
printf("8 Assignments\n");
}
else if(Attendance>=45 && Attendance<55){
printf("6 Assignments\n");
}
else if(Attendance>=55 && Attendance<60){
printf("5 Assignments\n");
}
else if(Attendance>=60&& Attendance<65){
printf("4 Assignments\n");
}
else if(Attendance>=65&&Attendance<75){
printf("2 Assignments\n");
}else{
printf("No Assignments\n");
}
}