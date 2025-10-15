#include <SoftwareSerial.h>

// Піни для підключення Bluetooth HC-05
// HC-05: TX → D10, RX → D11 (через дільник напруги!)
SoftwareSerial BT(10, 11); // RX, TX

// Пін для реле (лампи)
const int relayPin = 2;

void setup() {
    pinMode(relayPin, OUTPUT);
    digitalWrite(relayPin, LOW);

    Serial.begin(9600);
    BT.begin(9600);

    Serial.println("SmartLamp ready. Commands: ON, OFF, TOGGLE, STATUS");
    BT.println("SmartLamp ready. Commands: ON, OFF, TOGGLE, STATUS");
}

void loop() {

    if (BT.available()) {
        String cmd = BT.readStringUntil('\n');
        cmd.trim();
        cmd.toUpperCase();

        Serial.print("Received: ");
        Serial.println(cmd);

        if (cmd == "ON") { //  Включити
            digitalWrite(relayPin, HIGH);
            BT.println("Lamp turned ON");
            Serial.println("Lamp turned ON");
        }
        else if (cmd == "OFF") { //  Виключити
            digitalWrite(relayPin, LOW);
            BT.println("Lamp turned OFF");
            Serial.println("Lamp turned OFF");
        }
        else if (cmd == "TOGGLE") { //  Змінює стан лампи на протилежний
            int state = digitalRead(relayPin);
            digitalWrite(relayPin, !state);
            BT.print("Lamp toggled to ");
            BT.println(!state ? "ON" : "OFF");
            Serial.print("Lamp toggled to ");
            Serial.println(!state ? "ON" : "OFF");
        }
        else if (cmd == "STATUS") { // Повідомляє про поточний стан лампи.
            BT.print("Lamp is ");
            BT.println(digitalRead(relayPin) ? "ON" : "OFF");
        }
        else {
            BT.println("Unknown command. Use: ON, OFF, TOGGLE, STATUS");
        }
    }
}
