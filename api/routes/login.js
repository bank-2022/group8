const express = require('express');
const router = express.Router();
const bcrypt = require('bcryptjs');
const login = require('../models/login_model');
const jwt = require('jsonwebtoken');
const dotenv = require('dotenv');

router.post('/', 
  function(request, response) {
    if(request.body.cardNum && request.body.pin){
      const cardNum = request.body.cardNum;
      const pin = request.body.pin;
        login.checkpin(cardNum, function(dbError, dbResult) {
          if(dbError){
            response.json(dbError);
          }
          else{
            if (dbResult.length > 0) {
              bcrypt.compare(pin,dbResult[0].pin, function(err,compareResult) {
                if(compareResult) {
                  console.log("succes");
                  const token = generateAccessToken({ card: cardNum });
                  response.send(token);
                }
                else {
                    console.log("wrong pin");
                    response.send(false);
                }			
              }
              );
            }
            else{
              console.log("user does not exists");
              response.send(false);
            }
          }
          }
        );
      }
    else{
      console.log("cardNum or pin missing");
      response.send(false);
    }
  }
  
);
function generateAccessToken(card) {
  dotenv.config();
  return jwt.sign(card, process.env.MY_TOKEN, { expiresIn: '30s' });
}

function generateAccessToken(card) {
  dotenv.config();
  return jwt.sign(card, process.env.MY_TOKEN, { expiresIn: '1800s' });
}


module.exports=router;