# Drip Irrigation System (with LoRa)

An Arduino-based drip irrigation system using **LoRa** communication to wirelessly monitor sensors and control irrigation from a central unit. Ideal for remote or large-scale agriculture where Wi-Fi or GSM is unavailable.

## 📌 Overview

The system includes two main parts:

- **Sensor Node**: Reads environmental data and water tank level.
- **Controller Node**: Receives sensor data via LoRa and activates the water pump accordingly.

## 🔧 Hardware Components

| Component | Description |
|----------|-------------|
| OKD-1052P | Water Level Sensor (detects water presence) |
| Mini Submersible Water Pump | 80-100 L/H, controlled via relay |
| DHT22 (AM2302) | Temperature and Humidity Sensor |
| Arduino Uno / Nano | Microcontrollers for nodes |
| LoRa Module | e.g., SX1278 or RA-02 for communication |
| Relay Module | To switch the pump on/off |
| Breadboard, Wires, Power Supply | Miscellaneous hardware |

## 📂 Arduino Scripts

| File | Role |
|------|------|
| `water_level.ino` | Sensor node: Reads water level and sends data via LoRa |
| `dht22_monitor.ino` | Sensor node: Reads temperature and humidity and sends data via LoRa |
| `pump_auto_control.ino` | Controller node: Receives data and activates pump via relay |

> You can combine `water_level.ino` and `dht22_monitor.ino` into one script if using a single sensor node.

## 📡 How LoRa is Used

- The **Sensor Node** transmits data using LoRa.
- The **Controller Node** receives the data and decides whether to turn the pump on/off.
- This architecture supports **long-range communication** with **low power consumption**, ideal for farms and remote installations.

## 🔄 Workflow

1. Sensor node measures temperature, humidity, and water level.
2. Sends data via LoRa to the controller node.
3. Controller checks data and turns the pump ON if:
   - Temperature/humidity are below threshold
   - Water is available
4. Pump runs for a defined time or until a condition is met.

## 📈 Possible Enhancements

- Add soil moisture sensor for more accurate irrigation control.
- Use multiple sensor nodes in different parts of a field.
- Add OLED display for local monitoring.
- Integrate data logging via SD card or remote dashboard.

## 📝 License

This project is open-source under the MIT License.
