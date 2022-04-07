const express = require('express');
const res = require('express/lib/response');
const router = express.Router();
const account = require('../models/account_model');

router.get('/account/:id?',
    function(request, response){
        if(request.params.id){
            account.getById(request.params.id, function(err, dbResult){
                if(err){
                    response.json(err);
                }else{
                    response.json(dbResult);
                }
            });
        }else{
            account.getAll(function(err, dbResult){
                if(err){
                    response.json(err);
                }else{
                    response.json(dbResult);
                }
            });
        }

});

router.post('/addAccount',
    function(request,response){
        account.add(request.body, function(err, dbResult){
            if(err){
                response.json(err);
            }else{
                response.json(dbResult);
            }
        });
    }
);

router.delete('/deleteAccount/:id',
    function(request,response){
        account.delete(request.params.id, function(err, dbResult){
            if(err){
                response.json(err);
            }else{
                response.json(dbResult);
            }
        });
    }
);

router.put('/updateAccount/:id',
    function(request, response){
        account.update(request.params.id, request.body, function(err, dbResult){
            if(err){
                response.json(err);
            }else{
                response.json(dbResult);
            }
        });
    }
);

module.exports = router;