
const fs = require('fs');


const data = "This is data hiiiiiiiiii synchronously ";
fs.writeFileSync('sampleSync.txt', data);


const fileData = fs.readFileSync('sampleSync.txt', 'utf8');
console.log('Synchronous Read Data:', fileData);
