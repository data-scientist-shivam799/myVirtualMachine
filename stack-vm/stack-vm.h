#ifndef STACK_VM_H
#define STACK_VM_H

#include <iostream>
#include <vector>

// type definitions
typedef int32_t i32; // creating a signed integer of 32 bits

class StackVM {
    i32 pc = 100; // program counter
    i32 sp = 0; // stack pointer
    std::vector<i32> memory;
    i32 typ = 0;
    i32 dat = 0;
    i32 running = 1;

    // private functions
    i32 getType(i32 instructions);
    i32 getData(i32 instructions);
    void fetch();
    void decode();
    void execute();
    void doPrimitive();

    public:
    // public functions
    StackVM();
    void run();
    void loadProgram(std::vector<i32> prog);
};

#endif
