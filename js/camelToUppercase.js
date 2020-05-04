const camelToSnakeCase = str => str.replace(/[A-Z]/g, letter => `_${letter.toLowerCase()}`);
const camelToSnakeUpperse = str => camelToSnakeCase(str).toUpperCase();


process.argv.forEach((arg, index) => {
	if (index > 1) {
		console.log(camelToSnakeUpperse(arg));
	}
});
