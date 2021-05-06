""" PY TO ESP (DC Motor CONTROLLER) """
import time
import urllib.request
root_url = "IP Adress of ESP8266"  #144# ESP's url, ex: http://192.168.102 (Esp prints it to serial console when connected to wifi)

def sendRequest(url):
	n = urllib.request.urlopen(url) # send request to ESP
    
def get_data():
	global data

# Example usage

while True:
    answer = input(""" Send Motor Position in Ticks """)
    action = "/%s" % answer
    print(action)
    sendRequest(root_url + action) 
