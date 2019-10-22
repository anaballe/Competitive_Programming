import urllib2  
website='https://www.kultura.gov.alwww.dda.gov.al'  
try:  
    response = urllib2.urlopen(website)  
    if response.code==200:  
        print("site exists!")  
    else:  
        print("site doesn't exists!")  
except urllib2.HTTPError, e:  
    
except urllib2.URLError, e:  
    