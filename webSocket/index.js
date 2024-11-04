
import express from 'express';
import http from 'http';
import path from 'path'
import {Server} from 'socket.io';
const app = express();
const server = http.createServer(app);
const io = new Server(server);


// socket io
io.on('connection',(client)=>{
    client.on('message',(message)=>{
        console.log("a new user mesage",message)
        io.emit("message",message)
    })
}) 


app.use(express.static(path.resolve('./public')));

app.get('/',(req,res)=>{
    res.sendFile('/public/index.html');
});




server.listen(3000,()=>{console.log("server started at port 3000")})