/*
   -- New project --
   
   This source code of graphical user interface 
   has been generated automatically by RemoteXY editor.
   To compile this code using RemoteXY library 3.1.10 or later version 
   download by link http://remotexy.com/en/library/
   To connect using RemoteXY mobile app by link http://remotexy.com/en/download/                   
     - for ANDROID 4.13.1 or later version;
     - for iOS 1.10.1 or later version;
    
   This source code is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.    
*/

//////////////////////////////////////////////
//        RemoteXY include library          //
//////////////////////////////////////////////

// you can enable debug logging to Serial at 115200
//#define REMOTEXY__DEBUGLOG    

// RemoteXY select connection mode and include library 
#define REMOTEXY_MODE__SOFTSERIAL
#include <SoftwareSerial.h>


// RemoteXY connection settings 
#define REMOTEXY_SERIAL_RX 1
#define REMOTEXY_SERIAL_TX 0
#define REMOTEXY_SERIAL_SPEED 9600


#include <RemoteXY.h>

// RemoteXY configurate  
#pragma pack(push, 1)
uint8_t RemoteXY_CONF[] =   // 106 bytes
  { 255,3,0,0,0,99,0,17,0,0,0,31,1,106,200,1,1,6,0,2,
  58,14,40,12,0,2,26,31,31,79,78,0,79,70,70,0,129,9,15,22,
  9,17,76,101,100,32,49,0,129,8,45,22,9,17,76,101,100,32,50,0,
  129,8,70,30,12,17,76,101,100,32,51,0,2,56,41,44,14,0,2,26,
  31,31,79,78,0,79,70,70,0,2,53,68,47,13,0,2,26,31,31,79,
  78,0,79,70,70,0 };
  
// this structure defines all the variables and events of your control interface 
struct {

    // input variables
  uint8_t switch_01; // =1 if switch ON and =0 if OFF
  uint8_t switch_02; // =1 if switch ON and =0 if OFF
  uint8_t switch_03; // =1 if switch ON and =0 if OFF

    // other variable
  uint8_t connect_flag;  // =1 if wire connected, else =0

} RemoteXY;
#pragma pack(pop)
 
/////////////////////////////////////////////
//           END RemoteXY include          //
/////////////////////////////////////////////



void setup() 
{
  RemoteXY_Init (); 
  
  
  // TODO you setup code
  
}

void loop() 
{ 
  RemoteXY_Handler ();
  
  
  // TODO you loop code
  // use the RemoteXY structure for data transfer
  // do not call delay(), use instead RemoteXY_delay() 


}
