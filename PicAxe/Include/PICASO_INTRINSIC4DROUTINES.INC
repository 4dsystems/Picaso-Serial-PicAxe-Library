'
' Sample 4D Intrinsic routines, needs to be inserted into your PicAxe Program until such time as PicAxe supports includes
'
getAck:
	serin [20000,Timeout], 3, T38400_32, b1
	if b1 <> 6 then goto InvalidResponse
	return
	
getAckResp:
	serin [20000,Timeout], 3, T38400_32, b1, b3, b2
	if b1 <> 6 then goto InvalidResponse
	return
	
getAck2Words:
	serin [20000,Timeout], 3, T38400_32, b1, b3, b2, b5, b4
	if b1 <> 6 then goto InvalidResponse
	return
	
getAckRes2Words:
	serin [20000,Timeout], 3, T38400_32, b1, b3, b2, b5, b4, b7, b6
	if b1 <> 6 then goto InvalidResponse
	return
	
Timeout:
	sertxd("Timeout Error") 
	return
	
InvalidResponse:
	sertxd("Invalid Response ", #b1, CR, LF) ;
	return
'
' Not codeed and why
'
' GetAckResData   - code inline with amount of data to be read specified
' GetAckResStr    - code inline with amount of data expected to be read specified with timeout
' GetAckResSector - PicAxe does not have enough memory to support this
'
' Both the 'code inline' recommendations are because coding in a loop may be too slow for PicAxe to keep up
' with the received data, increasing the serial delay in SPE might help with this at the expense of slowing
' down all transfers
