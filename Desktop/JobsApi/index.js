const express=require('express');
require('dotenv').config();

const Connect=require('./src/config/databaseConfig.js');
const APP=express();
const mainRouter=require('./src/routes')







APP.use(express.json());
APP.use(express.urlencoded({extended:true}));


APP.use('/api',mainRouter);







const PORT=process.env.PORT ||5000;
 
const serverStarted=async()=>{
    try {
        await Connect(process.env.mongo_URI);
        
        APP.listen(PORT,()=>{
        console.log(`developemnt server is started on ${PORT}`);

        });
    } catch (error) {
        console.log(error);
    }
}
serverStarted();