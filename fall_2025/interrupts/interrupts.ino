#define BTN 2

bool do_moo = false;
bool bounce = false;
void IRAM_ATTR btn_int_1();
void IRAM_ATTR debounce();

void setup() {
  // put your setup code here, to run once:
  pinMode(BTN, INPUT_PULLDOWN);
  Serial.begin(115200);
  while(!Serial) delay(1);
  Serial.println("Hello world!");
  attachInterrupt(digitalPinToInterrupt(BTN),btn_int_1,CHANGE);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  if (!bounce) {
    if (do_moo)
    {
      Serial.println("MOOOOOOOOOOOOOOOOOOOOO");
      Serial.println("MOOOOOOOOOOOOOOOOOOOOO1");
      Serial.println("MOOOOOOOOOOOOOOOOOOOOO2");
      Serial.println("MOOOOOOOOOOOOOOOOOOOOO3");
      Serial.println("MOOOOOOOOOOOOOOOOOOOOO4");
      Serial.println("MOOOOOOOOOOOOOOOOOOOOO5");
      do_moo = false;
    }
  }
  else
  {
    bounce = false;
  }
}

void IRAM_ATTR debounce()
{
  bounce = true;
}
void IRAM_ATTR btn_int_1()
{
  do_moo=digitalRead(BTN);
  bounce=!do_moo;
  /*
  Serial.println("MOOOOOOOOOOOOOOOOOOOOO");
  Serial.println("MOOOOOOOOOOOOOOOOOOOOO");
  Serial.println("MOOOOOOOOOOOOOOOOOOOOO");
  Serial.println("MOOOOOOOOOOOOOOOOOOOOO");
  Serial.println("MOOOOOOOOOOOOOOOOOOOOO");
  Serial.println("MOOOOOOOOOOOOOOOOOOOOO");
  */
}