SELECT m.id, m.name 
from movies as m 
join prices as p 
on id_prices = p.id and p.categorie = 'Promotion';
