/* Private typedef -----------------------------------------------------------*/
typedef enum {HIGH = 1, LOW = !HIGH} out_staus;
typedef enum {NORMAL = 0, LOCK = 1, UNLOCK = 2} state_input;
/* Private define ------------------------------------------------------------*/

#define OUT_PORT 			(GPIOD)
#define OUT_A_PIN   		(0x04)    //Lock control 
#define OUT_B_PIN   		(0x08)    //Unlock control
#define turn_on(pin)		(OUT_PORT->ODR |= pin)
#define turn_off(pin)		(OUT_PORT->ODR &= ~pin)