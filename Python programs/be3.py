from bs4 import BeautifulSoup
import urllib2
arr = [7811611,8012515,7976828,7867948,8202545,8202906,8329230,8618050,8513456,8802163]
for i in arr:
	try:
		quote_page = 'https://patents.google.com/patent/US' +str(i)+'B1/en?oq='+str(i)
		page = urllib2.urlopen(quote_page)
	except Exception, e:
		quote_page = 'https://patents.google.com/patent/US' +str(i)+'B2/en?oq='+str(i)
		page = urllib2.urlopen(quote_page)
	soup = BeautifulSoup(page,'html.parser')
	print soup.title
	inv = soup.findAll('dd',attrs={'itemprop': 'inventor'})
	print('Inventors : ')
	for i in inv:
		print i.text
	ass = soup.findAll('dd',attrs={'itemprop': 'assigneeOriginal'})
	print('Assignee : ')
	for i in ass:
		print i.text
	date = soup.findAll('dd',attrs={'itemprop': 'filingDate'})
	print('Filing Date : ')
	for i in date:
		print i.text
	abstract = soup.findAll('div',attrs={'class': 'abstract','num': 'p-0001'})
	print('Abstract : ')
	for i in abstract:
		print i.text
	print('\n')
	print('********************')
	print('\n')