from bs4 import BeautifulSoup
import urllib2
quote_page = 'http://www.bloomberg.com/quote/SPX:IND'
page = urllib2.urlopen(quote_page)
soup = BeautifulSoup(page,'html.parser')
name_box = soup.find('h1',attrs={'class': 'logo'})
tt = name_box.text
print tt
#name = name_box.strip()
print name_box
price_box = soup.find('div', attrs={'class':'price'})
#price = price_box.strip()
#print soup
import csv 
from datetime import datetime
with open('index.csv','a') as csv_file:
 writer = csv.writer(csv_file)
 writer.writerow([name_box,price_box,datetime.now()])
