const readline = require('readline');
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

rl.on('close', function () {
    // 큰 따옴표(")와 작은 따옴표(')가 섞여 있으므로 이스케이프 처리를 해줘야 한다
    console.log("!@#$%^&*(\\'\"<>?:;")
});
rl.close();