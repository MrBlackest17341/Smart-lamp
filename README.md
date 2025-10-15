# 💡 SmartLamp – Bluetooth Lamp Control

The **SmartLamp** project allows you to control a lamp using a **Bluetooth HC-05 module** and an Arduino. It supports commands to turn the lamp ON, OFF, toggle its state, and check its current status.

---

## 🔧 Hardware Components

- Arduino Uno / Nano / Mega  
- 5V Relay for lamp control  
- Bluetooth HC-05 module  
- Lamp (connected through the relay)  
- Connecting wires (plug)

---

## 🧰 Required Software

To use SmartLamp, you need the following software and drivers:

### 💻 1. Arduino IDE
Used to write, compile, and upload the sketch to the Arduino board.  

🔗 Download: [https://www.arduino.cc/en/software](https://www.arduino.cc/en/software)

---

### 🧩 2. Arduino USB Driver
Required if your computer does not recognize the Arduino board:

- **CH340 (common clones):**  
  🔗 [https://sparks.gogo.co.nz/ch340.html](https://sparks.gogo.co.nz/ch340.html)

- **CP2102 (some Nano and ESP boards):**  
  🔗 [https://www.silabs.com/developers/usb-to-uart-bridge-vcp-drivers](https://www.silabs.com/developers/usb-to-uart-bridge-vcp-drivers)

After installing the driver, make sure the board is detected in Arduino IDE under **Tools → Port**.

---

### 📱 3. Mobile App
To control the lamp via Bluetooth from your phone, install a Serial Bluetooth Terminal app:

- **Android:**  
  🔗 [https://play.google.com/store/apps/details?id=de.kai_morich.serial_bluetooth_terminal](https://play.google.com/store/apps/details?id=de.kai_morich.serial_bluetooth_terminal)

- **iOS (alternative, e.g., Bluetooth Serial Controller):**  
  🔗 [https://apps.apple.com/us/app/bluetooth-serial-controller/id1462836883](https://apps.apple.com/us/app/bluetooth-serial-controller/id1462836883)


---

## ⚡ Wiring

### Bluetooth HC-05:

| HC-05 | Arduino |
|-------|---------|
| TX    | D10 |
| RX    | D11 |

### Relay:

| Relay | Arduino |
|-------|---------|
| IN    | D2      |
| VCC   | 5V      |
| GND   | GND     |

> ⚠️ Warning: Make sure to use a suitable relay for your AC/DC network when connecting the lamp.

## Circuit Diagram

<img width="799" height="594" alt="Smart-Lamp" src="https://github.com/user-attachments/assets/9e465326-edfd-4792-9106-0a8a21f25a71" />

---

## 💻 Uploading the Sketch

1. Connect the Arduino to your computer via USB.  
2. Open the `Smart-lamp.ino` file in Arduino IDE.  
3. Select the **correct board** and **port**.  
4. Click **Upload**.  

---

## 📡 Bluetooth Commands

### First, you need to do the following steps:
1. Enable Bluetooth on your phone.  
2. Pair with the **HC-05 module** (default password: `1234` or `0000`).  
3. Open the Serial Bluetooth Terminal app.  
4. Enter commands: `ON`, `OFF`, `TOGGLE`, `STATUS` and view the responses.

| Command   | Action                                           |
|-----------|--------------------------------------------------|
| `ON`      | Turns the lamp ON                                |
| `OFF`     | Turns the lamp OFF                               |
| `TOGGLE`  | Switches the lamp to the opposite state          |
| `STATUS`  | Reports the current state of the lamp            |

---

## 📝 Example Output

![Example Video](https://github.com/user-attachments/assets/118490be-6e33-466d-a502-3b3ced9fc31f)

---

## ⚠️ Disadvantages / Limitations

Although the SmartLamp project works well as a Bluetooth-controlled light, it still has several drawbacks and areas for improvement:

1. **Power requirement for Arduino** –  
   The Arduino board must always be powered separately (via USB or an external 5V adapter).  
   This increases the total power consumption compared to a simple lamp.

2. **Relay noise and delay** –  
   Mechanical relays can produce clicking sounds and have a short switching delay.  
   Solid-state relays (SSR) or MOSFET-based modules would make switching silent and faster.

3. **Limited Bluetooth range** –  
   HC-05 provides a range of about 10 meters indoors.  
   Walls or interference may significantly reduce signal quality.

4. **No manual control** –  
   If the Bluetooth connection fails, the lamp can only be controlled by sending commands via Arduino’s serial interface.

5. **No real-time clock or automation** –  
   The lamp cannot yet be scheduled to turn on/off automatically or respond to conditions (e.g., daylight, motion, etc.).

6. **Requires smartphone app** –  
   A Serial Bluetooth Terminal app must be installed to send commands.  
   Without it, controlling the lamp is not possible.

---

## 🚀 Future Improvements / Upgrades

To make SmartLamp more powerful, flexible, and user-friendly, the following improvements can be added:

1. **Wi-Fi control (ESP8266 / ESP32)** –  
   Allow remote access through the Internet or local network (using a web interface or smartphone app).

2. **Mobile app integration** –  
   Develop a dedicated Android/iOS app with buttons instead of text commands.

3. **Power optimization** –  
   Use sleep modes or external 5V converters to reduce energy consumption.

4. **Charging module integration** –  
   Add a Li-ion battery and charging circuit for portable or backup operation.

5. **Design improvement** –  
   Build a compact enclosure with an LED indicator and physical power button.  
   This will make the system look more professional and safe for everyday use.

6. **Voice or cloud assistant support** –  
   Integrate with Alexa, Google Assistant, or Telegram bot for remote voice control.

---

💡 *With these upgrades, SmartLamp can evolve from a simple Bluetooth project into a fully functional smart lighting system!*

*(If I find the time 😄)*
