# Easy , best test 66% and 100%
SELECT name as Customers FROM Customers WHERE Customers.id NOT IN (SELECT customerId FROM Orders )