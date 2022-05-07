const nomes = ["jarDel", "AUGusto", "Daniel", "Alberto"]

const nomestratados = nomes.map((nomeAtual) => {
    return nomeAtual[0].toUpperCase() + nomeAtual.toLowerCase().slice(1)
})

console.log(nomestratados)