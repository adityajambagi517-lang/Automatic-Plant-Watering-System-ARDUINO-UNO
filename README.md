# 🌱 Automatic Plant Watering System

## 📌 Project Overview
This project is an Automatic Plant Watering System that irrigates plants based on real-time environmental conditions using multiple sensors and Arduino.

---

## 🎯 Objective
- Automate plant watering  
- Reduce manual effort  
- Prevent water wastage  
- Improve plant health  

---

## 🔧 Components Used

### 🧠 Controller
- Arduino Uno

### 📡 Sensors
- Soil Moisture Sensor (YL-69)  
- Water Level Sensor (Digital)  
- Rain Sensor (YL-83)  
- DHT11 Temperature & Humidity Sensor  

### ⚡ Output
- 5V Relay Module (LOW trigger)  
- 12V DC Water Pump  

### 🔋 Power Supply
- 12V Battery (Pump)  
- USB (Arduino)

### 🔩 Other Components
- Breadboard  
- Jumper wires  
- Diode (1N4007)

---

## ⚙️ Working Principle

1. Soil moisture sensor detects dryness  
2. Water level sensor checks tank status  
3. Rain sensor detects rainfall  
4. DHT11 checks temperature & humidity  
5. If conditions are satisfied:
   - Relay turns ON  
   - Pump starts  
6. Pump stops when:
   - Soil becomes wet OR  
   - Rain is detected  

---

## 🔌 Circuit Description
- Sensors → Arduino input pins  
- Relay → Arduino output pin  
- Pump → Connected via relay with 12V supply  
- Common ground maintained  
- Diode used for protection  

---

## 💻 Software Used
- Arduino IDE  
- Embedded C  

---

## 🚀 Features
- Automatic irrigation  
- Multi-sensor system  
- Water saving  
- Reliable and cost-effective  

---

## ⚠️ Safety Precautions
- Do NOT connect 12V to Arduino  
- Use relay for pump control  
- Maintain common ground  
- Use diode across pump  

---

## 🎓 Applications
- Home gardening  
- Agriculture  
- Smart irrigation  
- Greenhouses  

---

## 📊 Conclusion
This system provides an efficient and automated solution for plant watering, reducing manual effort and conserving water.
