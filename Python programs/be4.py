from bs4 import BeautifulSoup
import urllib2
quote_page = 'https://www.wipo.int/directory/en/contact.jsp?country_id=3'
page = urllib2.urlopen(quote_page)
soup = BeautifulSoup(page,'html.parser')
z = soup.title.text
#print z
h ='Contact Information: '
a = len('Contact Information: ')
b = len(z)
zz = z[a:b]
country = soup.findAll('tr')
for i in country:
	v =  i.text
	f = str(v)
	if "Web site address" in f:
		k = len("Web site address")
		t = len(f)
		g = f[k:t]
		zz = zz +','+g
print(zz)
