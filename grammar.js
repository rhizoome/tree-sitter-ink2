module.exports = grammar({
  name: "ink",

  rules: {

    program: $ => repeat(/\w/)

  }

})
