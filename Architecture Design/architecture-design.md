# ENGR 301: Architectural Design and Proof-of-Concept

## Proof-of-Concept

The aim of an architectural proof-of-concept (spike or walking skeleton) is to demonstrate the technical feasibility of your chosen architecture, to mitigate technical and project risks, and to plan and validate your technical and team processes (e.g., build systems, story breakdown, Kanban boards, acceptance testing, deployment).

A walking skeleton is an initial technical attempt that will form the architectural foundation of your product. Since a walking skeleton is expected to be carried into your product, it must be completed to the quality standards expected for your final product. A walking skeleton should demonstrate all the technologies your program will rely on "end-to-end" &mdash; from the user interface down to the hardware.

In the context of ENGR 301, a walking skeleton does not need to deliver any business value to your project: the aim is technical validation and risk mitigation.


## Document

The aim of the architectural design document is to describe the architecture and high-level design of the system your group is to build, to identify any critical technical issues with your design, and to explain how you have addressed the highest rated technical and architectural risks. The architecture document should also demonstrate your understanding of architectural techniques and architectural quality, using tools and associated notations as necessary to communicate the architecture precisely, unambiguously and clearly in a written technical document.

Page specifications below are *limits not targets* and refer to the pages in the PDF generated from the markdown. Because the size of your document is necessarily limited, you should ensure that you focus your efforts on those architectural concerns that are most important to completing a successful system: if sections are at their page limit, indicate how many items would be expected in a complete specification.

