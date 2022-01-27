import csv
f=open("myfile4.csv","w")
writer=csv.DictWriter(f,fieldnames=["fruit","count"])
writer.writeheader()
writer.writerow({"fruit":"apple","count":"1"})
writer.writerow({"fruit":"banana","count":"2"})
f.close()
c=0
f=open("myfile4.csv")
reader=csv.DictReader(f)
for row in reader:
 if c==0:
  print(f'{" ".join(row)}')
  print(f'{row["fruit"]},{row["count"]}')
f.close()
