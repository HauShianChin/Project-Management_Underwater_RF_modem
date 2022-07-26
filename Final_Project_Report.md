# Final Project Report

**Project _18_:** _Underwater Modem Report_<br>
**Client:** Alvin Valera<br>
**Date:** 10 October 2021<br>

## Project Objective(s)

The objective of this project is to successfully allow wireless communication of data between two underwater points/modems, where the data can be retrieved from one of the modems. Goals includes a 10m communication range at 5m depth, saving data onto SD card allowing the client to retreive data easily and at a 2 week battery life. 

## Summary of Project Results

The project did not reach the minimum viable product, as we could not verify that the device can function at 5m+ depth and is capable of water to water communication of at least 10 metres. We did also not verify a battery life of at least two weeks. We did however make significant progress towards this goal: water to air communication has been tested and verified at a distance of at least 10 meters, and the devices waterproofing was determined to be safe to 1m of depth. The battery life was determined to last up to 3 days with continuous use, this may have satisfied the 2 week battery life if the duty cycle was implemented however we could not verify this. We did successfully fulfill one of the requirements to get data transmissions saved to the devices internal memory (SD card).


## Original and Delivered Scope

Original scope was to transmit data underwater wirelessly at a range of 20m at a depth of about 5m. The battery should last about 2 weeks and is low powered/frequency. The delivered project can transmit data in AIR by at least 50m (Stable), communicate water to air by at least 2m at a range of around 10m+. Features that weren’t implemented (Or assumed due to time constraints with testing) were the:
- 5m depth water to water communication: Unknown as testing wasn’t possible due to time constraints.
- 2 weeks battery life: Original idea to use power bank failed as power bank couldn’t detect Arduino on state (Current draw too low, power bank would switch off). Using current implementations to boost battery life is to implement sleep states for modules to save power and reduce power drastically. Time constraints also caused not enough time to implement this feature.
- Low frequency: NRF905 was the intended transceiver but multiple tests failed when trying the test stability and range, only achieve 5cm maximum range with no stability at all. NRF24L01 worked as intended in tests.
If project is picked up by others, they would have to do more extensive testing for water-to-water communication to determine next steps (Continue using NRF24L01 or not).

## Original and Actual Schedule

Original Timeline:

- Sprint 1: Put hardware together
- Sprint 2: Create skeleton code, test waterproofing
- Sprint 3: Finish sending and receiving data
- Sprint 4: Test range of modules
- Sprint 5: Finalise testing
- Sprint 6: Implement extra features, presentation

Actual Timeline:
- Sprint 1: Covid lockdown
- Sprint 2: Putting hardware together, test waterproofing (Covid lockdown affected progress)
- Sprint 3: Putting hardware together, skeleton code being created (Covid lockdown affected progress). STM32 dropped, used Arduino instead
- Sprint 4: NRF905 testing dropped, code redone
- Sprint 5: Introduced NRF24L01, create and finalise code. Hardware completed, testing in progress
- Sprint 6: Testing complete for air-to-air, water-to-air, stable range communication. Water testing complete up to around 2m depth.


## Delivered Expenditure

$318.80 against original $290.97. Deviation created due to replacing NRF905 with NRF24L01 and STM32 with Arduino.


## Project Self-Assessment

Given these circumstances:
-	Aptamer sensor removed due to provider’s company going into liquidation.
-	Team member dropped from course.
-	Team member overseas, with hardware focused project.
-	Covid lockdown.

We believe our team created a product that although it did not satisfy the MVP was substantial progress towards it given the  modules can communicate wirelessly with transmitting data and saving it on the receiver’s SD card. Expectations were drastically decreased due to listed issues that appeared overtime, with losing team members and lockdown being a substantial setback to progress.


## Lessons Learned

A lesson Group 18 learned was to make compromises to the project in order to deliver a final product. Furthermore, this includes switching out ideal modules for practical ones. Although a low frequency transmitter (nrf905) allowed for greater range and theoretically has more advantages underwater (submarine technology). The external libraries for the low frequency module lacked documentations which resulted in harder implemention. As a result, We switched it out for a more practical module (nrf24L01) which has more documentations. 

A second lesson Group 18 learned was to redistribute work when other members are absent. Workloads will now be balanced in a way that allows team members to compensate for one another. Team members who are better at technical work might be able to do more technical work, while a member who is better organized would be able to focus more on project management. In addition, this helped the team to deliver the final project as each member was able to complete each task to a high level.

Finally, the last lesson Group 18 has learned is to keep back up modules in case one fails. In the event of a module failure in the future, the team will have more options to choose from. Additionally, this will prevent the team from stagnating at a certain sprint because more options can be explored. Consequently, this would make the project progress more quickly.


## Procurement Summary

The parts that we used for our project are outlined in our architecture design document, as well as the price and source for these components. Code used for our project is included in the repository under "code."

---
