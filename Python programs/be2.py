from bs4 import BeautifulSoup
import urllib2
quote_page = 'https://patents.google.com/patent/US8012515B1/en?oq=8012515'
page = urllib2.urlopen(quote_page)
soup = BeautifulSoup(page,'html.parser')
print soup.title
inv = soup.findAll('dd',attrs={'itemprop': 'inventor'})
for i in inv:
	print i
ass = soup.findAll('dd',attrs={'itemprop': 'assigneeOriginal'})
for i in ass:
	print i
date = soup.findAll('dd',attrs={'itemprop': 'filingDate'})
for i in date:
	print i
abstract = soup.findAll('div',attrs={'class': 'abstract'})
for i in abstract:
	print i