from django.db import models

# Create your models here.
def tets():
    pass
status_list=[('Done', 'Done'),('In progress','In progress'),('Not Done','Not Done'),('muna','muna')]
#two tuples of same data are made for read and write of the same data !
class ToDo(models.Model):
    name = models.CharField(max_length=300)
    description = models.TextField()
    status = models.CharField(max_length=50,choices=status_list)

    def __str__(self):
        return self.name