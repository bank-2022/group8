const express = require('express');
const router = express.Router();
const debit_transfer = require('../models/debit_model');


router.get('/:Id?/:IDcard?/:amount?',
function(request, response) {
    debit_transfer.debitTransfer(request.params.Id,request.params.IDcard,request.params.amount, function(err, dbResult) {
        if (err) {
            response.json(err);
          } else {
            response.json(dbResult);
          }
    });
});

module.exports = router;