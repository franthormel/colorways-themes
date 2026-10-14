-- Theme test: SQL
CREATE TABLE users (
    id INTEGER PRIMARY KEY,
    name VARCHAR(100) NOT NULL,
    age INTEGER DEFAULT 0,
    active BOOLEAN DEFAULT TRUE
);

INSERT INTO users (name, age, active)
VALUES ('Ada', 36, TRUE), ('Linus', 0, FALSE);

SELECT u.name,
       CASE
           WHEN u.age > 30 THEN 'Hello, ' || u.name || '!'
           ELSE 'Young user'
       END AS greeting
FROM users AS u
WHERE u.active = TRUE
ORDER BY u.age DESC;