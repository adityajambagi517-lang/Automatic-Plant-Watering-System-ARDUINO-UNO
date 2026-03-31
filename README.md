🌱 Automatic Plant Watering System
📌 Project Overview
This project is an Automatic Plant Watering System that irrigates plants based on real-time environmental conditions. It uses multiple sensors to monitor soil moisture, water availability, rainfall, and temperature, ensuring efficient and smart watering.

🎯 Objective
Automate plant watering

Reduce manual effort

Prevent overwatering and water wastage

Improve plant health

🔧 Components Used
🧠 Controller
Arduino Uno

📡 Sensors
Soil Moisture Sensor (YL-69)

Water Level Sensor (Digital)

Rain Sensor (YL-83)

DHT11 Temperature & Humidity Sensor

⚡ Output
5V Relay Module (LOW trigger)

12V DC Water Pump

🔋 Power Supply
12V Battery (for pump)

USB (for Arduino)

🔩 Other Components
Jumper wires

Breadboard

Diode (1N4007 for protection)

⚙️ Working Principle
Soil moisture sensor checks if soil is dry

Water level sensor ensures water is available

Rain sensor detects rainfall

DHT11 monitors temperature and humidity

If all conditions are satisfied:

Relay turns ON

Pump starts watering

Once soil becomes wet or rain is detected:

Pump turns OFF

🔌 Circuit Description
Sensors are connected to Arduino input pins

Relay is connected to Arduino output pin

Pump is connected through relay using 12V supply

Common ground is maintained across all components

Diode is used across pump for protection

💻 Software Used
Arduino IDE

Embedded C (Arduino programming)

🚀 Features
Fully automatic irrigation

Multi-sensor decision system

Water conservation

Fault prevention using rain and water level detection

⚠️ Safety Precautions
Do not connect 12V directly to Arduino

Always use relay for pump control

Ensure common ground connection

Use diode across pump to avoid voltage spikes

🎓 Applications
Home gardening

Agriculture fields

Smart irrigation systems

Greenhouses

📊 Conclusion
This project demonstrates an efficient and cost-effective solution for automated irrigation using sensor-based monitoring. It reduces human effort and ensures optimal water usage.

