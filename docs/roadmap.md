# Roadmap

## Phase 1: Project Foundation

Goal: Create a minimal but clean C++ project foundation.

Tasks:

* set up CMake
* add a minimal CLI entry point
* build a first executable
* define the initial folder structure
* document the first architecture decisions

## Phase 2: Document Import

Goal: Import simple text documents.

Tasks:

* read TXT files
* create a Document model
* extract basic metadata
* handle basic errors

## Phase 3: SQLite Storage

Goal: Store imported documents locally.

Tasks:

* connect SQLite
* create database schema
* save documents
* load documents by ID

## Phase 4: Search

Goal: Search documents locally.

Tasks:

* add SQLite FTS5
* search by text query
* display search results in CLI

## Phase 5: Polishing

Goal: Make the project presentable for GitHub and applications.

Tasks:

* add tests
* improve README
* add architecture documentation
* add example documents
* add demo commands
