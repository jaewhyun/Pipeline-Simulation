# Pipeline-Simulation
BU MET CS 472 Project 3

"This lab will be written in the language of your choice and will simulate how a pipelined datapath works. It
must have a function (or procedure or method or whatever the term is for a code module in your language
of choice) for each step in the pipeline: IF, ID, EX, MEM, and WB with the function names shown below.
Your main program will have some initialization code and then will be one big loop, where each time
through the loop is equivalent to one cycle in a pipeline. That loop will call those five functions, print out
the appropriate information (the 32 registers and both READ and WRITE versions of the four pipeline
registers) and then copy the WRITE version of the pipeline registers into the READ version for use the next
cycle.
That is, your main program's loop will have the following sequence after initialization:
IF_stage();
ID_stage();
EX_stage();
MEM_stage();
WB_stage();
Print_out_everything();
Copy_write_to_read();
You must follow this order and include these exact function names for the five stages. Projects which go
in the inverse order -- starting with WB, then MEM, then EX, then ID, then IF -- will get a zero!
Your program will use an array called Main_Mem to simulate a 1K Main Memory. It should be initialized as
follows: Main_Mem[0]=0, Main_Mem[1]=1, …Main_Mem[0xFF]=0xFF, Main_Mem[0x100] = 0 and so on.
(Note: 0xFF is the largest value that can be put in a byte, so after Main_Mem[0xFF]=0xFF, you start over
with Main_Mem[0x100] = 0 and Main_Mem[0x101] = 1.) Your program will have simulated registers,
which will just be an array of integers called Regs. For example, in C++ you could do: int Regs[32]; These
registers are given initial values of x100 plus the register number except for register 0 which always has the
value 0. (So $0=0, $1=0x101, $2=0x102, ... $10 = 0x10a, … $31=0x11f. (Reminder: register numbers are
decimal.) You MUST use the exact names Main_Mem and Regs for the arrays."
