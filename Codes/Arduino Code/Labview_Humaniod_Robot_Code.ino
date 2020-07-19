#include<Servo.h>
#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>
Servo ms1,ms2;// Servo motor objects
String str="";
Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();// declare Pwm object

void setup() {
  pinMode(8,OUTPUT);//Led for left eye
  pinMode(6,OUTPUT);//Led for right eye
  Serial.begin(9600);//Start Serial Communication
  pwm.begin();//Start pwm 
  pwm.setPWMFreq(60);  // Analog servos run at ~60 Hz updates
  ms1.attach(9);
  ms2.attach(3);
  Serial.println("Initializing...");
 
    pwm.setPWM(0, 0, 300 );
    delay(100);
    Serial.println("S1 Ready");
    pwm.setPWM(1, 0, 300 );
    delay(100);
    Serial.println("S2 Ready");
    pwm.setPWM(2, 0, 300 );
    delay(100);
    Serial.println("S3 Ready");
    pwm.setPWM(3, 0, 300 );
    delay(100);
    Serial.println("S4 Ready");
    pwm.setPWM(4, 0, 300 );
    delay(100);
    Serial.println("S5 Ready");
    pwm.setPWM(5, 0, 300 );
    delay(100);
    Serial.println("S6 Ready");
    pwm.setPWM(6, 0, 300 );
    delay(100);
    Serial.println("S7 Ready");
    pwm.setPWM(7, 0, 300);
    delay(100);
    Serial.println("S8 Ready");
    pwm.setPWM(8, 0, 300 );
    delay(100);
    Serial.println("S9 Ready");
    pwm.setPWM(9, 0, 300 );
    delay(100);
    Serial.println("S10 Ready");
    pwm.setPWM(10, 0, 300 );
    delay(100);
    Serial.println("S11 Ready");
    pwm.setPWM(11, 0, 300 );
    delay(100);
    Serial.println("S12 Ready");
    pwm.setPWM(12, 0, 300 );
    delay(100);
    Serial.println("S13 Ready");
    pwm.setPWM(13, 0, 300 );
    delay(100);
    Serial.println("S14 Ready");
    pwm.setPWM(14, 0, 300 );
    delay(100);
    Serial.println("S15 Ready");
    pwm.setPWM(15, 0, 300 );
    delay(100);
    Serial.println("S16 Ready");
    ms1.write(90);
    delay(100);
    Serial.println("S17 Ready");
    ms2.write(90);
    delay(100);
    Serial.println("S18 Ready");

    // Making both eyes leds ON
    digitalWrite(8,HIGH);
    digitalWrite(6,HIGH);
}


void loop() {
if(Serial.available())
{
    str=Serial.readString();// Reading Serial Data from Labview into String Str

    // Storing values of the string into different substring
    String s1=str.substring(0,3);
    String s2=str.substring(4,7);
    String s3=str.substring(8,11);
    String s4=str.substring(12,15);
    String s5=str.substring(16,19);
    String s6=str.substring(20,23);
    String s7=str.substring(24,27);
    String s8=str.substring(28,31);
    String s9=str.substring(32,35);
    String s10=str.substring(36,39);
    String s11=str.substring(40,43);
    String s12=str.substring(44,47);
    String s13=str.substring(48,51);
    String s14=str.substring(52,55);
    String s15=str.substring(56,59);
    String s16=str.substring(60,63);
    String s17=str.substring(64,67);
    String s18=str.substring(68,71);

    //converting string to integer
    int p1=s1.toInt();
    int p2=s2.toInt();
    int p3=s3.toInt();
    int p4=s4.toInt();
    int p5=s5.toInt();
    int p6=s6.toInt();
    int p7=s7.toInt();
    int p8=s8.toInt();
    int p9=s9.toInt();
    int p10=s10.toInt();
    int p11=s11.toInt();
    int p12=s12.toInt();
    int p13=s13.toInt();
    int p14=s14.toInt();
    int p15=s15.toInt();
    int p16=s16.toInt();
    int p17=s17.toInt();
    int p18=s18.toInt();

    //Writing the integer values to the respective motors
    pwm.setPWM(0, 0, p1 );
    pwm.setPWM(1, 0, p2 );
    pwm.setPWM(2, 0, p3 );
    pwm.setPWM(3, 0, p4);
    pwm.setPWM(4, 0, p5 );
    pwm.setPWM(5, 0, p6 );
    pwm.setPWM(6, 0, p7 );
    pwm.setPWM(7, 0, p8);
    pwm.setPWM(8, 0, p9 );
    pwm.setPWM(9, 0, p10 );
    pwm.setPWM(10, 0, p11 );
    pwm.setPWM(11, 0, p12);
    pwm.setPWM(12, 0, p13 );
    pwm.setPWM(13, 0, p14 );
    pwm.setPWM(14, 0, p15 );
    pwm.setPWM(15, 0, p16);
    int m17=map(p17,100,600,0,180);
    int m18=map(p18,100,600,0,180);
    ms1.write(m17);
    ms2.write(m18);
    
    Serial.println(str);// Returning the Str Value to Labview
}    
  
}
