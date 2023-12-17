/***************************************************************
   Motor driver function definitions - by James Nugen
   *************************************************************/

#ifdef L298_MOTOR_DRIVER
  #define RIGHT_MOTOR_BACKWARD 1
  #define LEFT_MOTOR_BACKWARD  4
  #define RIGHT_MOTOR_FORWARD  9
  #define LEFT_MOTOR_FORWARD   10
  #define RIGHT_MOTOR_ENABLE 12
  #define LEFT_MOTOR_ENABLE 13
#endif



#ifdef BTS7960_MOTOR_DRIVER
  #define L_EN_PIN    2   // Pin number for left enable
  #define R_EN_PIN   3   // Pin number for right enable
  #define L_PWM_PIN   5   // Pin number for left PWM
  #define R_PWM_PIN  6   // Pin number for right PWM
#endif

void initMotorController();
void setMotorSpeed(int i, int spd);
void setMotorSpeeds(int leftSpeed, int rightSpeed);
