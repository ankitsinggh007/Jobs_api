
class CrudRepo{

    constructor(model){
        this.model = model;
    }

    async create(data){
        try {
            const response=await this.model.create(data);
        return response;
        } catch (error) {
            console.log(`something went wrong in crud repo ${error.message}`);
        }
    }
    async get(id){
        try {
            const response=await this.model.findById(id);
        return response;
        } catch (error) {
            console.log(`something went wrong in crud repo ${error.message}`);
        }
    }
    async getAll(){
        try {
            const response=await this.model.find({});
        return response;
        } catch (error) {
            console.log(`something went wrong in crud repo ${error.message}`);
        }
    }
    async update(id,data){
        try {
            const response=await this.model.findByIdAndUpdate(id,data,{new:true});
        return response;
        } catch (error) {
            console.log(`something went wrong in crud repo ${error.message}`);
        }
    }
    async destroy(id){
        try {
            const response=await this.model.findByIdAndDelete(id);
        return response;
        } catch (error) {
            console.log(`something went wrong in crud repo ${error.message}`);
        }
    }
}

module.exports =CrudRepo;