module Main where

main = do
  putStrLn "Digite a idade: "
  input <- getLine
  let idade = read input :: Int
  if idade >= 18 then putStrLn "Maior de idade"
  else putStrLn "Menor de idade"
