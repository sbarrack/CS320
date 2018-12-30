-- Assignment #3-2, Stephen Barrack

function InfixToPostfix(str)
  split = {}
  stack = {}
  queue = {}
  for token in str:gmatch("[^" .. " " .. "]+") do
    table.insert(split, token)
  end
  for k, v in pairs(split) do
    if tonumber(v) ~= nil then
      table.insert(queue, v)
    else
      if stack[1] == nil then
        table.insert(stack, v)
      else
        if gt(stack[#stack], v) then
          table.insert(queue, table.remove(stack))
        end
        table.insert(stack, v)
      end
    end
  end
  for k,v in pairs(stack) do print(v) end
  while stack[1] ~= nil do
    table.insert(queue, table.remove(stack))
  end
  return table.concat(queue, " ")
end

function gt(a, b)
  if (a == ("+" or "-")) and (b == ("*" or "/" or "%")) then
    return false
  else
    return true
  end
end
