# IT-314-Software-Engineering

## Author
- **Hitanshu Variya** , BTech, ICT + CS, Section B
- Student ID          - 202201510
- Lab Group           - 6

<br><br>

# Lab 04 Assignment - Developing Class Diagrams - Software Engineering Lab Report

This repository contains the solutions and class diagrams for Lab 04 of Software Engineering. The report covers various modeling tasks including the construction of polygons and a flight and pilot management system.

### 1. Preparing class diagram for the given Object diagram.
- The object diagram shows the portion of Europe.

### 2. Polygon Construction
- A polygon requires at least three points (e.g. a triangle).
- Points can be shared between polygons.
- The order of the points is critical to defining the boundaries of the polygon.

### 3. Adding the multiplicites to the given class diagram
- There was a partially completed class diagram for the air transportation system.

### 4. Flight and Pilot Management System
- Models the management of airlines, flights, pilots, and aircraft.
- **Airline**: Operates flights, each with a unique ID, departure airport, and arrival airport.
- **Flight**: Each flight has a pilot and co-pilot, departure and arrival times, and uses a specific type of aircraft.
- **Aircraft**: Can be in a working state or under repair, and either airborne or landed.
- **Pilots**: Have experience levels (1 to 3), with each aircraft requiring at least one captain (level 3) and a co-pilot.

<br><br>

# Lab 06 Assignment - Point of Sale (POS) System - Software Engineering Lab Report

This Folder contains diagrams and models for the **Point of Sale (POS) System**, developed as part of the IT-314 Software Engineering Lab. The report focuses on key functionalities such as processing sales and handling returns, modeled through various UML diagrams.

- **Developing Use Case Descriptions**
  - **Process Sale**: Covers the complete transaction flow from scanning items to processing payments and generating receipts. Includes alternative flows like handling gift coupons, item not found errors, and payment failures.
  - **Handle Return**: Describes the process of returning purchased items, verifying their eligibility, and processing refunds or exchanges. It handles scenarios like missing receipts or damaged goods.

- **Identifying Entity, Boundary, and Controller Objects**
  - **Entity Objects**: Cashier, catalog system, inventory system, invoice, discount coupons, and return transactions.
  - **Boundary Objects**: Barcode scanner, credit card reader, cashier terminal, customer display, payment interface, and receipt printer.
  - **Controller Objects**: Sales controller, inventory controller, payment controller, receipt controller, and return controller.

- **Developing Diagrams**
  - **Sequence Diagrams**: Detailed interaction models for the "Process Sale" and "Handle Return" use cases, showing the step-by-step flow of events between the system and actors.
  - **Activity Diagrams**: Visual workflows for the sale and return processes, illustrating the dynamic behavior and decision points within the system.
  - **Analysis Domain Models**: Conceptual representations of the system components and their relationships.

