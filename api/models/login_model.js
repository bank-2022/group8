const db = require('../database');

const login={
  checkpin: function(cardNum, callback) {
      return db.query('SELECT pin FROM card WHERE cardNum = ?',[cardNum], callback); 
    }
};
          
module.exports = login;
