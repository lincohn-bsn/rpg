# rpg

# Guia de Comandos do Git

---

## Configuração Inicial

Define suas credenciais básicas de usuário.

```bash
# Configurar nome de usuário global
git config --global user.name "Seu Nome"

# Configurar e-mail global
git config --global user.email "seu_email@exemplo.com"

# Definir a branch padrão como 'main'
git config --global init.defaultBranch main

# Verificar as configurações atuais
git config --list
```

---

## Criando e Clonando Repositórios

```bash
# Inicializar um novo repositório Git na pasta atual
git init

# Clonar um repositório remoto para a sua máquina
git clone <url-do-repositorio>
```

---

## Ciclo Básico de Trabalho (Staging e Commit)

```bash
# Verificar o status dos arquivos (modificados, não rastreados, etc.)
git status

# Adicionar um arquivo específico para a área de preparação (staging)
git add <nome-do-arquivo>

# Adicionar todos os arquivos modificados ou novos
git add .

# Registrar as alterações preparadas com uma mensagem
git commit -m "Descrição clara da alteração"

# Adicionar e comitar tudo em um único comando (apenas arquivos já rastreados)
git commit -am "Mensagem do commit"
```

---

## Trabalhando com Branches (Ramificações)

```bash
# Listar todas as branches locais
git branch

# Criar uma nova branch
git branch <nome-da-branch>

# Mudar para uma branch existente
git checkout <nome-da-branch>
# ou usando a versão moderna:
git switch <nome-da-branch>

# Criar e mudar para uma nova branch ao mesmo tempo
git checkout -b <nome-da-branch>
# ou:
git switch -c <nome-da-branch>

# Deletar uma branch local (seguro)
git branch -d <nome-da-branch>

# Forçar a deleção de uma branch
git branch -D <nome-da-branch>
```

---

## Integração e Mesclagem (Merge e Rebase)

```bash
# Mesclar uma branch na branch atual
git merge <nome-da-branch>

# Reaplicar commits de uma branch sobre outra (histórico linear)
git rebase <nome-da-branch>

# Resolver conflitos: edite os arquivos com conflito e depois rode:
git add <arquivo-resolvido>
git rebase --continue
```

---

## Sincronização com Repositório Remoto

```bash
# Ver os repositórios remotos vinculados
git remote -v

# Adicionar um repositório remoto
git remote add origin <url-do-repositorio>

# Enviar os commits locais para o repositório remoto
git push origin <nome-da-branch>

# Enviar e vincular a branch local à remota pela primeira vez
git push -u origin <nome-da-branch>

# Baixar e mesclar as alterações do repositório remoto (`fetch` + `merge`)
git pull origin <nome-da-branch>

# Baixar as alterações do remoto sem aplicar na sua branch atual
git fetch origin
```

---

## Histórico e Inspeção

```bash
# Visualizar o histórico de commits
git log

# Visualizar o histórico de forma resumida e em uma linha
git log --oneline --graph --decorate --all

# Ver as diferenças entre arquivos modificados ainda não preparados
git diff

# Ver o que foi preparado para o próximo commit
git diff --staged
```

---

## Desfazendo Alterações

```bash
# Descartar alterações em um arquivo no diretório de trabalho
git checkout -- <nome-do-arquivo>
# ou a versão moderna:
git restore <nome-do-arquivo>

# Tirar um arquivo da área de preparação (staging)
git restore --staged <nome-do-arquivo>

# Desfazer o último commit mantendo as alterações nos arquivos (--soft)
git reset --soft HEAD~1

# Desfazer o último commit e apagar todas as alterações (--hard)
git reset --hard HEAD~1

# Criar um novo commit que reverte as alterações de um commit anterior
git revert <hash-do-commit>
```

---

## Salvando Temporariamente (Stash)

```bash
# Salvar modificações atuais temporariamente sem comitar
git stash

# Listar todos os "stashes" salvos
git stash list

# Reaplicar o último stash salvo e removê-lo da lista
git stash pop

# Aplicar o último stash sem removê-lo da lista
git stash apply
```
