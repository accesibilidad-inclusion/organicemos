void NOT()
{
int j; // variables para cada modulo

// -----------------------------------------REVISA EL ESTADO DE LOS MODULOS
currtouched_mod1 = cap1.touched();
currtouched_mod2 = cap2.touched();
currtouched_mod3 = cap3.touched();
//----------------------------------------------------LECTURA DE MPR---------------------------------
for (uint8_t n=0; n<12; n++) 
  {   
        if ((currtouched_mod1 & _BV(n)) && !(lasttouched1 & _BV(n)) )  // ASIGNA UN "j" SI ES Q SE ACTIVA ALGUN PIN DEL MODULO 1
        {
          j=n+1;// Serial.print(j); Serial.println(" touched"); 
        }
        if ((currtouched_mod2 & _BV(n)) && !(lasttouched2 & _BV(n)) ) // ASIGNA UN "i" SI ES Q SE ACTIVA ALGUN PIN DEL MODULO 1
        {
          j=n+13; // para que sea consecutivo desde el primer módulo
         // Serial.print(n); Serial.println(" touched");      
        }
        if ((currtouched_mod3 & _BV(n)) && !(lasttouched3 & _BV(n)) ) // ASIGNA UN "i" SI ES Q SE ACTIVA ALGUN PIN DEL MODULO 1
        {
          j=n+25; // para que sea consecutivo desde el primer módulo
         // Serial.print(n); Serial.println(" touched");      
        }
    //-----------------------------------------------------------------------------------------------------   
             
               switch(j) //TOUCHS
             {
              case 1:
                     if(EST1==0)
                     {pixels.setPixelColor(j-1,COLOR1);pixels.setPixelColor(j,COLOR1);pixels.setPixelColor(j+1,COLOR1);pixels.show();delay(delayval);EST1=1;}
                    /* else if(EST1==1)
                     {pixels.setPixelColor(j-1,COLOR2);pixels.setPixelColor(j,COLOR2);pixels.show();delay(delayval);EST1=2;}
                     else if(EST1==2)
                     {pixels.setPixelColor(j-1,COLOR3);pixels.setPixelColor(j,COLOR3);pixels.show();delay(delayval);EST1=3;} */
                     else if(EST1==1)
                     {pixels.setPixelColor(j-1,APAGADO);pixels.setPixelColor(j,APAGADO);pixels.setPixelColor(j+1,APAGADO);pixels.show();EST1=0;}
                   /*  Serial.print("mod_1_");
                     Serial.print(j);
                     Serial.print(" ");
                     Serial.println(EST1);*/
                     break; //0-1
              case 2:
                     if(EST2==0)
                     {pixels.setPixelColor(j+1,COLOR1);pixels.setPixelColor(j+2,COLOR1);pixels.setPixelColor(j+3,COLOR1);pixels.show();delay(delayval);EST2=1;}
                    /* else if(EST2==1)
                     {pixels.setPixelColor(j,COLOR2);pixels.setPixelColor(j+1,COLOR2);pixels.show();delay(delayval);EST2=2;}
                     else if(EST2==2)
                     {pixels.setPixelColor(j,COLOR3);pixels.setPixelColor(j+1,COLOR3);pixels.show();delay(delayval);EST2=3;}*/
                     else if(EST2==1)
                     {pixels.setPixelColor(j+1,APAGADO);pixels.setPixelColor(j+2,APAGADO);pixels.setPixelColor(j+3,APAGADO);pixels.show();EST2=0;}
                     /*Serial.print("mod_1_");
                     Serial.println(j); */
                     break; //2-3
              case 3:
                     if(EST3==0)
                     {pixels.setPixelColor(j+3,COLOR1);pixels.setPixelColor(j+4,COLOR1);pixels.setPixelColor(j+5,COLOR1);pixels.show();delay(delayval);EST3=1;}
                   /*  else if(EST3==1)
                     {pixels.setPixelColor(j+1,COLOR2);pixels.setPixelColor(j+2,COLOR2);pixels.show();delay(delayval);EST3=2;}
                     else if(EST3==2)
                     {pixels.setPixelColor(j+1,COLOR3);pixels.setPixelColor(j+2,COLOR3);pixels.show();delay(delayval);EST3=3;} */
                     else if(EST3==1)
                     {pixels.setPixelColor(j+3,APAGADO);pixels.setPixelColor(j+4,APAGADO);pixels.setPixelColor(j+5,APAGADO);pixels.show();EST3=0;}
                   /*  Serial.print("mod_1_");
                     Serial.println(j);*/
                     break; //4-5
              case 4:
                     if(EST4==0)
                     {pixels.setPixelColor(j+5,COLOR1);pixels.setPixelColor(j+6,COLOR1);pixels.setPixelColor(j+7,COLOR1);pixels.show();delay(delayval);EST4=1;}
                   /*  else if(EST4==1)
                     {pixels.setPixelColor(j+2,COLOR2);pixels.setPixelColor(j+3,COLOR2);pixels.show();delay(delayval);EST4=2;}
                     else if(EST4==2)
                     {pixels.setPixelColor(j+2,COLOR3);pixels.setPixelColor(j+3,COLOR3);pixels.show();delay(delayval);EST4=3;} */
                     else if(EST4==1)
                     {pixels.setPixelColor(j+5,APAGADO);pixels.setPixelColor(j+6,APAGADO);pixels.setPixelColor(j+7,APAGADO);pixels.show();EST4=0;}
                    // Serial.print("mod_1_");
                    // Serial.println(j);
                     break;//6-7
              case 5:
                     if(EST5==0)
                     {pixels.setPixelColor(j+7,COLOR1);pixels.setPixelColor(j+8,COLOR1);pixels.setPixelColor(j+9,COLOR1);pixels.show();delay(delayval);EST5=1;}
                   /*  else if(EST5==1)
                     {pixels.setPixelColor(j+3,COLOR2);pixels.setPixelColor(j+4,COLOR2);pixels.show();delay(delayval);EST5=2;}
                     else if(EST5==2)
                     {pixels.setPixelColor(j+3,COLOR3);pixels.setPixelColor(j+4,COLOR3);pixels.show();delay(delayval);EST5=3;} */
                     else if(EST5==1)
                     {pixels.setPixelColor(j+7,APAGADO);pixels.setPixelColor(j+8,APAGADO);pixels.setPixelColor(j+9,APAGADO);pixels.show();EST5=0;}
                    // Serial.print("mod_1_");
                    // Serial.println(j);
                     break; //8-9
              case 6:
                     if(EST6==0)
                     {pixels.setPixelColor(j+9,COLOR1);pixels.setPixelColor(j+10,COLOR1);pixels.setPixelColor(j+11,COLOR1);pixels.show();delay(delayval);EST6=1;}
                   /*  else if(EST6==1)
                     {pixels.setPixelColor(j+4,COLOR2);pixels.setPixelColor(j+5,COLOR2);pixels.show();delay(delayval);EST6=2;}
                     else if(EST6==2)
                     {pixels.setPixelColor(j+4,COLOR3);pixels.setPixelColor(j+5,COLOR3);pixels.show();delay(delayval);EST6=3;} */
                     else if(EST6==1)
                     {pixels.setPixelColor(j+9,APAGADO);pixels.setPixelColor(j+10,APAGADO);pixels.setPixelColor(j+11,APAGADO);pixels.show();EST6=0;}
                    //  Serial.print("mod_1_");
                    //  Serial.println(j);
                     break;      
              case 7:
                     if(EST7==0)
                     {pixels.setPixelColor(j+11,COLOR1);pixels.setPixelColor(j+12,COLOR1);pixels.setPixelColor(j+13,COLOR1);pixels.show();delay(delayval);EST7=1;}
                    /* else if(EST7==1)
                     {pixels.setPixelColor(j+5,COLOR2);pixels.setPixelColor(j+6,COLOR2);pixels.show();delay(delayval);EST7=2;}
                     else if(EST7==2)
                     {pixels.setPixelColor(j+5,COLOR3);pixels.setPixelColor(j+6,COLOR3);pixels.show();delay(delayval);EST7=3;} */
                     else if(EST7==1)
                     {pixels.setPixelColor(j+11,APAGADO);pixels.setPixelColor(j+12,APAGADO);pixels.setPixelColor(j+13,APAGADO);pixels.show();EST7=0;}
                    // Serial.print("mod_1_");
                   //  Serial.println(j);
                     break;
              case 8:
                     if(EST8==0)
                     {pixels.setPixelColor(j+13,COLOR1);pixels.setPixelColor(j+14,COLOR1);pixels.setPixelColor(j+15,COLOR1);pixels.show();delay(delayval);EST8=1;}
                   /*  else if(EST8==1)
                     {pixels.setPixelColor(j+6,COLOR2);pixels.setPixelColor(j+7,COLOR2);pixels.show();delay(delayval);EST8=2;}
                     else if(EST8==2)
                     {pixels.setPixelColor(j+6,COLOR3);pixels.setPixelColor(j+7,COLOR3);pixels.show();delay(delayval);EST8=3;} */
                     else if(EST8==1)
                     {pixels.setPixelColor(j+13,APAGADO);pixels.setPixelColor(j+14,APAGADO);pixels.setPixelColor(j+15,APAGADO);pixels.show();EST8=0;}
                    // Serial.print("mod_1_");
                    // Serial.println(j);
                     break;
              case 9:
                     if(EST9==0)
                     {pixels.setPixelColor(j+15,COLOR1);pixels.setPixelColor(j+16,COLOR1);pixels.setPixelColor(j+17,COLOR1);pixels.show();delay(delayval);EST9=1;}
                   /*  else if(EST9==1)
                     {pixels.setPixelColor(j+7,COLOR2);pixels.setPixelColor(j+8,COLOR2);pixels.show();delay(delayval);EST9=2;}
                     else if(EST9==2)
                     {pixels.setPixelColor(j+7,COLOR3);pixels.setPixelColor(j+8,COLOR3);pixels.show();delay(delayval);EST9=3;} */
                     else if(EST9==1)
                     {pixels.setPixelColor(j+15,APAGADO);pixels.setPixelColor(j+16,APAGADO);pixels.setPixelColor(j+17,APAGADO);pixels.show();EST9=0;}
                    // Serial.print("mod_1_");
                    // Serial.println(j);
                     break;
              case 10:
                     if(EST10==0)
                     { pixels.setPixelColor(j+17,COLOR1);pixels.setPixelColor(j+18,COLOR1);pixels.setPixelColor(j+19,COLOR1);pixels.show();delay(delayval);EST10=1;}
                  /*   else if(EST10==1)
                     { pixels.setPixelColor(j+8,COLOR2);pixels.setPixelColor(j+9,COLOR2);pixels.show();delay(delayval);EST10=2;}
                     else if(EST10==2)
                     { pixels.setPixelColor(j+8,COLOR3);pixels.setPixelColor(j+9,COLOR3);pixels.show();delay(delayval);EST10=3;} */
                     else if(EST10==1)
                     { pixels.setPixelColor(j+17,APAGADO);pixels.setPixelColor(j+18,APAGADO);pixels.setPixelColor(j+19,APAGADO);pixels.show();EST10=0;}
                    // Serial.print("mod_1_");
                    // Serial.println(j);
                     break;    
              case 11:
                     if(EST11==0)
                     { pixels.setPixelColor(j+19,COLOR1);pixels.setPixelColor(j+20,COLOR1);pixels.setPixelColor(j+21,COLOR1);pixels.show();delay(delayval);EST11=1;}
                   /*  else if(EST11==1)
                     { pixels.setPixelColor(j+9,COLOR2);pixels.setPixelColor(j+10,COLOR2);pixels.show();delay(delayval);EST11=2;}
                     else if(EST11==2)
                     { pixels.setPixelColor(j+9,COLOR3);pixels.setPixelColor(j+10,COLOR3);pixels.show();delay(delayval);EST11=3;} */
                     else if(EST11==1)
                     { pixels.setPixelColor(j+19,APAGADO);pixels.setPixelColor(j+20,APAGADO);pixels.setPixelColor(j+21,APAGADO);pixels.show();EST11=0;}
                   //  Serial.print("mod_1_");
                   //  Serial.println(j);
                     break;
              case 12:
                     if(EST12==0)
                     { pixels.setPixelColor(j+21,COLOR1);pixels.setPixelColor(j+22,COLOR1);pixels.setPixelColor(j+23,COLOR1);pixels.show();delay(delayval);EST12=1;}
                   /*  else if(EST12==1)
                     { pixels.setPixelColor(j+10,COLOR2);pixels.setPixelColor(j+11,COLOR2);pixels.show();delay(delayval);EST12=2;}
                     else if(EST12==2)
                     { pixels.setPixelColor(j+10,COLOR3);pixels.setPixelColor(j+11,COLOR3);pixels.show();delay(delayval);EST12=3;} */
                     else if(EST12==1)
                     { pixels.setPixelColor(j+21,APAGADO);pixels.setPixelColor(j+22,APAGADO);pixels.setPixelColor(j+23,APAGADO);pixels.show();EST12=0;}
                   //  Serial.print("mod_1_");
                   //  Serial.println(j);
                     break;  

                     //------------------------------------------------------------------------------------------------------------fin MOD 1
              case 13:
                    if(EST13==0)
                     { pixels.setPixelColor(j+23,COLOR1);pixels.setPixelColor(j+24,COLOR1);pixels.setPixelColor(j+25,COLOR1);pixels.show();delay(delayval);EST13=1;}
                   /*  else if(EST13==1)
                     { pixels.setPixelColor(j+11,COLOR2);pixels.setPixelColor(j+12,COLOR2);pixels.show();delay(delayval);EST13=2;}
                     else if(EST13==2)
                     { pixels.setPixelColor(j+11,COLOR3);pixels.setPixelColor(j+12,COLOR3);pixels.show();delay(delayval);EST13=3;} */
                     else if(EST13==1)
                     { pixels.setPixelColor(j+23,APAGADO);pixels.setPixelColor(j+24,APAGADO);pixels.setPixelColor(j+25,APAGADO);pixels.show();EST13=0;} 
                   //  Serial.print("mod_2_");
                   //  Serial.println(j);
                     break;
              case 14:
                   if(EST14==0)
                     { pixels.setPixelColor(j+25,COLOR1);pixels.setPixelColor(j+26,COLOR1);pixels.setPixelColor(j+27,COLOR1);pixels.show();delay(delayval);EST14=1;}
                   /*  else if(EST14==1)
                     { pixels.setPixelColor(j+12,COLOR2);pixels.setPixelColor(j+13,COLOR2);pixels.show();delay(delayval);EST14=2;}
                     else if(EST14==2)
                     { pixels.setPixelColor(j+12,COLOR3);pixels.setPixelColor(j+13,COLOR3);pixels.show();delay(delayval);EST14=3;} */
                     else if(EST14==1)
                     { pixels.setPixelColor(j+25,APAGADO);pixels.setPixelColor(j+26,APAGADO);pixels.setPixelColor(j+27,APAGADO);pixels.show();EST14=0;} 
                  //   Serial.print("mod_2_");
                  //   Serial.println(j);
                     break;      
              case 15:
                     if(EST15==0)
                     { pixels.setPixelColor(j+27,COLOR1);pixels.setPixelColor(j+28,COLOR1);pixels.setPixelColor(j+29,COLOR1);pixels.show();delay(delayval);EST15=1;}
                   /*  else if(EST15==1)
                     { pixels.setPixelColor(j+13,COLOR2);pixels.setPixelColor(j+14,COLOR2);pixels.show();delay(delayval);EST15=2;}
                     else if(EST15==2)
                     { pixels.setPixelColor(j+13,COLOR3);pixels.setPixelColor(j+14,COLOR3);pixels.show();delay(delayval);EST15=3;} */
                     else if(EST15==1)
                     { pixels.setPixelColor(j+27,APAGADO);pixels.setPixelColor(j+28,APAGADO);pixels.setPixelColor(j+29,APAGADO);pixels.show();EST15=0;}
                    // Serial.print("mod_2_");
                    // Serial.println(j);
                     break;
              case 16:
                     if(EST16==0)
                     { pixels.setPixelColor(j+29,COLOR1);pixels.setPixelColor(j+30,COLOR1);pixels.setPixelColor(j+31,COLOR1);pixels.show();delay(delayval);EST16=1;}
                   /*  else if(EST16==1)
                     { pixels.setPixelColor(j+14,COLOR2);pixels.setPixelColor(j+15,COLOR2);pixels.show();delay(delayval);EST16=2;}
                     else if(EST16==2)
                     { pixels.setPixelColor(j+14,COLOR3);pixels.setPixelColor(j+15,COLOR3);pixels.show();delay(delayval);EST16=3;} */
                     else if(EST16==1)
                     { pixels.setPixelColor(j+29,APAGADO);pixels.setPixelColor(j+30,APAGADO);pixels.setPixelColor(j+31,APAGADO);pixels.show();EST16=0;}
                    // Serial.print("mod_2_");
                    // Serial.println(j);
                     break;
              case 17:
                    if(EST17==0)
                     { pixels.setPixelColor(j+31,COLOR1);pixels.setPixelColor(j+32,COLOR1);pixels.setPixelColor(j+33,COLOR1);pixels.show();delay(delayval);EST17=1;}
                 /*    else if(EST17==1)
                     { pixels.setPixelColor(j+15,COLOR2);pixels.setPixelColor(j+16,COLOR2);pixels.show();delay(delayval);EST17=2;}
                     else if(EST17==2)
                     { pixels.setPixelColor(j+15,COLOR3);pixels.setPixelColor(j+16,COLOR3);pixels.show();delay(delayval);EST17=3;} */
                     else if(EST17==1)
                     { pixels.setPixelColor(j+31,APAGADO);pixels.setPixelColor(j+32,APAGADO);pixels.setPixelColor(j+33,APAGADO);pixels.show();EST17=0;}
                    // Serial.print("mod_2_");
                   //  Serial.println(j);
                     break;
              case 18:
                     if(EST18==0)
                     { pixels.setPixelColor(j+33,COLOR1);pixels.setPixelColor(j+34,COLOR1);pixels.setPixelColor(j+35,COLOR1);pixels.show();delay(delayval);EST18=1;}
                   /*  else if(EST18==1)
                     { pixels.setPixelColor(j+16,COLOR2);pixels.setPixelColor(j+17,COLOR2);pixels.show();delay(delayval);EST18=2;}
                     else if(EST18==2)
                     { pixels.setPixelColor(j+16,COLOR3);pixels.setPixelColor(j+17,COLOR3);pixels.show();delay(delayval);EST18=3;} */
                     else if(EST18==1)
                     { pixels.setPixelColor(j+33,APAGADO);pixels.setPixelColor(j+34,APAGADO);pixels.setPixelColor(j+35,APAGADO);pixels.show();EST18=0;}
                    // Serial.print("mod_2_");
                    // Serial.println(j);
                     break;    
              case 19:
                     if(EST19==0)
                     { pixels.setPixelColor(j+35,COLOR1);pixels.setPixelColor(j+36,COLOR1);pixels.setPixelColor(j+37,COLOR1);pixels.show();delay(delayval);EST19=1;}
                   /*  else if(EST19==1)
                     { pixels.setPixelColor(j+17,COLOR2);pixels.setPixelColor(j+18,COLOR2);pixels.show();delay(delayval);EST19=2;}
                     else if(EST19==2)
                     { pixels.setPixelColor(j+17,COLOR3);pixels.setPixelColor(j+18,COLOR3);pixels.show();delay(delayval);EST19=3;} */
                     else if(EST19==1)
                     { pixels.setPixelColor(j+35,APAGADO);pixels.setPixelColor(j+36,APAGADO);pixels.setPixelColor(j+37,APAGADO);pixels.show();EST19=0;}
                    // Serial.print("mod_2_");
                    // Serial.println(j);
                     break;
              case 20:
                     if(EST20==0)
                     { pixels.setPixelColor(j+37,COLOR1);pixels.setPixelColor(j+38,COLOR1);pixels.setPixelColor(j+39,COLOR1);pixels.show();delay(delayval);EST20=1;}
                    /* else if(EST20==1)
                     { pixels.setPixelColor(j+18,COLOR2);pixels.setPixelColor(j+19,COLOR2);pixels.show();delay(delayval);EST20=2;}
                     else if(EST20==2)
                     { pixels.setPixelColor(j+18,COLOR3);pixels.setPixelColor(j+19,COLOR3);pixels.show();delay(delayval);EST20=3;} */
                     else if(EST20==1)
                     { pixels.setPixelColor(j+37,APAGADO);pixels.setPixelColor(j+38,APAGADO);pixels.setPixelColor(j+39,APAGADO);pixels.show();EST20=0;}
                    // Serial.print("mod_2_");
                    // Serial.println(j);
                     break; 
              case 21:
                     if(EST21==0)
                     { pixels.setPixelColor(j+39,COLOR1);pixels.setPixelColor(j+40,COLOR1);pixels.setPixelColor(j+41,COLOR1);pixels.show();delay(delayval);EST21=1;}
                    /* else if(EST21==1)
                     { pixels.setPixelColor(j+19,COLOR2);pixels.setPixelColor(j+20,COLOR2);pixels.show();delay(delayval);EST21=2;}
                     else if(EST21==2)
                     { pixels.setPixelColor(j+19,COLOR3);pixels.setPixelColor(j+20,COLOR3);pixels.show();delay(delayval);EST21=3;} */
                     else if(EST21==1)
                     { pixels.setPixelColor(j+39,APAGADO);pixels.setPixelColor(j+40,APAGADO);pixels.setPixelColor(j+41,APAGADO);pixels.show();EST21=0;}
                    // Serial.print("mod_2_");
                    // Serial.println(j);
                     break;
              case 22:
                     if(EST22==0)
                     { pixels.setPixelColor(j+41,COLOR1);pixels.setPixelColor(j+42,COLOR1);pixels.setPixelColor(j+43,COLOR1);pixels.show();delay(delayval);EST22=1;}
                   /*  else if(EST22==1)
                     { pixels.setPixelColor(j+20,COLOR2);pixels.setPixelColor(j+21,COLOR2);pixels.show();delay(delayval);EST22=2;}
                     else if(EST22==2)
                     { pixels.setPixelColor(j+20,COLOR3);pixels.setPixelColor(j+21,COLOR3);pixels.show();delay(delayval);EST22=3;} */
                     else if(EST22==1)
                     { pixels.setPixelColor(j+41,APAGADO);pixels.setPixelColor(j+42,APAGADO);pixels.setPixelColor(j+43,APAGADO);pixels.show();EST22=0;}
                    // Serial.print("mod_2_");
                    // Serial.println(j);
                     break;      
              case 23:
                     if(EST23==0)
                     { pixels.setPixelColor(j+43,COLOR1);pixels.setPixelColor(j+44,COLOR1);pixels.setPixelColor(j+45,COLOR1);pixels.show();delay(delayval);EST23=1;}
                   /*  else if(EST23==1)
                     { pixels.setPixelColor(j+21,COLOR2);pixels.setPixelColor(j+22,COLOR2);pixels.show();delay(delayval);EST23=2;}
                     else if(EST23==2)
                     { pixels.setPixelColor(j+21,COLOR3);pixels.setPixelColor(j+22,COLOR3);pixels.show();delay(delayval);EST23=3;} */
                     else if(EST23==1)
                     { pixels.setPixelColor(j+43,APAGADO);pixels.setPixelColor(j+44,APAGADO);pixels.setPixelColor(j+45,APAGADO);pixels.show();EST23=0;}
                    // Serial.print("mod_2_");
                   //  Serial.println(j);
                     break;
              case 24:
                     if(EST24==0)
                     { pixels.setPixelColor(j+45,COLOR1);pixels.setPixelColor(j+46,COLOR1);pixels.setPixelColor(j+47,COLOR1);pixels.show();delay(delayval);EST24=1;}
                  /*   else if(EST24==1)
                     { pixels.setPixelColor(j+22,COLOR2);pixels.setPixelColor(j+23,COLOR2);pixels.show();delay(delayval);EST24=2;}
                     else if(EST24==2)
                     { pixels.setPixelColor(j+22,COLOR3);pixels.setPixelColor(j+23,COLOR3);pixels.show();delay(delayval);EST24=3;} */
                     else if(EST24==1)
                     { pixels.setPixelColor(j+45,APAGADO);pixels.setPixelColor(j+46,APAGADO);pixels.setPixelColor(j+47,APAGADO);pixels.show();EST24=0;}
                    // Serial.print("mod_2_");
                    // Serial.println(j);
                     break;
                     //-----------------------------------------------------------------------------------------------------------------------FIN MOD2
              case 25:
                     if(EST25==0)
                     { pixels.setPixelColor(j+47,COLOR1);pixels.setPixelColor(j+48,COLOR1);pixels.setPixelColor(j+49,COLOR1);pixels.show();delay(delayval);EST25=1;}
                   /*  else if(EST25==1)
                     { pixels.setPixelColor(j+23,COLOR2);pixels.setPixelColor(j+24,COLOR2);pixels.show();delay(delayval);EST25=2;}
                     else if(EST25==2)
                     { pixels.setPixelColor(j+23,COLOR3);pixels.setPixelColor(j+24,COLOR3);pixels.show();delay(delayval);EST25=3;} */
                     else if(EST25==1)
                     { pixels.setPixelColor(j+47,APAGADO);pixels.setPixelColor(j+48,APAGADO);pixels.setPixelColor(j+49,APAGADO);pixels.show();EST25=0;}
                    // Serial.print("mod_3_");
                    // Serial.println(j);
                     break;
              case 26:
                     if(EST26==0)
                     { pixels.setPixelColor(j+49,COLOR1);pixels.setPixelColor(j+50,COLOR1);pixels.setPixelColor(j+51,COLOR1);pixels.show();delay(delayval);EST26=1;}
                 /*    else if(EST26==1)
                     { pixels.setPixelColor(j+24,COLOR2);pixels.setPixelColor(j+25,COLOR2);pixels.show();delay(delayval);EST26=2;}
                     else if(EST26==2)
                     { pixels.setPixelColor(j+24,COLOR3);pixels.setPixelColor(j+25,COLOR3);pixels.show();delay(delayval);EST26=3;} */
                     else if(EST26==1)
                     { pixels.setPixelColor(j+49,APAGADO);pixels.setPixelColor(j+50,APAGADO);pixels.setPixelColor(j+51,APAGADO);pixels.show();EST26=0;}
                    // Serial.print("mod_3_");
                    // Serial.println(j);
                     break;    
              case 27:
                     if(EST27==0)
                     { pixels.setPixelColor(j+51,COLOR1);pixels.setPixelColor(j+52,COLOR1);pixels.setPixelColor(j+53,COLOR1);pixels.show();delay(delayval);EST27=1;}
                   /*  else if(EST27==1)
                     { pixels.setPixelColor(j+25,COLOR2);pixels.setPixelColor(j+26,COLOR2);pixels.show();delay(delayval);EST27=2;}
                     else if(EST27==2)
                     { pixels.setPixelColor(j+25,COLOR3);pixels.setPixelColor(j+26,COLOR3);pixels.show();delay(delayval);EST27=3;} */
                     else if(EST27==1)
                     { pixels.setPixelColor(j+51,APAGADO);pixels.setPixelColor(j+52,APAGADO);pixels.setPixelColor(j+53,APAGADO);pixels.show();EST27=0;}
                    // Serial.print("mod_3_");
                    // Serial.println(j);
                     break;
              case 28:
                     if(EST28==0)
                     { pixels.setPixelColor(j+53,COLOR1);pixels.setPixelColor(j+54,COLOR1);pixels.setPixelColor(j+55,COLOR1);pixels.show();delay(delayval);EST28=1;}
                  /*   else if(EST28==1)
                     { pixels.setPixelColor(j+26,COLOR2);pixels.setPixelColor(j+27,COLOR2);pixels.show();delay(delayval);EST28=2;}
                     else if(EST28==2)
                     { pixels.setPixelColor(j+26,COLOR3);pixels.setPixelColor(j+27,COLOR3);pixels.show();delay(delayval);EST28=3;} */
                     else if(EST28==1)
                     { pixels.setPixelColor(j+53,APAGADO);pixels.setPixelColor(j+54,APAGADO);pixels.setPixelColor(j+55,APAGADO);pixels.show();EST28=0;}
                    // Serial.print("mod_3_");
                    // Serial.println(j);
                     break;
              case 29:
                     if(EST29==0)
                     { pixels.setPixelColor(j+55,COLOR1);pixels.setPixelColor(j+56,COLOR1);pixels.setPixelColor(j+57,COLOR1);pixels.show();delay(delayval);EST29=1;}
                   /*  else if(EST29==1)
                     { pixels.setPixelColor(j+27,COLOR2);pixels.setPixelColor(j+28,COLOR2);pixels.show();delay(delayval);EST29=2;}
                     else if(EST29==2)
                     { pixels.setPixelColor(j+27,COLOR3);pixels.setPixelColor(j+28,COLOR3);pixels.show();delay(delayval);EST29=3;} */
                     else if(EST29==1)
                     { pixels.setPixelColor(j+55,APAGADO);pixels.setPixelColor(j+56,APAGADO);pixels.setPixelColor(j+57,APAGADO);pixels.show();EST29=0;}
                    // Serial.print("mod_3_");
                    // Serial.println(j);
                     break;      
              case 30:
                    if(EST30==0)
                     { pixels.setPixelColor(j+57,COLOR1);pixels.setPixelColor(j+58,COLOR1);pixels.setPixelColor(j+59,COLOR1);pixels.show();delay(delayval);EST30=1;}
                   /*  else if(EST30==1)
                     { pixels.setPixelColor(j+28,COLOR2);pixels.setPixelColor(j+29,COLOR2);pixels.show();delay(delayval);EST30=2;}
                     else if(EST30==2)
                     { pixels.setPixelColor(j+28,COLOR3);pixels.setPixelColor(j+29,COLOR3);pixels.show();delay(delayval);EST30=3;} */
                     else if(EST30==1)
                     { pixels.setPixelColor(j+57,APAGADO);pixels.setPixelColor(j+58,APAGADO);pixels.setPixelColor(j+59,APAGADO);pixels.show();EST30=0;} 
                    // Serial.print("mod_3_");
                    // Serial.println(j);
                     break;
              case 31:
                    if(EST31==0)
                     { pixels.setPixelColor(j+59,COLOR1);pixels.setPixelColor(j+60,COLOR1);pixels.setPixelColor(j+61,COLOR1);pixels.show();delay(delayval);EST31=1;}
                    /* else if(EST31==1)
                     { pixels.setPixelColor(j+29,COLOR2);pixels.setPixelColor(j+30,COLOR2);pixels.show();delay(delayval);EST31=2;}
                     else if(EST31==2)5
                     { pixels.setPixelColor(j+29,COLOR3);pixels.setPixelColor(j+30,COLOR3);pixels.show();delay(delayval);EST31=3;}  */
                     else if(EST31==1)
                     { pixels.setPixelColor(j+59,APAGADO);pixels.setPixelColor(j+60,APAGADO);pixels.setPixelColor(j+61,APAGADO);pixels.show();EST31=0;}  
                   //  Serial.print("mod_3_");
                   //  Serial.println(j);
                     break;
              case 32:
                    if(EST32==0)
                     { pixels.setPixelColor(j+61,COLOR1);pixels.setPixelColor(j+62,COLOR1);pixels.setPixelColor(j+63,COLOR1);pixels.show();delay(delayval);EST32=1;}
                 /*    else if(EST32==1)
                     { pixels.setPixelColor(j+30,COLOR2);pixels.setPixelColor(j+31,COLOR2);pixels.show();delay(delayval);EST32=2;}
                     else if(EST32==2)
                     { pixels.setPixelColor(j+30,COLOR3);pixels.setPixelColor(j+31,COLOR3);pixels.show();delay(delayval);EST32=3;} */
                     else if(EST32==1)
                     { pixels.setPixelColor(j+61,APAGADO);pixels.setPixelColor(j+62,APAGADO);pixels.setPixelColor(j+63,APAGADO);pixels.show();EST32=0;} 
                   //  Serial.print("mod_3_");
                   //  Serial.println(j);
                     break;
              case 33:
                    if(EST33==0)
                     { pixels.setPixelColor(j+63,COLOR1);pixels.setPixelColor(j+64,COLOR1);pixels.setPixelColor(j+65,COLOR1);pixels.show();delay(delayval);EST33=1;}
                  /*   else if(EST33==1)
                     { pixels.setPixelColor(j+31,COLOR2);pixels.setPixelColor(j+32,COLOR2);pixels.show();delay(delayval);EST33=2;}
                     else if(EST33==2)
                     { pixels.setPixelColor(j+31,COLOR3);pixels.setPixelColor(j+32,COLOR3);pixels.show();delay(delayval);EST33=3;} */
                     else if(EST33==1)
                     { pixels.setPixelColor(j+63,APAGADO);pixels.setPixelColor(j+64,APAGADO);pixels.setPixelColor(j+65,APAGADO);pixels.show();EST33=0;} 
                   //  Serial.print("mod_3_");
                   //  Serial.println(j);
                     break;    
              case 34:
                    if(EST34==0)
                     { pixels.setPixelColor(j+65,COLOR1);pixels.setPixelColor(j+66,COLOR1);pixels.setPixelColor(j+67,COLOR1);pixels.show();delay(delayval);EST34=1;}
                   /*  else if(EST34==1)
                     { pixels.setPixelColor(j+32,COLOR2);pixels.setPixelColor(j+33,COLOR2);pixels.show();delay(delayval);EST34=2;}
                     else if(EST34==2)
                     { pixels.setPixelColor(j+32,COLOR3);pixels.setPixelColor(j+33,COLOR3);pixels.show();delay(delayval);EST34=3;} */
                     else if(EST34==1)
                     { pixels.setPixelColor(j+65,APAGADO);pixels.setPixelColor(j+66,APAGADO);pixels.setPixelColor(j+67,APAGADO);pixels.show();EST34=0;} 
                   //  Serial.print("mod_3_");
                   //  Serial.println(j);
                     break;
              case 35:
                    if(EST35==0)
                     { pixels.setPixelColor(j+67,COLOR1);pixels.setPixelColor(j+68,COLOR1);pixels.setPixelColor(j+69,COLOR1);pixels.show();delay(delayval);EST35=1;}
                  /*   else if(EST35==1)
                     { pixels.setPixelColor(j+33,COLOR2);pixels.setPixelColor(j+34,COLOR2);pixels.show();delay(delayval);EST35=2;}
                     else if(EST35==2)
                     { pixels.setPixelColor(j+33,COLOR3);pixels.setPixelColor(j+34,COLOR3);pixels.show();delay(delayval);EST35=3;} */
                     else if(EST35==1)
                     { pixels.setPixelColor(j+67,APAGADO);pixels.setPixelColor(j+68,APAGADO);pixels.setPixelColor(j+69,APAGADO);pixels.show();EST35=0;} 
                   //  Serial.print("mod_3_");
                   //  Serial.println(j);
                     break; 
              case 36:
                    if(EST36==0)
                     { pixels.setPixelColor(j+69,COLOR1);pixels.setPixelColor(j+70,COLOR1);pixels.setPixelColor(j+71,COLOR1);pixels.show();delay(delayval);EST36=1;}
                  /*   else if(EST36==1)
                     { pixels.setPixelColor(j+34,COLOR2);pixels.setPixelColor(j+35,COLOR2);pixels.show();delay(delayval);EST36=2;}
                     else if(EST36==2)
                     { pixels.setPixelColor(j+34,COLOR3);pixels.setPixelColor(j+35,COLOR3);pixels.show();delay(delayval);EST36=3;} */
                     else if(EST36==1)
                     { pixels.setPixelColor(j+69,APAGADO);pixels.setPixelColor(j+70,APAGADO);pixels.setPixelColor(j+71,APAGADO);pixels.show();EST36=0;} 
                   //  Serial.print("mod_3_");
                   //  Serial.println(j);
                     break;
         /*     case 37:
                     
                     Serial.print("mod_1_");
                     Serial.println(j);
                     break;      
              case 38:
                     
                     Serial.print("mod_1_");
                     Serial.println(j);
                     break;
              case 39:
                     
                     Serial.print("mod_1_");
                     Serial.println(j);
                     break;
              case 40:
                     
                     Serial.print("mod_1_");
                     Serial.println(j);
                     break;
              case 41:
                     
                     Serial.print("mod_1_");
                     Serial.println(j);
                     break;    
              case 42:
                     
                     Serial.print("mod_1_");
                     Serial.println(j);
                     break;
              case 43:
                     
                     Serial.print("mod_1_");
                     Serial.println(j);
                     break;           */
             }
              
              j=0;  //redefine la variable para que no se quede con el último valor leído
  }
  lasttouched1 = currtouched_mod1; // resetea el estado de los pines touch
     // lasttouched2 = currtouched_mod2; // resetea el estado de los pines touch
     // lasttouched3 = currtouched_mod3; // resetea el estado de los pines touch
      return;
  
  }

  
  
