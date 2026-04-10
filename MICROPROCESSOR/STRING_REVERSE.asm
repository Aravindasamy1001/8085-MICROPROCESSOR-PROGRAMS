LXI H,2000H
LXI SP,3000H
MVI C,05H

PUSH_LOOP: MOV A,M
                         PUSH PSW
                         INX H
                        DCR C
                        JNZ PUSH_LOOP

LXI H,2000H
MVI C,05H

POP_LOOP: POP PSW
                 
                     MOV M,A
                     INX H
                     DCR C
                     JNZ POP_LOOP

HLT                         
