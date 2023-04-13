const UserRepo = require("../repository/User-repo.js");

class UserService{
    constructor(){
    this.UserRepo = new UserRepo();
    }
async signup(data){
    try {
        const user=await this.UserRepo.create(data);
        const token=user.genJWT();
        console.log(token,"token")
    return {name:user.name,token:token};
    } catch (error) {
        throw error;
    }
}
}
module.exports=UserService;