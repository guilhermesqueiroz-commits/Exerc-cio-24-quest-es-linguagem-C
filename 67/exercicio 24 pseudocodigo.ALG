 algoritmo "CentralAtendimentosFDA"

var
   opcao, tipa, prioridade: inteiro
   software, hardware, rede: inteiro
   urgente, prioritario, normal: inteiro
   chamados: inteiro

inicio
   software <- 0
   hardware <- 0
   rede <- 0
   urgente <- 0
   prioritario <- 0
   normal <- 0
   chamados <- 0

   repita
      escreval("============================")
      escreval(" CENTRAL DE ATENDIMENTOS FDA ")
      escreval("============================")

      repita
         escreval("")
         escreval("Digite o tipo de atendimento:")
         escreval("1 - SOFTWARE")
         escreval("2 - HARDWARE")
         escreval("3 - REDE")
         escreva("Opção: ")
         leia(tipa)

         se (tipa < 1) ou (tipa > 3) entao
            escreval("Opção Inválida! Digite 1, 2 ou 3.")
         fimse

         escolha tipa
            caso 1
               software <- software + 1
               escreval("Atendimento de Software selecionado...")
            caso 2
               hardware <- hardware + 1
               escreval("Atendimento de Hardware selecionado...")
            caso 3
               rede <- rede + 1
               escreval("Atendimento de Rede selecionado...")
         fimescolha
      ate (tipa >= 1) e (tipa <= 3)

      repita
         escreval("")
         escreval("Digite a prioridade:")
         escreval("1 - Urgente")
         escreval("2 - Prioritário")
         escreval("3 - Normal")
         escreva("Opção: ")
         leia(prioridade)

         se (prioridade < 1) ou (prioridade > 3) entao
            escreval("Prioridade Inválida! Digite 1, 2 ou 3.")
         senao
            se prioridade = 1 entao
               urgente <- urgente + 1
               escreval("Prioridade Registrada: Urgente")
            senao
               se prioridade = 2 entao
                  prioritario <- prioritario + 1
                  escreval("Prioridade Registrada: Prioritário")
               senao
                  normal <- normal + 1
                  escreval("Prioridade Registrada: Normal")
               fimse
            fimse
         fimse
      ate (prioridade >= 1) e (prioridade <= 3)

      chamados <- chamados + 1

      escreval("")
      escreva("Deseja registrar outro atendimento? (1 - Sim | 0 - Sair): ")
      leia(opcao)

      se (opcao <> 1) e (opcao <> 0) entao
         escreval("Opção não reconhecida. Encerrando o sistema...")
         opcao <- 0
      fimse

   ate opcao = 0

   se chamados > 0 entao
      escreval("")
      escreval("=======================================")
      escreval("           RELATÓRIO FINAL             ")
      escreval("=======================================")
      escreval("Total de Atendimentos : ", chamados)
      escreval("---------------------------------------")
      escreval("Atendimentos de Software : ", software)
      escreval("Atendimentos de Hardware : ", hardware)
      escreval("Atendimentos de Rede     : ", rede)
      escreval("---------------------------------------")
      escreval("Prioridade Urgente       : ", urgente)
      escreval("Prioridade Prioritária   : ", prioritario)
      escreval("Prioridade Normal        : ", normal)
      escreval("=======================================")
   senao
      escreval("")
      escreval("Nenhum chamado foi registrado durante a execução.")
   fimse

fimalgoritmo