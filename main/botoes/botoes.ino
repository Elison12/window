const byte botao1 = (1<<3); //11
const byte botao2 = (1<<1); //9

int main (void) {

    Serial.begin(9600);
    
    DDRB &= ~botao1;
    PORTB |= botao1;

    DDRB &= ~botao2;
    PORTB |= botao2;
  
    while (1) {
        if(!(PINB &botao1)) {
          Serial.println("p");
        }
        if(!(PINB &botao2)){
          Serial.println("c");
        }
    }
}
