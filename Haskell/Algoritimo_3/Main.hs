module Main where

temperatura_fahrenheit :: Double -> Double
temperatura_fahrenheit x = (x * 9/5) + 32

main = do
  putStrLn "Digite a temperatura em Celsius:"
  input <- getLine
  let temperatura_celsius = read input :: Double
  putStrLn ("A temperatura em Fahrenheit é: " ++ show (temperatura_fahrenheit temperatura_celsius))
