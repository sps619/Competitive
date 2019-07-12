#include <stdio.h>
int main(void){
    int periodOfEarth;
    float longitude,time1,hoursAngle,minAngle;
    scanf("%d",&periodOfEarth);
    scanf("%f",&longitude);
    time1 = (periodOfEarth*longitude)/360;
    float min=0;
    int hours = time1;
    min = (time1-hours)*100;
    float min60 = (6 * min)/10;
    hoursAngle = (30*hours)+(min60/2);
    hoursAngle=hoursAngle;
    minAngle = 6*min60;
    float angle;
    if(hoursAngle<minAngle)
    angle = minAngle - hoursAngle;
    else
    angle = hoursAngle-minAngle;
    if(angle > 180)
    angle=360-angle;
    printf("%0.2f",angle);
    return 0;
}
