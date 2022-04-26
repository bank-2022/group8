const db = require('../database');

const debit_transfer = {

    debitTransfer: function(Id,IDcard,amount,callback) {
        return db.query(
          'CALL debit_transfer(?,?,?)',[Id,IDcard,amount],callback);
      },

};
module.exports = debit_transfer;