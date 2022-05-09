defmodule Exercicio do
  def funcao do
    {raio, _} = IO.read(:stdio,:line)
    |> Float.parse
    IO.puts("X = #{:erlang.float_to_binary(:math.pow(raio,2) * 3.14159,[decimals: 4])}")
  end
end
