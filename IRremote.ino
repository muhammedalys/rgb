#include <IRremote.h>
int kirmizi_led=7;
int yesil_led=6;
int mavi_led=5;
int ir_alici=4;
IRrecv irrecv(ir_alici);
decode_results results; 

void setup() {
  
pinMode(kirmizi_led, OUTPUT);
pinMode(yesil_led, OUTPUT);
pinMode(mavi_led, OUTPUT);
irrecv.enableIRIn();
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
if (irrecv.decode(&results))
{
Serial.println(results.value); 
irrecv.resume();
}
if(results.value==16738455)                 //Kırmızı led aktif(Kırmızı tuş)
{
  digitalWrite(kirmizi_led, HIGH);
  digitalWrite(yesil_led, LOW);
  digitalWrite(mavi_led, LOW);
}
if(results.value==16750695)                 //Yeşil led aktif(Yeşil tuş)
{
  digitalWrite(yesil_led, HIGH);
  digitalWrite(kirmizi_led, LOW);
  digitalWrite(mavi_led, LOW);
}
if(results.value==16756815)                 //Mavi led aktif(Mavi tuş)
{
  digitalWrite(mavi_led, HIGH);
  digitalWrite(kirmizi_led, LOW);
  digitalWrite(yesil_led, LOW);
}
if(results.value==16712445)                 //Bütün çıkışlar kapanır(Off tuşu)
{
 digitalWrite(kirmizi_led, LOW);
 digitalWrite(yesil_led, LOW);
 digitalWrite(mavi_led, LOW);
}
if(results.value==16724175)                 //Animasyon
{
 digitalWrite(kirmizi_led, HIGH);
 digitalWrite(yesil_led, HIGH);
 digitalWrite(mavi_led, HIGH);
 delay(100);
 digitalWrite(mavi_led, LOW);
 digitalWrite(kirmizi_led, LOW);
 digitalWrite(yesil_led, LOW);
 delay(100);
}
if(results.value==16718055)                 //Animasyon
{
digitalWrite(kirmizi_led, HIGH);
delay(100);
digitalWrite(kirmizi_led, LOW);
delay(100);
digitalWrite(yesil_led, HIGH);
delay(100);
digitalWrite(yesil_led, LOW);
delay(100);
digitalWrite(mavi_led, HIGH);
delay(100);
digitalWrite(mavi_led, LOW);
}
if(results.value==16743045)                //Animasyon(

{
 digitalWrite(mavi_led, HIGH);
 delay(100);
 digitalWrite(mavi_led, LOW);
 delay(100);
 digitalWrite(yesil_led, HIGH);
 delay(100);
 digitalWrite(yesil_led, LOW);
 delay(100);
 digitalWrite(kirmizi_led, HIGH);
 delay(100);
 digitalWrite(kirmizi_led, LOW);
}
if(results.value==16726215)                //Animasyon
{

 digitalWrite(yesil_led, HIGH);
 delay(1000);
 digitalWrite(mavi_led, HIGH);
 delay(1000);
 digitalWrite(kirmizi_led, HIGH);
 delay(1000);
 digitalWrite(kirmizi_led, LOW);
 delay(1000);
 digitalWrite(mavi_led, LOW);
 delay(1000);
 digitalWrite(yesil_led,LOW);
 delay(1000);

}
if(results.value==16734885)                //Animasyon

{
 digitalWrite(mavi_led, HIGH);
 delay(100);
 digitalWrite(mavi_led, LOW);
 delay(100);
  digitalWrite(mavi_led, HIGH);
 delay(100);
 digitalWrite(mavi_led, LOW);
 delay(100);
  digitalWrite(mavi_led, HIGH);
 delay(100);
 digitalWrite(mavi_led, LOW);
 delay(100);
  digitalWrite(mavi_led, HIGH);
 delay(100);
 digitalWrite(mavi_led, LOW);
 delay(100);
  digitalWrite(mavi_led, HIGH);
 delay(100);
 digitalWrite(mavi_led, LOW);
 delay(1000);
 
 digitalWrite(yesil_led, HIGH);
 delay(100);
 digitalWrite(yesil_led, LOW);
 delay(100);
  digitalWrite(yesil_led, HIGH);
 delay(100);
 digitalWrite(yesil_led, LOW);
 delay(100);
  digitalWrite(yesil_led, HIGH);
 delay(100);
 digitalWrite(yesil_led, LOW);
 delay(100);
  digitalWrite(yesil_led, HIGH);
 delay(100);
 digitalWrite(yesil_led, LOW);
 delay(100);
  digitalWrite(yesil_led, HIGH);
 delay(100);
 digitalWrite(yesil_led, LOW);
 delay(1000);
 
 digitalWrite(kirmizi_led, HIGH);
 delay(100);
 digitalWrite(kirmizi_led, LOW);

digitalWrite(kirmizi_led, HIGH);
 delay(100);
 digitalWrite(kirmizi_led, LOW);

digitalWrite(kirmizi_led, HIGH);
 delay(100);
 digitalWrite(kirmizi_led, LOW);

digitalWrite(kirmizi_led, HIGH);
 delay(100);
 digitalWrite(kirmizi_led, LOW);

digitalWrite(kirmizi_led, HIGH);
 delay(100);
 digitalWrite(kirmizi_led, LOW);
 delay(1000);
}
if(results.value==16716015)               //Bütün ledleri aktif eden tuş
{
  digitalWrite(kirmizi_led, HIGH);
  digitalWrite(yesil_led, HIGH);
  digitalWrite(mavi_led, HIGH);
}
}
