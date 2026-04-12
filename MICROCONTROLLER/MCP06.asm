ORG 0000H
	
	LOOP: 
	     CPL P1.2
		 ACALL DELAY
		 SJMP LOOP
		 
		 DELAY: 
		       MOV R5,#200H
			   D1:MOV R6,#200H
			   D2:DJNZ R6,D2
			   DJNZ R5,D1
			   RET
END
