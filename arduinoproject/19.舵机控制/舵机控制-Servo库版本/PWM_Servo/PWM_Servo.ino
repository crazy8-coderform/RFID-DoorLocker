#include <Servo.h>//之间要有空格，否则编译时会报错。
Servo myservo;//定义舵机变量名
unsigned char jiao;//
void setup()
{
myservo.attach(9);//定义舵机接口（9、10 都可以，缺点只能控制2 个）
}
void loop()
{
  //for(jiao=0;jiao<180;jiao++)
   //{
     myservo.write(0);//设置舵机旋转的角度 
     delay(1000);   
   //}
   //for(jiao=180;jiao>0;jiao--)
   //{
     myservo.write(180);//设置舵机旋转的角度 
     delay(1000);   
   //}
}

