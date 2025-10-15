# 💡 SmartLamp – Bluetooth Lamp Control 
(It's fun prodject +_+)

The **SmartLamp** project allows you to control a lamp using a **Bluetooth HC-05 module** and an Arduino. It supports commands to turn the lamp ON, OFF, toggle its state, and check its current status.

---

## 🔧 Hardware Components

- Arduino Uno / Nano / Mega  
- 5V Relay for lamp control  
- Bluetooth HC-05 module  
- Lamp (connected through the relay)  
- Connecting wires (plug)

---

## ⚡ Wiring

### Bluetooth HC-05:

| HC-05 | Arduino |
|-------|---------|
| TX    | D10 (via voltage divider) |
| RX    | D11 |

### Relay:

| Relay | Arduino |
|-------|---------|
| IN    | D2      |
| VCC   | 5V      |
| GND   | GND     |

> ⚠️ Warning: Make sure to use a suitable relay for your AC/DC network when connecting the lamp.

### Circuit Diagram
<img width="1027" height="766" alt="Smart-Lamp" src="https://github.com/user-attachments/assets/63cd082d-1f2c-4231-9979-23bad69d6d6e" />

---

## 📡 Bluetooth Commands

| Command   | Action                                           |
|-----------|--------------------------------------------------|
| `ON`      | Turns the lamp ON                                |
| `OFF`     | Turns the lamp OFF                               |
| `TOGGLE`  | Switches the lamp to the opposite state         |
| `STATUS`  | Reports the current state of the lamp           |

---

## 💻 Uploading the Sketch

1. Connect the Arduino to your computer via USB.  
2. Open the `Smart-lamp.ino` file in Arduino IDE.  
3. Select the **correct board** and **port**.  
4. Click **Upload**.  

---


![Example Screenshot](https://github.com/user-attachments/assets/118490be-6e33-466d-a502-3b3ced9fc31f)

---

## 🔮 Future Improvements

1. Add a charging module  
2. Add Wi-Fi control using ESP  
3. Improve the design  

*(If I find the time 😄)*

---

