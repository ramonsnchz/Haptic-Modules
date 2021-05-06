""" PY TO ESP (DC Motor CONTROLLER) """
import time
import urllib.request
root_url = "IP Address of ESP8266" #SESP's url, ex: http://192.168.102 (Esp prints it to serial console when connected to wifi)

def sendRequest(url):
	n = urllib.request.urlopen(url) # send request to ESP
    
def get_data():
	global data

# Example usage

while True:
    answer = input(""" Send Amount of time in Milliseconds """) # In milliseconds, e.g 1 second = 1000ms, only type the number with no spaces or characters
    action = "/%s" % answer
    print(action) #Sanity check, this will print what was just sent
    sendRequest(root_url + action) 
    get_data()

