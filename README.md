# 📢 Wireless Electronic Notice Board using ESP32  
A web-controlled, real-time message display system for public, corporate, and educational use.

---

## 🧠 Overview

This project merges **IoT** and **embedded systems** to build a **Wireless Electronic Notice Board**. Powered by the **ESP32 microcontroller**, this system allows users to remotely update and manage notices via a **web-based interface**. It enhances the accessibility, scalability, and usability of traditional notice boards by enabling real-time content updates without manual intervention.

Ideal for deployment in **offices, schools, public spaces**, and **information kiosks**, the system provides a simple and cost-effective solution for modern communication needs.

---

## 🚀 Features

- 🌐 **Remote Control**: Update notices from anywhere via the ESP32-hosted web server  
- 💬 **Real-Time Messaging**: Instant display of new messages without reset or reprogramming  
- 🔌 **Low-Power Operation**: Designed for energy efficiency using ESP32 sleep modes  
- 📡 **Wireless Communication**: Wi-Fi-based control with optional offline fallback  
- 📟 **LCD Support**: Messages are displayed on a 16x2 LCD screen using I2C interface

---

### 🔧 Key Components

- **ESP32 Microcontroller**  
  - Hosts the embedded web server  
  - Connects to Wi-Fi for remote access  
  - Drives the LCD display and manages I2C communication  

- **I2C Converter Module**  
  - Ensures voltage level compatibility between ESP32 (3.3V) and LCD (5V)  

- **16x2 LCD Display with I2C Interface**  
  - Displays the messages in real-time  
  - Connected to ESP32 via I2C bus  

- **Embedded Web Server**  
  - Built using ESP32's Wi-Fi library  
  - Allows users to enter messages via browser  
  - Sends updates to display module dynamically  

---
