
const http = require('http');
const url = require('url');

const server = http.createServer(function (request, response) {
   
    let queryObject = url.parse(request.url, true).query;

   
    let fname = queryObject.fName;

    response.writeHead(200, { 'Content-Type': 'text/html' });
    if (fname) {
        response.write(`<h1>Hello ${fname}</h1>`);
    } else {
        response.write("<h1>Hello IET student !!!!!!!</h1>");
    }
    response.end();
});

server.listen(3000, () => {
    console.log('Server running at http://localhost:3000/');
});

