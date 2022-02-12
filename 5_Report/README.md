# Discription
This,project is a console application using the C programming language.This project compiled in VSCode with the GCC compiler. In this application , you can do atm tasks like checkbalance,withdraw cash, deposit cash,..etc.

# Requirements
## Highlevel requirements
|  ID  |             Discription           |    status   |
|------|-----------------------------------|-------------|
|HR_01 | Operating system(Windows10/Linux) | Implemented |
|HR_02 | C Language                        | Implemented |

## Lowlevel requirements
|  ID  |             Discription           |    status   |
|------|-----------------------------------|-------------|
|LR_01 | Funtions to Mainmenu              | Implemented |
|LR_02 | Funtions to Checkbalance          | Implemented |
|LR_03 | Funtions to cashDeposit           | Implemented |
|LR_04 | Funtions to cashWithdraw          | Implemented |
|LR_05 | Funtions to menuExit              | Implemented |
|LR_06 | Funtions to errorMessages         | Implemented |

# 4W's and 1'H
## Who:
The project can be used almost by all the particular organization people.At the end,user satisfaction is the goal of the project.
## What :
Check balance,deposit cash,withdraw cash will be done by this application.
## When :
The project can be used when the customer needs to Check balance,deposit cash,withdraw cash.
## where :
The ATM application is nowadays essential for all bank organizations.
## How :
This application is a solution for customer to do transactions without going to bank through ATM. The whole transaction will continue untill we exit from the funtion.

# SWOT Analysis
![SWOT](https://user-images.githubusercontent.com/98832647/153263916-504abb3a-06cc-424e-bae8-a3f5c846d925.jpg)

# Behavioral diagrams
### Activity diagram

![Activity_diagram](https://user-images.githubusercontent.com/98832647/153596713-4aab17c6-5ea2-42d9-90ed-6fc72eb743fb.png)

### Sequence diagram
![Sequence_diagram](https://user-images.githubusercontent.com/98832647/153597386-f6cc76a8-49e9-4c20-a1e1-6b6d2b42c41a.png)

# Structural diagram
### Pakage diagram
![Package_diagram](https://user-images.githubusercontent.com/98832647/153702110-9775b13e-bdb8-4e3d-a6bf-1808ca07442f.png)


# Test Plan

|Test ID |   Discription      | Exp I/P |  Exp O/P     | Actual Output | Pass or Fail  |
|--------|--------------------|---------|--------------|---------------|---------------|
|  T_01  |  Choose the option |    1    |Checkbalance  |Checkbalance   |     Pass      |
|        | For correct choice |         |              |               |               |
|  T_02  |  Choose the option |   5     |Invalid choice| Invalid coice |     Pass      |
|        | For wrong choice   |         |              |               |               |
|  T_03  | To checkbalance    |   1     |    15000     |   15000       |     Pass      |
|  T_04  | To money withdraw  |  5000   |    10000     |   10000       |     Pass      |
|  T_05  | To money deposit   |  1000   |    11000     |   11000       |     Pass      |
