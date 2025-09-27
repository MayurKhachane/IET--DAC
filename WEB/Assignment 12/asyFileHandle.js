
const fs = require('fs');


const data = "This is  data hello asynchronously.";
fs.writeFile('sampleAsync.txt', data, (err) => {
    if (err) {
        console.error('Error writing file asynchronously:', err);
        return;
    }
    console.log('Asynchronous Write Successful!');
});


fs.readFile('sampleAsync.txt', 'utf8', (err, fileData) => {
    if (err) {
        console.error('Error reading file asynchronously:', err);
        return;
    }
    console.log('Asynchronous Read Data:', fileData);
});
