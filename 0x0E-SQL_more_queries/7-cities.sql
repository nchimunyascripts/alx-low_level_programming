-- creates the database hbtn_0d_usa and the table cities (in the database hbtn_0d_usa) on your MySQL serve
USE hbtn_0d_usa;
CREATE TABLE IF NOT EXISTS cities(id INT AUTO_INCREMENT PRIMARy KEY, 
  state_id INT NOT NULL, FOREIGN KEY(state_id) REFERENCES states(id),
  name VARCHAR(256) NOT NULL);

