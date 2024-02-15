module Main where

verificacaoImparPar :: Int -> Bool
verificacaoImparPar = even

main = do
  putStrLn "Digite um numero:"
  primeiro_input <- getLine
  let numero = read primeiro_input :: Int
  if verificacaoImparPar numero then putStrLn "Par"
  else putStrLn "Ímpar"
