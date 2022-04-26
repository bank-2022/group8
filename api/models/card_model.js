const db = require('../database');
const bcrypt = require('bcryptjs');

const saltRounds=10;

const card = {
  getByCardNum: function(cardNum, callback) {
    return db.query('select CardIdAccount, idcard from card where cardNum=?',[cardNum], callback);
  },
  getAll: function(callback) {
    return db.query('select * from card', callback);
  },
  add: function(card, callback) {
    bcrypt.hash(card.pin, saltRounds, function(err, hash) {
      return db.query('insert into card (cardNum, pin, CardIdAccount) values(?,?,?)',
      [card.cardNum, hash, card.CardIdAccount], callback);
    });
  },
  delete: function(id, callback) {
    return db.query('delete from card where idcard=?', [id], callback);
  },
  update: function(id, card, callback) {
    bcrypt.hash(card.pin, saltRounds, function(err, hash) {
      return db.query('update card set cardNum=?, pin=?, CardIdAccount=? where idcard=?',
      [card.cardNum, hash, card.CardIdAccount, id], callback);
    });
  }
};
module.exports = card;