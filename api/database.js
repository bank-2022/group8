const mysql = require('mysql');
const connection = mysql.createPool({
  host: 'localhost',
  user: 'Bankuser',
  password: 'Bankpass',
  database: 'banksimul'
});
module.exports = connection;