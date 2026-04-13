ORG 0000H
	LOOP: MOV A,#00H
	      MOV P1,A
		  ACALL DELAY
		  MOV A,#0AAH
		  MOV P1,A
		  ACALL DELAY
		  SJMP LOOP
		  
	DELAY: MOV R2,255
	       D1:MOV R3,255
           D2: DJNZ R3,D2
           DJNZ R2,D1		  
		   RET
		   
END
