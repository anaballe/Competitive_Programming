import xlrd
loc="/home/anandshukla/Downloads/Harish/chit fund exercise.xlsx"
wb=xlrd.open_workbook(loc)
sheet=wb.sheet_by_index(0)
rows=sheet.nrows
s1=0
b=sheet.cell_value(2,1)*12
for j in range(2,rows):
    s1=s1+sheet.cell_value(j,5)
for i in range(2,rows):
    Sum=0
    Sum=s1+sheet.cell_value(i,4)
    Sum=(Sum*12)/(rows-2)
    per=Sum-b
    if(Sum>0):
        per=(per*100)/b
        print(" person who wins bid in month number",(i-1)," has annual return of ",Sum," and percentage return of ",per,"%")
    else:
        per=0-per
        per=(per*100)/b
        print(" person who wins bid in month number ",(i-1)," has annual return of ",Sum," and percentage return of -",per,"%")
        