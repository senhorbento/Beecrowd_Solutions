defmodule Exercicio do
  def funcao do
    {value1, _} = IO.read(:stdio,:line)
    |> Integer.parse
    {value2, _}  = IO.read(:stdio,:line)
    |> Integer.parse
    IO.puts("X = #{value1+value2}")
  end
end
