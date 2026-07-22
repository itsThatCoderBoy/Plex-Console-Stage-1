---
title: "HyperPlex Console"
author: "itsThatCoderBoy"
description: "A small handheld game console with a Charlie-Plexed LED screen powered by a small Risc-V processor devboard."
created_at: "2026-03-20"
---

# July 21 - Created Journal, Did Research, Started Schematic

Through research, I've found that I can use the MounRiver Studio IDE for programming the chip I am going to be using, the CH32V203C8T6. I already picked out components I am going to be using.
This has definitely been a lot more looking at datasheets than I expected lol. So far it's going very well, I have the Filter, Charger, and PSU for the charger designed in schematic.
Currently working on the devboard that will attach to the console, the idea is basically a swap-out system where you can attach the devboard onto various modules, the first of which will be the game console.
Bruh I just spent like 45 minutes on making a 5v power supply for the charger. The USB plug has to provide the power and it's already 5V :( Not a pro gamer move. Does mean there's one less thing to fit on the PCB!

TO-DO (Schematic):
 - LDO Filter :D
 - 5V Supply for Charger :D
 - Charger :D
 - Storage Unit
 - Pinout

** Total time spent: ~2.75 Hours **

![pcb layout](images/PCBSchemDay1.svg)


