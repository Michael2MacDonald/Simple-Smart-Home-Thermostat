# Ideas

## Interface

- Provide a local website to control/configure the thermostat
  - Basic but powerful schedule programming
    - Many Presets
    - Set using 
- E-Ink Display
  - Temp
    - Inside Temp
    - Set Temp
    - Outside Temp
    - Temp history graph
  - State
    - Fan State
    - Heat/Cool State
    - On/Off State
    - Current Control method (Manual/Hold, Internal Schedule, External Automation/Control)
- Encoder?
- Basic buttons
  - Master On/Off (Hold to lock-out all control inputs from schedules or external automations)
  - Heat/Cool/Auto
  - Fan On/Off/Auto
  - Nav Up / Temp Up
  - Select
  - Nav Down / Temp Down

## Sensors

- Temperature
- Humidity
- CO2 And CO
- VOC
- PM2.5 And PM10
- Ambient Light
- mmWave Presence Detection (Optionally Motion Detection)

## Connectivity

- Wifi (Wifi 6?)
- Bluetooth
- ZigBee
- Thread
- Ethernet
- NFC
- Protocols
  - MQTT
  - Rest API
  - Matter
  - SNMP??

## Behavior

- Utilize local forecast to automatically set heat/cool and temp
- Suggest opening a window (or trigger automations) if the outside temp is close to the set thermostat temp
- Detect if a window or door is open and disable the heat/AC
- Detect degradation of temp rise/fall to identify a clogged filter or service required

## Hardware

- RTC
- 24VAC
- ESP32-C6

## Other

- Offline Mode (hard switch/button) to temporarily disable all connectivity
- OTA update
- Can be integrated into a home automation system (such as Home Assistant)
- Cloud connection not required
- Explicit enable/disable of internet features
- Allow ssh login??
- Provide diagnostic logging (rsyslog as well?)
- email list / SMS for notifications?
- Seasonal Energy Reports, On Time Reports, Temperature Logging/history, Temperature Swing Reports
- Allow HA to send power/gas usage metrics to the thermostat so it can display the current monthly cost/spending


```
             ┌──────────────────────────────────────────────────────────────────────────────────────────────────────┐
             │                                                                                                      │
  Up         │                                                                                                      │
┌─────┐      │   ┌───────────┐    ┌───────────┐  ┌──────────────────────────────────────────────────────────────┐   │
│     │      │   │   Set     │    │  Current  │  │                                                              │   │
│     │      │   │   Temp    │    │   Temp    │  │  Humidity/VOC/PM10/PM2.5/Etc                                 │   │
└─────┘      │   │           │    │           │  │                                                              │   │
             │   └───────────┘    └───────────┘  └──────────────────────────────────────────────────────────────┘   │
┌─────┐      │                                                                                                      │
│ Sel │      │                                                                                                      │
│     │      │                                                                                                      │
└─────┘      │  ┌───────────────────────────────────────────────────────────┐ ┌──────────────────────────────────┐  │
             │  │                                                           │ │                                  │  │
┌─────┐      │  │                                                           │ │                                  │  │
│     │      │  │                                                           │ │                                  │  │
│     │      │  │                                                           │ │                                  │  │
└─────┘      │  │                   Temp Graph                              │ │         Forecast                 │  │
 Down        │  │                                                           │ │                                  │  │
             │  │                                                           │ │                                  │  │
             │  │                                                           │ │                                  │  │
             │  │                                                           │ │                                  │  │
             │  └───────────────────────────────────────────────────────────┘ └──────────────────────────────────┘  │
             │                                                                                                      │
             │                                                                                                      │
             │                                                                                                      │
             │          Fan           Mode                                                                          │
             │                                                                                                      │
             │      Auto/On/Off  Heat/Cool/Auto                                                                     │
             └──────────────────────────────────────────────────────────────────────────────────────────────────────┘
                       ┌───┐         ┌───┐                                                                           
                       │   │         │   │                                                                           
                       └───┘         └───┘                                                                           
```

