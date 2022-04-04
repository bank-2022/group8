const db = require('../database');

const user = {
  getById: function(id, callback) {
    return db.query('select * from user where iduser=?', [id], callback);
  },
  getAll: function(callback) {
    return db.query('select * from user', callback);
  },
  add: function(user, callback) {
    return db.query(
      'insert into user (name,address,phoneNum) values(?,?,?)',
      [user.name, user.address, user.phoneNum],
      callback
    );
  },
  delete: function(id, callback) {
    return db.query('delete from user where iduser=?', [id], callback);
  },
  update: function(id, user, callback) {
    return db.query(
      'update user set name=?,address=?, phoneNum=? where iduser=?',
      [user.name, user.address, user.phoneNum, id],
      callback
    );
  }
};
module.exports = user;