import urllib2
for i in range(1,192):
    ss = raw_input()
    arr = ss.split(",")
    brr = arr[0]
    for j in range(1,len(arr)):
          a=arr[j]
          if a[0] == 'w':
             a = 'https://'+a
          website=a  
          try:  
            response = urllib2.urlopen(website)  
            if response.code==200:  
              brr = brr +','+website              
          except urllib2.HTTPError, e:  
               continue
          except urllib2.URLError, e:  
                continue
    print brr

            