The ENGR 301 project architecture design document should be based on the standard ISO/IEC/IEEE 42010:2011(E) _Systems and software engineering &mdash; Architecture description_, plus appropriate sections from ISO/IEC/IEEE 29148:2018(E) _Systems and software engineering &mdash; Life cycle processes &mdash; Requirements engineering_; ISO/IEC/IEEE 15289:2017 _Systems and software engineering &mdash; Content of life-cycle information items (documentation)_; ISO/IEC/IEEE 15288:2015 _Systems and software engineering &mdash; System life-cycle processes_; ISO/IEC/IEEE 12207:2017 _Systems and software engineering &mdash; Software life cycle processes_ and ISO 25010 SQuaRE; with notations from ISO/ISE 19501 (UML). In particular, Annex F of ISO/IEC/IEEE 15288 and Annex F of ISO/IEC/IEEE 12207. These standards are available through the Victoria University Library subscription to the [IEEE Xplore Digital Library](https://ieeexplore.ieee.org/) (e.g., by visiting IEEE Xplore from a computer connected to the University network).

The document should contain the sections listed below, and conform to the formatting rules listed at the end of this brief.

All team members are expected to contribute equally to the document and list their contributions in the last section of the document (please make sure that your continued contribution to this document can be traced in GitLab). You should work on your document in your team's GitLab repository in a directory called "M2_Architecture". If more than one team member has contributed to a particular commit, all those team member IDs should be included in the first line of the git commit message. ``git blame``, ``git diff``, file histories, etc. will be tools used to assess individual contributions, so everyone is encouraged to contribute individually (your contribution should be made to many sections of the document, rather than focusing on just a single section), commit early and commit often.

---

# ENGR 301 Project 18 Architectural Design and Proof-of-Concept

Nathanael Pohl, Toby Giri, Jonathan Haydon, Jamie Reynolds, Hau Shian, Ali Alshumaimri

## 1. Introduction
The purpose of this project is to create an underwater communications modem that will allow data transfer wirelessly between nodes at a relatively shallow depth. The data provided will be from an aptamer sensor which will detect certain types of bacteria in a given enviroment and transfer this information to the base station. It is expected that the system is easy enough to be installed and used by the client without any extra help from an expert. 
Functions of the modem include:
- 2 Weeks battery life, rechargable
- 20 metre communication range
- Battery diagnostics (Allows the user to monitor battery health)
- Low power and low frequency
It is to be noted that this project will look only at the communications aspect of the overall system. The aptamer sensor is not our responsibility, we simply look at the communications side of it and how it will trasmit data to the modem/base station.

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


### 1.3 Changes to requirements
N/A

## 2. References
N/A

## 3. Architecture

### 3.1 Stakeholders
| Name | Position | Internal/External | Project Role |
| ------ | ------ | ------ | ------ |
| Nathanael Pohl, Toby Giri, Jonathan Haydon, Jamie Reynolds, Hau Shian, Ali Alshumaimri | Students | Internal | Project developers |
| Joshua Benfell | Student | Internal | Course tutor | 
| Winston Seah | Professor of Network Engineering | Internal | Project advisor | 
| Craig Anslow | Senior Lecturer in Software Engineering | Internal | Course coordinator |
| Roger Cliffe | School Safety Officer | Internal | Health and Safety Officer |
| Alvin Valera | Senior Lecturer in Network Engineering | External | Project client |
| Jonathan Gardner | Professor of Marine Biology | External | Project client | 

**Stakeholder concerns**
| Concern | Stakeholders |
| ------ | ------ |
| Purposes of the system | Project clients |
| Suitability for achieving the purpose | Project developers, Course tutor |  
| Feasibility of construction | Project developers, Course tutor|  
| Feasibility of deployment | Project developers, project clients |  
| Maintainability of the system | Project clients |  
| Functionality and performance of the system | Project clients |


-   Purposes of the system: Project clients.  
The purpose of the system is dictated by the needs of the clients

-   Suitability for achieving the purpose: Project developers and tutor    
The development team along side the course tutor are responsible for ensuring the system will sufficently achieve the prupose given by the client.

-   Feasibility of construction: Project developers and tutor    
The feasibility of construction will assessed by the project developers with oversight from the tutor.

-   Feasibility of deployment: Project developers and clients  
The development team must insure that the system is feasible to deploy and meets all user and client requirements.


-	Maintainability and evolvability of the system: Project clients  
It is the project clients who will be responsible for the future of the system once the development team has 
delivered a final product  

-   Functionality and performance of the system: Project clients    
The project clients are concerned with the functionality and performance of the system as they are who require it to complete it's task.

### 3.2 Architectural Viewpoints

![Imgur](https://i.imgur.com/bsYVU6c.png)  
**Viewpoint of the Customer**  
The customer will interact with the final modem.  

Concerns:  
* Ease of deployment   
* User serviceabilty 
* Cost effectiveness   
* Scalability  

**Viewpoint of the System Engineers**  
The Engineers will interact with the physical components of the system as well as the firmware running on the microcontroller.  

Concerns  
* Construction of the modem 
* Reliability of the modem  
* Testing of the product
### 4. Architectural Views

### 4.1 Logical
A structural design givies much details  without constraining architecture to a particular environment or technology is a logical architecture. for example,a diagram that represent the relationship between the components of the building. a full logical architectural design and system requirement derived during requirement analysis constitute multiple deployment scenarios. and deployment scenario is starting point for designing Architecture.
![Imgur](https://i.imgur.com/Mv3FE8q.png)  


1- The Class diagram consists of the 7 classes that are working in parallel and are held by the Node class which has an attributes and operations related to all 6 of the classes.

2- The Node is the main system to manage the aptamerData that is received from the aptamer sensor, the getRTC method which get clock time in return to the method of Time class.

3- The transmit class can transmit the aptamerData, clock, battery percent and also can send data to the receive class or to the Node of the system

4- Data that is in the transceiver is transferred to the transmit class using the transmitdata().

5- The transceiver pings the request to the receiver where the receiver than changes the status as received.

6- The transceiver, time, internal Data and Aptamer sensor have connected their ways with the main Node that keeps a check on Aptamer data, clock timings, battery percent and duty Cycle of the time class.

7- The internal Data uses Node to update the internal Data type and to check the battery percentage.

8- The time class gets the RTC from the clock attribute of Node and sets the duty cycle for the task to be performed.

9- Aptameter sensor is using dataInput to get the aptamerData from Node.


### 4.2 Development

#### Diagram: 
![Imgur](https://i.imgur.com/m0xmPHC.png)

With the development of our modem, there are three main subcategories of development: hardware, software and chassis. Much of these have dependencies on each other being completed at any given stage in order for meaningful progress to be made on the others. The hardware: namely the microcontroller, storage and transciever unit ultimately determine what programming language(s) are feasible to use on our modem. Similarly we cannot make an informed decision on a suitable form factor of the chassis without the size tolerances of the hardware used, as ideally we want the chassis to be as small as possible to make transportation easy.

Once all of the parts have been identified then they can be ordered and assembled. It is important to then test the hardware in isolation to ensure it is working correctly prior to software being loaded onto it, this will eliminate hardware failure as a  consideration when testing the microcontrollers software. The software can be developed largely independantly from the microcontroller and debugged, when the modem is loaded with the code we can begin testing the system as a whole.

As environmental considerations are of particular concern for this project, the modem will first be tested in a controlled environment off site. This is where the prototype can be tested initially for potential pollutants that could be introduced to the environment, as well as preliminary testing of the waterproofing and successful signals. If this is achieved then it may progress to testing at the actual estuary site where more rigorous testing according to the project requirements can be done.

### 4.3 Process
![Imgur](https://i.imgur.com/TMT149y.png)  

**Transmitter**  
Data Collected from Probe > Data transfered to Microcontroller

The third party prope Aptima sensor will collect data and transmit collected data set to the system microncontroller via hardwired communication. The data set will be of the quantity of four varities of both bad and good bacterias present in the estuary system. The Microctroller is the intimdiate between the probe, clock and transiever.  

Data Retrieved at Microctroller > Time Stamp Requested from clock

On data retrieval to the micronctroller, a request will be made to the clock the obtain a time stamp for the data set for statistcall analysis. The time stamp will be appeneded to the data set.

Time Stamp Recieved > Data Saved to system storage (SD Card)

A confirmation of the time stamp retrieval accepts the data as complete, passing the data set to the SD breakout to store the data to the connected SD card. Data will be stored chronologically.

Data Saved to storage > Data Transmitted 

If no error is recieved on data storage the data is accepeted for transmission to reciever system. The data is passed to the transiever module and transmitted via radio frequency. 

Data Transmitted > Wait for Confirmation signals

Once data is transmitted system will wait for a confirmation signal from reciever system. (Refer to receiver system)

Confirmation signal recieved > Repeat proccess 

The transmitter system will wait to reieve a confirmation signal. Once a signal is recieved data was transmitted succesfully the proccess is repeat from collection of probe data.

Confirmation Signal not Recieved > Transmit data 

The system will wait to retrieve a tramission signal if no transmission signal is recieved the system will be prompted to resend the data set and wait. An assumption that there is an issue with the system will not be made from one missed confirmation signal, therefore another transmission will be made. 

No confirmation signal recieved > Report Issue 

If data is sent twice with no response of a confirmation signal of successful transmission an alert will be prompted.

**Reciever**

Wait for data to be recieved > Data recieved 

The reciever system will wait for a transmission signal to be detected on detection the system will recieve sent data.

Data recieved > send confirmation signal 

Data is succesful recieved a propmt to respond with a confirmation signal is made and confirmation signal sent. 

Confirmation signal sent > wait for data to be recived 

Confirmation signal sent data transmission was succesful. Reciever system will repeat reciever roccess.


### 4.4 Physical 
physical architecture is a physical lay our of any system and its components. it refers to some representation of any organization or structure of the physical elements. physical architecture gives enough details to implement architecture on technology.

#### Circuit overview 
![Imgur](https://i.imgur.com/Hvofw3s.png)

#### Client hardware/software interaction

![Imgur](https://i.imgur.com/gtQJhBV.png)

Hardware overview

- Base station will not be implimented in this project.
- Batteries can be replaced once a month in order to provide sufficent power to the circuit.

Software overview

- Data storage (SD card) can be removed from the modemn for data analysis on a computer.



### 4.5 Scenarios

#### Diagram:
![Imgur](https://i.imgur.com/pYCuEQ4.png)

The one of the two main scenarios that are applicable are the user interaction with upkeep of the modem. This should be a relativeley easy process and on the user side the only expected labour related to the upkeep is the initial installation at the site and the changing of the battery. To add clarification, while our modem will include internal storage that the user can retrieve to evaluate the data offsite, this is not necessary for the general maintenance of the modem itself.

The other scenario is the interaction of the modem itself when it is checking probes for bacterial presence and battery life. Upon detecting that the device has low battery, it will send a notification to the user who can then change it with a charged one.

If the device is checking for bacterial presence it will check all of the probes, logging each within its own internal storage, in the instance that a bacterial presence is identified it will notify the user in a similar manner the low battery warning, giving the user which probe, bacteria and time it was identified.

## 5. Development Schedule

There are four key milestones for this project; 1: The Archectual prototype, a theoritical model which will show all componants and the schematcis of the integration between componantry as well as all required code, 2: Prototype I, A physical prototype that meets the limitations of being waterpoof, battery powered, low frequency communication, and sending and recieving data via low frequency communication. 3: Prototype II, A further development of the phycisal prototype improving upon prototype I, and meeting further limitiations being range. 4: Minimal Viable Product, A final product ready to be handed over to the client, this product must meet all functions and limitations.

The dates for these milestones comepletion dates are listed below, the dates are subject to change due which could be a result of factors such as a resurgence of Covid 19 in New Zealand, which will prevent group effort on the physical product. Discovery of issues or setbacks as each stage is completed, these cannot be avoided and must be corrected so due time will be considered if such issues arise. Any delays that occur will be stated in the live document.

### 5.1 Schedule
**Architectural prototype**
- Due: Thursday,22nd of July
- deliverables: Fully realised schematic of the system.
- All required parts arrived and ready for prototype intergration. 
- Skeleton of code and classes.

**Prototype 1 **
- Due: Thursday, 12th of August 
- deliverables: A physical prototype of the system based on the Architectural prototype that transfers a given data set wirelessly underwater.

**Prototype 2**
- Due: Monday, 30th of August
- deliverables: A physical prototype that improves upon prototype 1 and meets distance requirements of 20 meters.

**Minimal Viable Product**
- Due: Thursday, 30th of September
- deliverables: Physical function system
- Transfers data wireless underwater up to 20 meteres
- Waterproof input for aptima sensor
- Two weeks battery life 
- Interchangable batteries.


**Further deliverables**
- Due: Monday 4th of October
- deliverables: To be determines

### 5.2 Budget and Procurement

#### 5.2.1 Budget

| Item | Parts No. | Cost Per Unit | Units Required | Shipping Cost | Overall Cost | Expected Date of Arrival |
| ---- | ---- | ---- | ---- | ---- | ----- | ---- |
| [Microcontroller - STM32](https://nz.element14.com/stmicroelectronics/nucleo-f303k8/dev-board-nucleo-32-mcu/dp/2500224?st=arduino%20nano) | NUCLEO-F303K8 | $15.73 | 2 | $15.00 | $53.43 | 1/6/21 | 
| [RF transciever + Antenna](https://www.mindkits.co.nz/store/p/8897-433MHz-RF-Transceiver-CC1101-Module.aspx) | EL-WRF11010R  | $14.87 | 2 | $3.00 | $33.85 | 1/6/21 |
| [Underwater housing *TO BE COMFIRMED*](https://nz.element14.com/hammond/1554g2gycl/small-enclosure-small-pc-grey/dp/2988670?ost=1554G2GYCL&exaMfpn=true&searchref=searchlookahead&scope=partnumberlookahead) | 1554G2GYCL | $31.67 | 2 | $0.00 | $63.34 | 1/6/21 |
| [Power supply/Battery](https://www.pbtech.co.nz/product/BAPPRM1085/Promate-BOLT-10BL-10000mAh-Smart-Charging-Power-Ba) | BAPPRM1085 | $24.09 | 2 | $5.00 | $53.93 | 1/6/21 |
| [SD Card Module](https://www.fruugo.co.nz/sd-card-module/p-52280937-105567415) | 52280937-105567415 (Fruugo ID) | $6.95 | 2 | $14.49 | $28.39 | 1/6/21 |
| [SD Card](https://nz.element14.com/hama/00124150/16gb-c10-uhs-i-microsdhc-80mb/dp/3498569) | 3498569 | $17.73 | 2 | $15.00 | $58.03 | 1/6/21 |
| TOTAL COST (NZD) | $290.97 |

The reason to have two of each part is for testing purposes. Shipping could be cheaper/free with having multiple parts coming from same supplier.


#### 5.2.2 Procurement

Items will be procurred through Victoria University of Wellington's ECS ordering system.
| Item | Supplier |
| ---- | -------- |
| Microcontroller | Mouser |
| RF transciever + Antenna | Mindkits |
| Underwater housing | Element14 |
| Power Supply  | PBtech |
| SD Card Module | Fruugo |
| SD Card | Element14 |

### 5.3 Risks 

#### Aptamer specification

The modemn will be made so that the data recieving from the aptamer will be in the form of Serial Peripheral Interface (SPI) signal. If the client was to deploy data in the form of USB alterations must be made in order to process this data. To overcome this potential risk we may require a usb module for this project in order to recieve data for the mircocontroller. 

#### Covid-19

A potential risk to fulfilling client's requirement is another level 4 coronavirus lockdown. To conduct all the functional tests of this project, it requires large bodies of water and meeting up with team memebers. In the unlikely event of a coronavirus lockdown, the team will be conducting all functional tests at home with a bath tub in order to test the model's ability to perform underwater. However, the range of the modemn may not meet the client's requirement

#### Communications

In the unlikely event of that we lose communication with Ali Alshumaimri as he is overseas due to Covid-19. The result of this happening may mean that the team's workload will increase due to having less members. The rest of the team will continue on with the project without him. 


#### Delayed deliveries 

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

## 6. Appendices

N/A

## 7. Contributions

| Team Member | Contributions |
| ----------- | ------------- |
| Jonathan Haydon | 4.2 Development, 4.5 Scenarios |
| Toby Giri | 1 Introduction, 3.1 Stakeholders, 4.1 Logical, 5.1 Schedule, 5.2 Budget and Procurement, 5.4 Health and Safety |
| Hau Shian Chin | 4.1 Logical, 4.4 Physical, Updated health, safety plan, limitations, 5.3 Risk, Review draft copies|
| Ali Alshumaimri | 4.1 Logical, 4.2 Development, 4.3 Process, 4.4 Physical, 4.5 Scenarios|
| Nathanael Pohl | 3.1 Stakeholders, 3.2 Architectural viewpoints, 5.2 Budget and Procurement, Document management |
|Jamie Reynolds | 4.3 Process, 5.1 Development Schedule |
