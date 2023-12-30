int goc=0;
int tong=0;
int thuan=1;
int nghich=0;
int sensor=2;
int coi=13;
void setup () {
pinMode ( servoPin, OUTPUT ) ;
pinMode   (sensor, INPUT_PULLUP);
 pinMode  ( coi, OUTPUT ) ;
 }
void loop () {

if(digitalRead(sensor)==LOW){digitalWrite(coi, HIGH);delay(2000);}
  digitalWrite(coi, LOW);
  digitalWrite(servoPin, HIGH);
 delayMicroseconds ( goc ) ;
 digitalWrite(servoPin, LOW);
 delayMicroseconds ( tong ) ;

if (goc>=2300){thuan=0;nghich=1;}
if (goc<=600){thuan=1;nghich=0;}
if( thuan==1){goc++;}
if(nghich==1){goc--;}
tong=20000-goc;
}