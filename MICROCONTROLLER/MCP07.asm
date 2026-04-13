ORG 0000H
	LOOP:
	      MOV A,#00H
		  MOV P1,A
		  ACALL DELAY
		  MOV A,#0FFH
		  MOV P1,A
		  ACALL DELAY
		  SJMP LOOP

    DELAY:
          MOV R2,#200
          D1:MOV R3,#200
		  D2:MOV R4,#200
		  D3: DJNZ R4,D3
          DJNZ R3,D2		  
		  DJNZ R2,D1
		  RET
END		  
