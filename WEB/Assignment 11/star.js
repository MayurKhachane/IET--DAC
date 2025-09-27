const num = Number(process.argv[2]);

if (num < 1 || num > 5 || !Number.isInteger(num)) {
  console.error("Error: Enter an integer between 1 and 5.");
  process.exit(1);
}

for (let i = num; i > 0; i--) {
  console.log("* ".repeat(i).trim());
}
