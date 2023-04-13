const UserModal = require("../models/User");
const UserService = require("../service/UserService");
require('dotenv').config();
const JWT=require('jsonwebtoken');
const userService=new UserService();

const signUp=async(req,res)=>{
    console.log(req.body,"body")
try {
    const response=await userService.signup({
        email: req.body.email,
        password: req.body.password,
        name: req.body.name
    })
    return res.status(201).json({
       sucess:true,
       message:'Successfully created a new user',
       data:response,
       err:{}
    });
} catch (error) {
    return res.status(500).json({
        message: 'Something went wrong',
        data: {},
        success: false,
        err: error
    });
}
}
module.exports ={
    signUp
}