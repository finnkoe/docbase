# Architecture Notes

## Project Goal

DocBase is a local-first document and knowledge management system written in C++.

The system should be modular, maintainable and extensible.

## Core Design Goals

The architecture should focus on:

* modularity
* seperation of concerns
* maintainability
* local-first storage
* extensibility

## Technology Decisions

### C++

The project is written in C++ to focus on:

* performance
* memory control
* software architecture
* systems-level programming experience

### SQLite

SQLite is used as the database system because:

* it is lightweight
* severless
* easy to embed into local applications
* well suited for local-first applications
* supports full text search via FTS5

### Command Line Interface

The first version uses a CLI because:

* faster development iteration
* focus on backend architectre first
* easier debugging
* avoids premature frontend complexity

## Planned Architecture Direction

The Application will likely be seperated into the following responsibilities

* document import
* document analysis
* storage Layer
* search layer
* command line interface
