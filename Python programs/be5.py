from bs4 import BeautifulSoup
import urllib2
for ll in range(1,199):
	try:
		quote_page = 'https://www.wipo.int/directory/en/contact.jsp?country_id='+str(ll)
		page = urllib2.urlopen(quote_page)
	except Exception, e:
		continue
	soup = BeautifulSoup(page,'html.parser')
	z = soup.title.text
	a = len('Contact Information: ')
	b = len(z)
	zz = z[a:b]
	country = soup.findAll('tr')
	for i in country:
		v =  i.text
		f = v.encode('utf-8').strip()
		if "Web site address" in f:
			k = len("Web site address")
			t = len(f)
			g = f[k:t]
			zz = zz +','+g
	print(zz)