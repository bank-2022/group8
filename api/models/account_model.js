const db = require('../database');

const account = {
    getById: function(id, callback){
        return db.query('select * from account where idaccount=?', [id], callback);
    }, 
    getAll: function(callback){
        return db.query('select * from account', callback);
    },
    add: function(account, callback){
        return db.query(
            'insert into account (balance) values (?)', 
            [account.balance], callback
        );        
    }, 
    delete: function(id, callback){
        return db.query(
            'delete from account where idaccount=?',
            [id], callback
        );
    },
    update: function(id, account,callback){
        return db.query(
            'update account set balance=? where idaccount=?',
            [account.balance, id], callback
        );
    }
}
module.exports = account;
