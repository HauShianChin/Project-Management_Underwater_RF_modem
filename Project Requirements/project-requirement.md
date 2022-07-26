# ENGR 301: Project Requirements Document

The aim of this document is to specify the requirements of the system your group is to build. The focus of a requirements document is the problem you are attempting to solve:  not a first attempt at a solution to that problem. This document should communicate clearly to the supervisor, client and course coordinator what the system you build is going to do, and what constraints it must meet while doing so.

The document should also demonstrate your understanding of the main analysis principles and quality guidelines, and applicable standards, using tools and notations as necessary to communicate the requirements precisely, unambiguously and clearly in a written technical document. Page specifications below are *limits not targets* and refer to the pages in the PDF generated from the markdown. Because the size of your document is necessarily limited, you should ensure that you focus your efforts on those requirements that are most important to completing a successful system: if sections are at their page limit, indicate how many items would be expected in a complete specification. 

The ENGR 301 project proposal and requirements document should be based on the standard ISO/IEC/IEEE 29148:2011(E), primarily sections 8.4 and 9.5, plus section 9.4 for projects involving hardware and ISO 25010 SQuaRE for systemic requirements. While excerpts from the standard have been quoted within the template, to understand what is required it will be necessary to read earlier sections of the standards themselves. A supplementary treatment of requirements gathering in engineering projects may be found in [Requirements in Engineering Projects](https://victoria.rl.talis.com/items/F166DA94-DAD8-FBDB-0785-7A63C9BA3603.html?referrer=%2Flists%2F5886F297-2506-1F17-45D9-7F04CEE284EE.html%23item-F166DA94-DAD8-FBDB-0785-7A63C9BA3603) (Talis). The requirements document should contain the sections listed below, and conform to the formatting rules listed at the end of this brief. 

All team members are expected to contribute equally to the document and list their contributions in section 6 of the document. You should work on your document in your team's GitLab repository. While collective contributions are expected to be the exception rather than the rule, if more than one team member has contributed to a particular commit then all those team member IDs should be included in the first line of the git commit message. `git blame`, `git diff`, file histories, etc. will be tools used to assess individual contributions, so everyone is encouraged to contribute individually, commit early and commit often. Any team wishing to separate individually contributed sections into a single file before collation into the single proposal document for submission is welcome to do so.

---

<div style="page-break-after: always;"></div>

# ENGR 301 Project 18 Project Proposal and Requirements Document
#### Author list.
Nathanael Pohl, Toby Giri, Jonathan Haydon, Jamie Reynolds, Hau Shian, Ali Alshumaimri

## 1. Introduction

### Client
Alvin Valera: alvin.valera@vuw.ac.nz  
* Senior Lecturer in Network Engineering, School of Engineering and Computer Science 

Jonathan Gardner: Jonathan.Gardner@vuw.ac.nz  
* Professor of Marine Biology School of Biological Sciences

### 1.1 Purpose
The purpose of this system is to enable the underwater communications between a network of modems. 
Also, aiming to develop a cost-effective modem that can facilitate wireless communication over nodes that are submerged in shallow water conditions

### 1.2 Scope
The hardware product being produced is an Underwater Modem. This will detect bacteria by putting probes/nodes in shallow water conditions where sensors will detect 'hits', sending data to a communication box. Project members will be dealing with the communications between modems and probes, not detecting the bacteria in the water.

The goal is to provide a more cost effective solution to acoustic modems and allow wireless underwater communication within a set distance, which will allow an easy method in collecting data about bacteria in a given location(s),  all without the use of acoustic modems. Benefits include saving a lot of time trying to retrieve bacterial data, as well as money for the client. 

The 2 models must be able to communicate with either acoustic signals or low frequency radio wave.  


### 1.3 Product overview 

#### 1.3.1 Product perspective
The outcome of this project will be an Underwater communications modem, with the purpose of transmitting recorded data from a underwater biological life sensory system. The modem is to function in unison with a larger system. This system includes a aptamer sensor, communication modem and a onland base station. 

The purpose of this system is to detect pollution levels within the estuary system. This system is set in the setiment of a an estuary over an extended period of time, the sensors utilises aptamer technology to detect forms a positve and negative bacterial life. The identification of a form of bacterial life and the quantity will give marine biologist a clear understanding of the pollution levels of the Estuary system. The aptamer will detect the presencse of a certain bacteria life communicating this infomation to the communication modem, the modem is then to transfer this data to a land base station, that will allow the researchers to read this data in real tme and be alerted if high quanities of a particular bacteria are detected.

![Imgur](https://i.imgur.com/V54pegD.png)

Two types of underwater probes, one tracking good and the other unhealthy estuary conditions each record 4 different types of bacteria characteristic of their respective estuary. These probes in turn send a signal to a main modem when a bacteria type is identified where it is forwarded onto the researchers. The system will have several of each type of probe communicating with one central modem.

#### 1.3.2 Product functions
Main functions of the modem is to directly communication between nodes/sensors placed in shallow water conditions. These nodes have 4 channels, where each one will detect 'hits' when certain bacteria is detected. The data will then be provided to the communication box, or modem, which will then relay information a given person(s) who can use the information for analysis.
The miniumum requirements for the product is to detect bacteria then relay information to a communication box/modem and have some sort of tracking equipped in case a node goes missing it can be found.

#### 1.3.3 User characteristics   
Potential users of this project are data analysts who will use the information provided to get a better understanding about what types of bacteria is within a certain area of water. This can also be used for private use, such as farmers who need it to detect types of bacteria on their land if shallow waters are involved.

#### 1.3.4 Limitations

* may edit

1. 20m range: Underwater nodes must have an effective range of approximately 20m.

2. Two week battery life: Battery power is limited as this project's aim is to be cost effective. 

3. duty cycle: Every 5 minutes a signal will be sent, afterwards it will be on standby for 10 minutes. Therefore 33% duty cycle will be used

4. Data inputs: 1 SPI input will be available for data transfer between the Aptamer sensor.

5. 16 bytes data rate: The maximum data transfer speed will be 16 bytes only.

6. 5m depth waterproof: The nodes will be able to function to at least 5 metres.

7. Node to node communication: The system will be able to send data between said node and another node underwater.

8. Failure: The system will fail if there is a water leak/malfunction. A sensor will be provided to ensure a safe shutdown if an issue occurs.

## 2. References  
PLEASE NOTE that the references used for wider general research and were not used as references for any particular section.

1.	H. Kopka and P. W. Daly, A Guide to LATEX, 3rd ed. Harlow, England: Addison-Wesley, 1999.
2.	APPLICON s.r.l., “Low-Cost Underwater Modem for Shallow Water Communications.” Last time accessed: November 2014. [Online]. Available: http://www.applicon.it/SeaModem.html
3.	Texas Instruments, “TMS320C5000TMUltra-Low-Power DSPs .” Last time accessed: December 2014. [Online]. Available: http://www.ti.com/lsds/ti/dsp/c5000 dsp/overview.page
4.	BeagleBone Black, “Low-cost, community-supported development platform for developers and hobbyists.” Last time accessed: December 2014. [Online]. Available: http://beagleboard.org/black
5.	K. McCoy, “JANUS: From Primitive Signal to Orthodox Networks,” in Proceedings of the 3rd International Conference and Exhibition on Underwater Acoustic Measurements: Technologies & Results, ser. UAM2009, Nafplion, Greece, June 21–26 2009.
6.	J. R. Potter, J. ao Alve, D. Green, G. Zappa, I. Nissen, and K. McCoy, “The JANUS Underwater Communications Standard,” in Proceedings of IEEE UComms 2014, Sestri Levante, Italy, September, 3–5 2014.
7.	“JANUS wiki,” Last time accessed: December 2014. [Online]. Available: http://www.januswiki.org/tiki-index.php
8.	C. Petrioli, R. Petroccia, J. R. Potter, and D. Spaccini, “The sunset framework for simulation, emulation and at-sea testing of underwater wireless sensor networks,” Ad Hoc Networks and Physical Communication, Special Issue on Advances in Underwater Communications and Networks, 2014.
9.	SENSES Lab, “SUNSET: La Sapienza University Networking framework for underwater Simulation, Emulation and real-life Testing,” Last time accessed: July 2013. [Online]. Available: http://reti.dsi.uniroma1.it/UWSN Group/index.php?page=sunset
10.	BeagleBone Audio Cape, Last time accessed: December 2014. [Online]. Available: http://elinux.org/CircuitCo:Audio Cape RevB
11.	 W.W. Peterson and D.T. Brown,“Cyclic codes for error detection”, Proceedings of the IRE, Volume 49, pages 228-235, Jan 1961.
12.	P. Elias, “Coding for noisy channels,” IRE Conv. Rec., pt. 4, pages 3746, Mar 1955.
13.	A. J. Viterbi, “Error Bounds for Convolutional Codes and an Asymptotically Optimum Decoding Algorithm”, IEEE Transactions on Information Theory, Volume IT-13, pages 260-269, Apr 1967.



## 3. Specific requirements  

### 3.1 External interfaces
All External interfaces to the modem are to be handled by the on board MCU. 
#### Hardware interfaces
A hardware interface will exist between the modem and probe. This interface is expected to follow the $`I^{2}C`$ or $`SPI`$ protocol. The probe will transmit 8 bit packages of data to the MCU which the MCU must then intepret and prepare to send over the wireless protocol. 
#### Wireless interfaces
A wireless interface will exist between two modems to communicate together. This interface is expected to use low frequency RF communication. The wireless communication is expected to transmit data from the on board MCU pertaining to the status of the probe, time and location of the modem. 

### 3.2 Functional Attributes

1. Data transmission - The customer has specified that the system must transfer collected research data from one underwater system to another. Data that is collected will be transferred via radio waves to a receiver device. The challenge we face is communication through the water medium. Radio waves have difficulty operating through saltwater, the conductivity of the water weakens the signal. A higher frequency traveling through the medium will produce a weaker signal. Data will be sent through low-frequency radio waves, as this is a cost-effective device.  

2. Range of 20 meters maximum - The receiving of data after 30 seconds the data collected will be sent from the system to a receiver the maximum range required for data transmission was discussed at 20 meters. The client requires the system to be able to communicate from modem1 to modem2 over distances spanning an estuary system width, which was identified by the client as 20 meters.  

3. Record data - The Aptamer sensor device will have the capabilities of detecting multiple bacteria types, some bad and some good. When a form of bacteria is detected by a particular node this will be recorded, as more bacteria of that type are detected by the same node it will count and be recorded. This is an essential requirement of the device. This is the core of the clients' research the level of particular bacteria will indicate pollution levels of the estuary system. 


4. Data time stamps - As a packet of data is received from a system the time is recorded with the data set, this is a minimal function, this is important information for research purposes. 

5. Timer system -  A timer will be incorporated into the product after 30 seconds the modem will be activated to communicate with other devices and send the packet of data to the central station. This was discussed with the client due to battery life restraints. The client discussed a live update on pollution levels and considerations on power requirements resulted in a function of 30-second intervals of packet delivery. 

6. Live Updates - As data is received to the central base system on land, the data will be updated to the researchers of the site. This is a minimal requirement for the system. The clients' intention for this function is to allow an analysis of live data to be done off-site. 

7. Pollution-level alerts: The system when it has detected a large level of particular bacteria categorized as a pollutant it will communicate this information to the base station sending an alert to research members. This is not a critical function of the system, the client discussed this as a potential function that would allow researchers to act quickly to high levels of pollution that could cause environmental damage. 

8. GPS capabilities - Every period of 30 seconds when the data is transmitted a GPS location of the device will be updated and recorded. This is not a critical function of the system but was discussed by the client to allow for locating systems if they are swept away or lost in debree.

9. Loss of communication alert - System communicating with each other if a particular system is not responding an alert will be sent notifying researchers that a device has been swept out to sea or failed. 

10. Data storage - As a packet of data is received it is saved to a hard drive. This is not a minimal function as data is to be sent off-site 

11. Communicate with another system - When other systems are in proximity a modem will receive transmissions from other systems, identify the system, and communicate between multiple systems. This is not a critical function of the system, the client discussed this as a function for possible later development.

### 3.3 Usability Requirements

- System should be relatively easy to use respective to the method it intends to replace, some user training can be expected to operate the device safely. "Easy to use," in this context refers to the the system being usable by a person of a non-technical background effectively with only instructional material.

- Installation of the modem will require no technical knowledge 

### 3.4 Logical database requirements

Not applicable.

### 3.5 Design constraints

1. Data Type - The Aptamer sensors being developed by the VUW marine biology department will collect data of six different forms of bacteria . We our limited to the design based on the type of bacteria the Aptamer devices are designed to detect. 

2. Aptamer Sensor Device -  We are restricted to the design of connection ports from sensor to modem. The develpment of the sensor is yet to be completed, design is restricted to the outcome of the sensor product development.

3. Transmission method - The project is restricted to Radio Frequency signals. Other data transferring method are either to expensive or impact aquatic life negativly. 

4. Antenna - limitation to the antenna design were addressed by the client. The antenna must not extend far from the housing case due to concerns of floating debree contacting and damaging the system. 


### 3.6 Nonfunctional system attributes

- Durability - Device will remain submerged for extended periods of time, components and chassis should withstand external elements for an extended period of time in between scheduled routine maintance. The device should be designed to withstand light jostling with waves, and seasonal variances in water temperature.

- Effectiveness - System should be at least as an effective indicator of estuary degredation than the method it intends to replace: measuring indictors of estuary decay manually. The minimum in this case is that it be able to identify select types of bacteria, this is largely controlled by the probes themselves and the modem itself must only identify the corresonding signals from the probes correctly.

- Environment - Device is expected to operate underwater. This is covered in 3.7.

- Environmental protection - As device is situated in marine reserve it should not introduce any pollutants, or other hazardous material to the vicinity. The chassis may not introduce pollutants to the water through sitting in the water. Components contained within the chassis may be harmful if exposed to the outside of the chassis and must be isolated from the water.

- Serviceability - System is battery operated and should be easy to retrieve and change on site. In case of hardware failure, device should be easy to disassemble off site. The device and components should be modular and replaceable, specifically the SD card used as storage should be swappable to allow data to be processed off site if nesessary.

- Usability - Device should be easy to use respective of the method it intends to replace. This is covered in 3.3.

- Durability - Device will be submerged at site for an extended period (24+ hours) afterwards it will be inspected for any breakages/leakages, based on the level of wear and tear we can extrapolate this to the operational lifetime of the unit and determine whether this is satisfied.

### 3.7 Physical and Environmental Requirements 

#### Physical characteristics 
The system will be incased in a waterproof houseing, all electronic componantry will be situated inside this houseing. The aptamer sensor node must be situated in the estuary setiment so a node must be protruding from the housing. An antenna must not pretude above the water due to risk of damage cause by floating debree.
The system is to hold position within the sentiment this would involve a form of anchoring the system down. The system must be easy to identify for research staff also unassuming to the general public who have access to the site. 

To achieve this the design must be:
1. Waterproof:
    The main concern with this project is that any underwater components MUST be completely waterproof. All hardware must be sealed off using any sort of method to avoid having any amount of moisture/water into the system.
2. Longevity:
    We are expecting the probes to last at least one month before requiring maintenance. This can either be replacement of batteries or checking for any damages/wear
3. Location
    The modem must not move from the estuary that it will be located at. This would involve a form of anchoring the system down. The system must be easy to identify for research staff also unassuming to the general public who have access to the site.
4. Size:
    It would be ideal for the size of the modem to be small. The deployment of multiple modems would be made much faster if the size of the modem is small as the deployer could deploy more modems in one trip. 

#### Environmental Conditions

The client requires this system to function within an estuary system where the system is to be deployed underwater. An estuary is located at the junction of a river to the sea contains and contains mixutre of fresh and saltwater as the river meets the ocean so the water has a high level of salinity. The waterlevels of an estuary system rise and fall periodically so depending on positioning of the system in the estuary it may be exposed from the water as waterlevels fall. The system will be exposed to large swells developed in the ocean which causes strong currents to run through the estuary system.

The major enviromental condition this product must endure is being underwater, where it will need to be able to send and receive signals. The client has mentioned as an optional task that the modems interact with each other even trough said different potential mediums.
Acoustic modems send signals through underwater sound signals, which can cause distractions to wildlife (Such as fish) making this type not optimal at all. 
Current and waves can cause issues as it can cause the probes/modems to shift positions, so the design must counteract this movement somehow. The anetennas being used will send out signals in a donute shape, not omnidimensional. Meaning that if the device is tilted, it will send out signals in the incorrect position.


## 4. Verification

### 4.2 Functional Attibutes

May edit
- Measure at 5m test strength of signal. extrapolate data 
- Measure power consumption over a 2 hour time frame. extrapolate data  
- test out 2 hour time period to ensure duty cycle is constant 
- Can only access with 1 spi input 
- send known data (16 byte)to ensure no packet lost - test a container at 5m deep with hummidity strip



Function 1 - The system will be thoroughly tested in a similar environment. The test will be taken with modem1 and modem2 submerged underwater. Final tests will be completed in a local estuary system. All testing will be recorded.

Function 2 - Limit testing will be conducted on the distance functionality of the system. One modem will be placed in a body of water, a second modem will be placed in the same body of water and moved in one-meter increments testing the signal strength at each point. At 20 meters the system must send and receive a signal.

Function 3 - Test will be performed by supplying data to the modem simulating a detection of bacteria. If data is recorded accurately through the simulation then the system is compliant.

Function 4 - Stress tests will be completed and all data time stamps will be recorded and compared in real-time. This will be performed over an extended period and remain consistent if consistently is shown the system complies.

Function 5 - Stress tests will be completed and timed. Data is to be sent and received in 30 seconds, this will be tested over an extended period and expected to remain constant. 

Function 6 - Tests will be completed ensuring all data is updated to the system with no issues. If any issues are to appear these will be fixed accordingly. 

Function 7 - A simulation test will be performed on the system. A large number of bacteria will be simulated to have been recorded reaching the required alert level. If an alert is received then the function is viable. 

Function 8 - Testing will be completed with the GPS device activated. If the device location is accurate then the function is viable.

Function 9 - A test will be completed where a device is disconnected from communication if an alert is received the function is viable.

Function 10 - The recorded data of all testing will be analyzed if data is accurate to the testing the function is viable.

Function 11 - Stress testing will be performed on the system. If all devices are identified and communicating with one another then the function is viable. 

### 4.3 Usability Requirements

Requirement 1 will be satisfied through testing the prototype with probes and measuring responses, "a timely period" will be based on preliminary testing and feedback with client and is likely to change based on factors such as accessibility to the site and modification to the prototype. At this stage in the development the test "probes" will be dummy units that send their respective bacteria signals when prompted and will not have any actual detection capabilities.

Requirement 2 will be satisfied by ensuring the modem can keep up with multiple different probe signals listening and responding to prompts from them simultaneously. At development stage this can be simulated by a one or more multithreaded dummy units sending multiple different signals

Requirement 3 will be satisfied by evaluating installation of the prototype and modifying the final design based on feedback from client. If the form factor and weight is such that the client can feasibly transport it and carry it a short distance from the vehicle to the installation site it is sufficient.

Requirement 4 is satisfied by accounting for these in the final throughout the design, if the prototype satisfies these constraints it is sufficient.

### 4.6 Non Functional Attributes

- Effectiveness - By delivering a functional prototype prototype that adheres to the other attributes this is inherantly satisfied.

- Environment - Covered in 4.7.

- Environmental protection - Device will be submerged for an extended period (24+ hours) in a controlled and the water will be inspected for any pollutants if there are none this is satisfied.

- Serviceability - By delivering a prototype with these attributes in the design this is inherantly satisfied.

- Usability - We will enlist a third party user to attempt to operate the unit with instructional material. If they are able to operate the modem correctly this is satisfied.

### 4.7 Physical and Environmental Requirements

#### Physical Characteristics 
To ensure the product meets the desired physical characteristics the client requested the client will be updated with the progression of the project. Their feedback will be taken and implemented into the design. If the client accepts the physical characteristics of the system then the system is compliant.

1. After submerging system over extended period of time, system will be examined for any moisure inside. Any joints, gaskets and waterproofing will be inspected closely for leakages. The system is satisfactory if no leakages are present.

2. Prototype will be monitored continuously for damages and errors during it's use over an extended period of time. The system is satifactory if the hardware remains intact after this period.

3. System should be anchored in place. It will be monitored for any changes in location if the device remains in place over en extended period it is satisfactory.

4. Size and weight will be assessed in iterations of the design. If the final prototypes size is small enough that multiple can be loaded onto a vehicle it is satisfactory.

## 5. Development schedule.

### 5.1 Schedule

The architecture and design should be completed by the end of week 9, trimester 1 with a demo being delivered by the end of trimester 1 too. We also expect to finsih the architectural prototype by 7/5/21. 
In trimester 2, for a duration of 2 weeks, we expect to have iterations of our design after we complete our product (Date cannot be given at this stage).
Note, these dates are subject to change as requirements may alter throughout development.


### 5.2 Budget


### 5.3 Risks 

#### Aptamer specification

The modemn will be made so that the data recieving from the aptamer will be in the form of Serial Peripheral Interface (SPI) signal. If the client was to deploy data in the form of USB alterations must be made in order to process this data. To overcome this potential risk we may require a usb module for this project in order to recieve data for the mircocontroller. 

#### Covid-19

A potential risk to fulfilling client's requirement is another level 4 coronavirus lockdown. To conduct all the functional tests of this project, it requires large bodies of water and meeting up with team memebers. In the unlikely event of a coronavirus lockdown, the team will be conducting all functional tests at home with a bath tub in order to test the model's ability to perform underwater. However, the range of the modemn may not meet the client's requirement

#### Communications

In the unlikely event of that we lose communication with Ali Alshumaimri as he is overseas due to Covid-19. The result of this happening may mean that the team's workload will increase due to having less members. The rest of the team will continue on with the project without him. 


#### Delay deliveries 

There is a medium risk that the parts required from overseas may be delayed due to covid or a situation similiar Suez Canal earlier this year. To mitigate this risk, the team will try to locally source parts for this project. In the event the team was not able to locally source said parts, the team will try to order International parts early in order to reduce the risk of delayed orders. 

### 5.4 Health and Safety


| Health and Safety Risk | Likelihood | Impact | Mitigation Strategy |
| ------ | ------ | -------- | --------------- |
| Electrocution | Unlikely | Severe | Make sure no circuits have current flowing through when working with them |
| Puncture | Likely | Negligible | If working with sharp items, where gloves for protection |
| Heat/Burn | Unlikely | Moderate | Wear gloves while working with product to protect self from hot surfaces, in case it overheats |
| Drowning | Unlikely | Severe | Be aware of surrounding while at Hutt River, be sure persons can swim, if uncomfortable with area wear life jacket |
| River Pollution Poisoning | Possible | High | Talk with Hutt City council about risks and pollution levels at Hutt River and where to go in order to avoid it |
| Explosion | Very Unlikely | Significant | Be sure product/circuits are properly put together and nothing is overheating when powered on (monitor system) |
| Polluting Waters | Unliekly | Significant | Test product in isolated water conditions before placing in Hutt River to confirm no leakage from system |  

To manage computer related risk, the team will follow the Worksafe health and safety guideline of 2015. This includes making sure that the power cables are not broken when being exposed to 230/240V. To minimize the chances of Occupational OverUse, the team will make sure that breaks are involved. Furthermore, the cable management of the modem will be routinely checked to minimize the chances of electrical hazard. 
 
Health and safety briefing will be expected when performing any external (off-campus) field-testing. The briefing will outline all the possible risk and the respective solution in order to minimise potential hazard which is in 5.4.1. This may include water hazard and pollution hazard. Furthermore, the team will be expected to follow the Health and Safety protocol of WorkSafe 2015. In addition, the Health and Safety protocol of WorkSafe was briefed on 27/10/2020. This will assist the team in creating a solid Health and Safety plan to minimise potential hazard.
 
This project may affect the local ecosystem of the water if the modem was to use acoustic signals. However, for this project radio-frequency will be employed to reduce the effect on the local system. Ideally, the modem should be made with biodegradable material in order to not pollute the water once the modem meets its expiry date. However, as it can not be achieved at this stage the modem deployers must retrieve the modems when the modem dies. To obtain the Ethics Approval, the team must have a meeting with the School Safety Officer before submitting an application to VUW's Human Ethics Committee. The meeting will be arranged on the 2nd half of the trimester. 

#### 5.4.1 Safety Plans
 
**Electrical hazard**
 
There's a low risk but high severity chance of electrocution. This can be mitigated by making sure that there's no current flowing through the circuit when it is being constructed or modified. The Modem will be tested in fresh water (less conductive enviromental conditions) before being tested in salt water (more conductive enviromental conditions) to stimulate enviromental conditions of an estuary. 
 
**Water hazard**
 
There's low risk and medium servierty of water hazard. This water hazard could occur if the underwater chassis wasn't water tight which could short-circuit the modem. In addition, there's also a low chance and high servierty health and safety breach that could occur from this lack of water tightness, which could happen if the water inside the chassis was to be brought back into the lab. The water hazard can be mitigated by testing the modem in more shallow bodies of water and making sure the chassis is clear so leakage can be detected easier. Additionally, There is a low risk of drowning which can also be mitigated with more shallow bodies of water. Furthermore, to reduce the risk of water hazard. The chassis will be tested underwater by itself before any form of testing with the modem inside. This will reduce the potential risk of water leakage to the modem.
 
**Pollution hazard**
 
There's a likely risk and medium servierty chance of pollution hazard that could occur when testing the underwater modem in a river. For any field testing of the underwater modem, the team will check with the region's health board to mitigate the possible chance of pollution hazard. In addition, the team will be expected to use PPE (personal protective equipment) to further reduce the chances of pollution hazard. 

 
**Explosive hazard**

The primary method to protect components from explosive hazard is to implement a battery protective system. This is to ensure that if the voltage leaving out the battery reaches a certain threshold it will cut off the circuit in order to reduce the chance of creating an explosive hazard. In addition, multiple water stress tests will be conducted on the chassis in order to reduce the chance of water leakage which may cause the circuit to short-circuit creating another potential risk of explosive hazard. This will also reduce potential pollution hazard as the fire from a lithium ion battery can release toxic gas that may pollute the local environment.

Additional health and safety plan from the Biology department will be appended when available.

## 6. Contributions
| Name | Sections ('*' Means member contributed a portion of given section) |
| ---- | ------------------- |
| Toby Giri | 1.1 Purpose,  1.2 Scope,  1.3.4 Limitations*,  4.8 Physical and Environmental Requirements,  5.1 Schedule, 5.3 Risks* |
| Jonathan Haydon | 1.3.1* Product perspective, 3.3 Usability Requirements, 3.6 Nonfunctional system attributes, 4.3 Usability Requirements, 4.6 Nonfunctional system attributes, 4.7 Physical and Enviromental Requirements|
| Hau Shian Chin | 5.4 Health and Safety, 5.4.1 Health and Safety plan, Enviromental Conditions, 5.3 Risk*, Research*, suggestions* |
| Ali Alshumaimri | Research and Ideations, 1.2 Scope*, 5.3 Risks*, 5.4.1 Health and Safety plan*, 2 References|  
| Nathanael Pohl | Clients, 1.1 Purpose*, 1.2 Scope*, 3.1 External interfaces, overall editing and suggestions |
| Jamie Reynolds | 3.2 Functions, 3.7 Physical and Environmental Requirements |
