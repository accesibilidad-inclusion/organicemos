#include <Wire.h>
#include "Adafruit_MPR121.h"
#include <Adafruit_NeoPixel.h>
#include <avr/power.h>


#ifndef _BV
#define _BV(bit) (1 << (bit)) 
#endif
Adafruit_MPR121 cap1= Adafruit_MPR121(); //(0x5A);
Adafruit_MPR121 cap2= Adafruit_MPR121(); //(0x5C);
Adafruit_MPR121 cap3= Adafruit_MPR121(); //(0x5D);

#define PIN 6
#define NUMPIXELS      105   
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);
int k;
int BRILLO=30; //0 a 255

uint16_t lasttouched1 = 0;
uint16_t lasttouched2 = 0;
uint16_t lasttouched3 = 0;
uint16_t currtouched_mod1 = 0;
uint16_t currtouched_mod2 = 0;
uint16_t currtouched_mod3 = 0;

int EST1=0;int EST2=0;int EST3=0;int EST4=0;int EST5=0;int EST6=0;int EST7=0;int EST8=0;int EST9=0;int EST10=0;int EST11=0;int EST12=0;
int EST13=0;int EST14=0;int EST15=0;int EST16=0;int EST17=0;int EST18=0;int EST19=0;int EST20=0;int EST21=0;int EST22=0;int EST23=0;int EST24=0;
int EST25=0;int EST26=0;int EST27=0;int EST28=0;int EST29=0;int EST30=0;int EST31=0;int EST32=0;int EST33=0;int EST34=0;int EST35=0;int EST36=0;


  // pixels.Color toma valores en RGB, desde 0,0,0 hasta 255,255,255
   uint32_t rojo = pixels.Color(200,0,0);
   uint32_t verde = pixels.Color(0,200,0);
   uint32_t azul = pixels.Color(0,0,200);
   //Variamos los colores de cada led en nuestra cinta RGB cada medio segundo
   uint32_t amarillo = pixels.Color(200,200,0);
   uint32_t morado = pixels.Color(200,0,200);
   uint32_t celeste = pixels.Color(0,200,200);
   uint32_t blanco = pixels.Color(200,200,200);
//-------------------------------------------------------------ACÁ ESTABLECEMOS LOS COLORES DE LOS ESTADOS
  uint32_t COLOR1=azul;
 // uint32_t COLOR2=rojo;
 // uint32_t COLOR3=celeste;
  uint32_t APAGADO=pixels.Color(0,0,0);;
  int delayval = 100; 
//--------------------------------------------------------------



void setup()
{  
  pixels.begin();
  pixels.clear();
  for(int i=0;i<106;i++)
  {   
   pixels.setPixelColor(i*2,morado); // Brillo moderado en azul
   pixels.show();   // Mostramos y actualizamos el color del pixel de nuestra cinta led RGB
   delay(delayval); // Pausa por un periodo de tiempo (en milisegundos).
   pixels.clear(); //BORRA LOS LEDS ENCENDIDOS
  }
  pixels.clear();
  pixels.show(); 
  
  Serial.begin(9600);  
  while (!Serial) 
  { // needed to keep leonardo/micro from starting too fast!
    delay(10);
  }  
  Serial.println("Adafruit MPR121 Capacitive Touch sensor test"); 
    
  if (!cap1.begin(0x5D)) 
  {
    Serial.println("MPR121_MOD1 not found, check wiring?");
    while (1);
  }
  Serial.println("MPR121_MOD1 found!");  
  
  if (!cap2.begin(0x5C)) 
  {
    Serial.println("MPR121_MOD2 not found, check wiring?");
    while (1);
  }
  Serial.println("MPR121_MOD2 found!");   
   if (!cap3.begin(0x5A)) 
  {
    Serial.println("MPR121_MOD3 not found, check wiring?");
    while (1);
  }
  Serial.println("MPR121_MOD3 found!");   
}
void loop()
{

NOT();

}
