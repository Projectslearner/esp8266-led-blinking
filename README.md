# ESP8266 LED Blinking Project

#### Project Overview
This project demonstrates how to blink an LED using an ESP8266 microcontroller. The LED connected to GPIO pin D1 is programmed to turn on and off at intervals, creating a blinking effect.

#### Components Needed
- **ESP8266 Microcontroller**
- **LED**
- **Resistor (if necessary for the LED)**
- **Jumper Wires**
- **Power Supply**

#### Circuit Setup
1. **Connecting LED to ESP8266:**
   - Connect the cathode (short leg) of the LED to GPIO pin D1 (or any GPIO pin of your choice).
   - Connect the anode (long leg) of the LED to a current-limiting resistor (if required) and then to ground.

#### Instructions
1. **Setup:**
   - Open the Arduino IDE with ESP8266 board support installed.
   - Create a new sketch and paste the provided Arduino code.
   - Connect the ESP8266 to your computer, select the appropriate board and port from the Tools menu.
   - Upload the code to the ESP8266.

2. **Testing:**
   - After uploading the code, observe the LED connected to pin D1.
   - The LED should blink on for 1 second and then off for 1 second repeatedly.

#### Applications
- **Indicator Lights:** Use for status indication in projects.
- **Basic Output Control:** Learn how to control digital outputs with the ESP8266.
- **Educational Projects:** Ideal for beginners learning microcontroller programming.

#### Notes
- **LED Polarity:** Ensure the correct orientation of the LED (cathode to ground, anode to GPIO pin).
- **Resistor:** Use a resistor to limit current if the LED requires it to prevent damage.
- **Delay Function:** Adjust the `delay()` function duration to change the blinking interval of the LED.

---

#### Useful Links
🌐 [ProjectsLearner - ESP8266 LED Blinking](https://projectslearner.com/learn/esp8266-led-blinking)  
📧 [Email](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)

Crafted for you with ❤️ from ProjectsLearner