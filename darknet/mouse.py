import pyautogui
import time

#i = 0
#all_x = 0
#all_y = 0
while 1: #i < 30:
	curmus_x, curmus_y = pyautogui.position()
	print(curmus_x, curmus_y)
	#all_x += curmus_x
	#all_y += curmus_y
	#i += 1
	time.sleep(0.1)
#average_x = all_x / i
#average_y = all_y / i
