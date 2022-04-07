const db = require('../database');

const transactions = {
  getById: function(id, callback) {
    return db.query('select * from transactions where idaccount=?', [id], callback);
  },
  getAll: function(callback) {
    return db.query('select * from transactions', callback);
  },
  add: function(transactions, callback) {
    return db.query(
      'insert into transactions (sum,date,idcard,idaccount,transaction) values(?,?,?,?,?)',
      [transactions.sum, transactions.date, transactions.idcard, transactions.idaccount, transactions.transaction],
      callback
    );
  },
  
};
module.exports = transactions;