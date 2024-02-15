module Calculadora where

mediaPonderada :: Double -> Double -> Double -> Double -> Double -> Double -> Double
mediaPonderada x1 x2 x3 y1 y2 y3 = ((x1 * y1) + (x2 * y2) + (x3 * y3)) / ((y1 + y2 + y3))

main = do
  putStrLn "Digite a primeira nota: "
  input1 <- getLine
  let nota1 = read input1 :: Double
  putStrLn "Digite o peso dessa nota: "
  input2 <- getLine
  let peso1 = read input2 :: Double
  putStrLn "Digite a segunda nota: "
  input3 <- getLine
  let nota2 = read input3 :: Double
  putStrLn "Digite o peso dessa nota: "
  input4 <- getLine
  let peso2 = read input4 :: Double
  putStrLn "Digite a terceira nota: "
  input5 <- getLine
  let nota3 = read input5 :: Double
  putStrLn "Digite o peso dessa nota: "
  input6 <- getLine
  let peso3 = read input6 :: Double
  putStrLn ("A media ponderada é " ++ show (mediaPonderada nota1 nota2 nota3 peso1 peso2 peso3))
