
from django.urls import path
from .views import * #( * is used to import evrythinh from views automatically )

urlpatterns = [
   path('home/',home,name="home"),
   path('create/',create,name="create"),
   path('edit/<int:pk>/',edit,name="edit"),
   path('delete/<int:pk>/',delete,name="delete"),
   path('deleteall/',deleteall,name="deleteall")
]
