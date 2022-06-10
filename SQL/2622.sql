SELECT C.NAME
FROM customers as c 
JOIN legal_person as lp
ON  lp.id_customers = c.id;
