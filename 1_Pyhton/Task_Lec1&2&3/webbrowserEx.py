import webbrowser
from time import sleep
import pyautogui
webbrowser.open("https://mail.google.com/mail/u/0/#inbox")
sleep(10)
ThreePoints_X , ThreePoints_Y =pyautogui.locateCenterOnScreen('MailBox3Points.png',confidence = 0.9)
pyautogui.click(ThreePoints_X , ThreePoints_Y)
print("Frist click")
sleep(5)
pyautogui.click(ThreePoints_X - 30 , ThreePoints_Y + 30 )
print("Second click")
while True:
    pass
    