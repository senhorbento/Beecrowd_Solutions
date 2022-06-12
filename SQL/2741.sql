SELECT CAST('Approved: ' AS VARCHAR(20)) || 
CAST(name AS VARCHAR(255)) AS name,
grade
FROM students
WHERE grade >= 7
ORDER BY grade DESC;
