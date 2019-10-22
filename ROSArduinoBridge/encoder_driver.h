long readEncoder(int i);
void resetEncoder(int i);
void resetEncoders();

//  //below can be changed, but should be PORTD pins; 
//  //otherwise additional changes in the code are
#define LEFT_ENC_PIN_A PD2  //pin 2
#define LEFT_ENC_PIN_B PD3  //pin 3
//  
//  //below can be changed, but should be PORTC pins
#define RIGHT_ENC_PIN_A PD21  //pin 21
#define RIGHT_ENC_PIN_B PD20  //pin 20

  
void initEncoders();
void encoderRightISR();
void encoderLeftISR();


