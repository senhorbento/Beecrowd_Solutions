SELECT m.id, m.name 
from movies as m join genres as g 
on id_genres = g.id and g.description = 'Action';
