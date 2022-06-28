import serial
import cv2
import cvzone
from cvzone.HandTrackingModule import HandDetector
sm=serial.Serial('COM8',9600)
sm.timeout=1
cap=cv2.VideoCapture(0)
d=HandDetector(detectionCon=0.5,maxHands=1)
while True:
	success,img=cap.read()
	img=cv2.resize(img,(500,350))
	img=d.findHands(img)
	i,box=d.findPosition(img)
	if i:
		f=d.fingersUP()
		s=(list(map(int,f)))
		w=0
		for q in s:
			w+=q
		e='\n'
		sm.write(str(w).encode())
		sm.write(e.encode())
	cv2.imshow('im',img)
	cv2.waitKey(1)
