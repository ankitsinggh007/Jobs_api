const express=require('express');
const authRouter=require('./auth.js'); 
const v1Router=express.Router();

v1Router.use('/auth',authRouter);


module.exports=v1Router;