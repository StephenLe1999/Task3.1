int analogSensor = A0;
int measuredDistance;
char Distance[5];


void setup() {
    pinMode(analogSensor, INPUT);
}

void loop() {
    measuredDistance = analogRead(analogSensor);
    sprintf(Distance, "%d", measuredDistance);
    Particle.publish("Distance", Distance, PRIVATE);
    delay(30000);
}