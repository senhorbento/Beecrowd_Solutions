SELECT c.name, r.rentals_date
FROM customers as c JOIN rentals as r
ON r.id_customers = c.id
WHERE r.rentals_date >= '20160901' and r.rentals_date <= '20160930';
