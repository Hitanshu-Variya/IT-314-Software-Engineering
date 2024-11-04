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

<br><br>

# Lab 07: Program Inspection, Debugging, and Static Analysis

This lab focuses on understanding program inspection, debugging methods, and static analysis techniques. It includes solving common algorithmic problems like Armstrong numbers, GCD & LCM, and others using tools like the GDB debugger. Additionally, it applies static analysis tools such as CppCheck to identify potential issues in Github code for GoDot Engine, C++ code.

### Part-1: JAVA Code Debugging Section:
- **Debugger Used:** GDB Debugger, with online workspace support.


| **Problem**                    | **Description**                                                                 |
|---------------------------------|---------------------------------------------------------------------------------|
| **Armstrong Problem**           | Identifies key errors in calculating the number of digits and the correction of remainder logic. |
| **GCD and LCM Problem**         | Discusses loop conditions and the corrected logic for calculating GCD and LCM.  |
| **Knapsack Problem**            | Addresses array access issues and incorrect conditional logic for item selection. |
| **Magic Number Problem**        | Corrects sum calculation logic and ensures accurate digit breakdown.            |
| **Merge Sort Problem**          | Fixes array handling and recursive calls for sorting efficiency.                |
| **Matrix Multiplication Problem**| Refines variable handling and multiplication logic for matrix operations.       |
| **Quadratic Probing Problem**   | Corrects hashing logic and ensures proper probe handling during insertions and deletions. |
| **Sorting Problem**             | Fixes sorting logic errors and ensures proper comparisons for ordering arrays.   |
| **Stack Implementation Problem**| Rectifies stack pointer handling and error-checking during push/pop operations.  |
| **Tower of Hanoi Problem**      | Ensures correct recursion by fixing issues with disk movements in the algorithm. |

### Part-2: Code Inspection Using Checklist

The code inspection process in this lab was performed using a checklist-based approach to identify common types of errors. The checklist included the following categories:

| **Checklist Category**        | **Description**                                                                 |
|-------------------------------|---------------------------------------------------------------------------------|
| **Data Reference Errors**      | Ensured that all pointers and references are properly initialized and used. Checked for potential `null` references or invalid memory access. |
| **Computation Errors**         | Verified correctness of all mathematical operations, including proper handling of edge cases such as division by zero and overflow/underflow issues. |
| **Data Declaration Errors**    | Checked that all variables are declared with the correct data type and that default values are assigned where necessary. |
| **Loop and Conditional Errors**| Ensured loops are properly formed with valid terminating conditions, and conditional statements correctly handle all possible cases. |
| **Input Validation**           | Verified that all user inputs are validated for correctness, including boundary checks and type checks before usage. |
| **Functionality Checks**       | Checked each function to ensure it behaves as expected, handles edge cases, and returns the correct output based on its input. |
| **Error Handling**             | Verified that the code handles exceptions and error conditions gracefully, providing useful error messages and maintaining stability. |


### Part-3: Static Tool Analysis:
- **Tool Used:** CppCheck.

| **Type**            | **Count** |
|---------------------|-----------|
| **Errors Identified**  | 2         |
| **Warnings Identified**| 37        |
| **Info Identified**     | 0         |


Also Attached the Correct Executable code solutions and Static Analysis Report to further check for errors and warnings.

<br><br>

# Lab 08: Functional Testing (Black Box)

This lab focuses on designing and executing black-box testing techniques such as equivalence partitioning and boundary value analysis. It involves testing common algorithmic problems like linear search, triangle classification, and date validation using unit testing for verification of expected outcomes.

### Problem 1: Previous Date Determination Program
- Objective: Design test cases to validate date inputs.
- Solution: Derived equivalence classes for day, month, and year to handle valid/invalid cases.
- Test Suite: Includes both valid and invalid test data based on equivalence partitioning.

### Problem 2: Linear Search
- Objective: Test linear search functionality.
- Solution: Created test cases using equivalence partitioning and boundary value analysis.
- Test Suite: Covers various scenarios including value found, not found, and empty arrays.

### Problem 3: Count Item Program
- Objective: Test counting occurrences of a value in an array.
- Solution: Developed test cases based on equivalence partitioning.
- Test Suite: Includes multiple occurrences, single occurrences, and empty arrays.

### Problem 4: Triangle Classification
- Objective: Classify triangles as equilateral, isosceles, scalene, or invalid.
- Solution: Applied equivalence partitioning and boundary value analysis.
- Test Suite: Covers all triangle types, including invalid ones.

### Problem 5: Prefix Check Program
- Objective: Test whether a string is a prefix of another string.
- Solution: Created test cases using equivalence partitioning.
- Test Suite: Includes cases for empty, equal, and prefix strings.

### Problem 6: Extended Triangle Classification (Floating Point)
- Objective: Classify triangles with floating-point side lengths.
- Solution: Used equivalence partitioning and boundary value analysis.
- Test Suite: Handles valid and invalid triangles, including right-angled ones.

<br><br>

# Lab 09 Assignment: Mutation Testing

This lab focuses on implementing and Mutation testing the Graham's Scan algorithm for finding the convex hull of a set of points in a two-dimensional plane. The implementation is tested using unit tests with pytest, and code coverage is measured using pytest-cov and mutation testing using mutpy.

### Features
- Implementation of the Graham's Scan algorithm for computing the convex hull.
- Comprehensive unit tests using pytest, including:
  - Statement Coverage
  - Branch Coverage
  - Basic Condition Coverage
  - Path Coverage
- Code coverage analysis with pytest-cov to identify untested areas in the code.
- Mutation testing with MutPy to assess the effectiveness of the test cases.

### Python libraries used
- staticfg / CFGBuilder for building CFG using DOT Language
- Graphviz for Control Flow Graph Generation
- pytest for Unit testing
- pytest-cov for code coverage testing
- mutpy for mutation testing

