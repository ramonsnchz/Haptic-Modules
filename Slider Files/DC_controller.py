""" PY TO ESP (DC Motor CONTROLLER) """
import time
import urllib.request
root_url = "http://192.168.1.171"  #144# ESP's url, ex: http://192.168.102 (Esp prints it to serial console when connected to wifi)

def sendRequest(url):
	n = urllib.request.urlopen(url) # send request to ESP
    
def get_data():
	global data

# Example usage

while True:
    answer = input(""" Send Motor TDesired Tick """)
    action = "/%s" % answer
    print(action)
    t = time.time()
    sendRequest(root_url + action) #was "/OPEN_LED"
    get_data()
    time_passed=time.time()-t
    print(time_passed)
