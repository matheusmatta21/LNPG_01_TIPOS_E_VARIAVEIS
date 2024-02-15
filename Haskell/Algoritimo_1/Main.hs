module Main where

soma :: Double -> Double -> Double
soma x y = x + y

subtracao :: Double -> Double -> Double
subtracao x y = x - y

multiplicacao :: Double -> Double -> Double
multiplicacao x y = x * y

divisao :: Double -> Double -> Double
divisao x y = x / y


main = do
  putStrLn "Digite o primeiro numero:"
  primeiro_input <- getLine
  let primeiro_numero = read primeiro_input :: Double
  putStrLn "Digite o segundo numero:"
  segundo_input <- getLine
  let segundo_numero = read segundo_input :: Double
  putStrLn ("Soma: " ++ show (soma primeiro_numero segundo_numero))
  putStrLn ("Subtracao: " ++ show (subtracao primeiro_numero segundo_numero))
  putStrLn ("Multiplicacao: " ++ show (multiplicacao primeiro_numero segundo_numero))
  putStrLn ("Divisao: " ++ show (divisao primeiro_numero segundo_numero))
