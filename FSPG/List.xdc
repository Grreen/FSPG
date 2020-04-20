<?xml version="1.0"?><doc>
<members>
<member name="T:Way" decl="false" source="C:\Users\kiril\source\repos\FSPG\FSPG\Structs.h" line="7">
<summary>
Структкра, которая хранит данные о найденном пути.
</summary>
</member>
<member name="T:Data" decl="false" source="C:\Users\kiril\source\repos\FSPG\FSPG\Structs.h" line="19">
<summary>
Структкра, которая хранит данные о типе хранения данных о графе(matrix/list), размере графа и значениях вершин.
</summary>
</member>
<member name="T:Node" decl="false" source="C:\Users\kiril\source\repos\FSPG\FSPG\Structs.h" line="29">
<summary>
Структкра, которая хранит данные о вершинах графа (индекс, вес до вершины и указатель на следующую вершину).
</summary>
</member>
<member name="T:List" decl="false" source="C:\Users\kiril\source\repos\FSPG\FSPG\List.h" line="5">
<summary>
Класс, реализующий односвязанный список.
</summary>
</member>
<member name="M:List.Add(System.Int32,System.Int32)" decl="true" source="C:\Users\kiril\source\repos\FSPG\FSPG\List.h" line="14">
<summary>
Функция, добавляющая новый элемент в список.
<param name="indexVertex">Номер вершины.</param>
<param name="weight">Вес до вершины.</param>
</summary>
</member>
<member name="M:List.Print(System.Int32)" decl="true" source="C:\Users\kiril\source\repos\FSPG\FSPG\List.h" line="20">
<summary>
Функция, которая выводит значение списка.
<param name="index">Номер вершины.</param>
</summary>
</member>
<member name="M:List.Count" decl="true" source="C:\Users\kiril\source\repos\FSPG\FSPG\List.h" line="25">
<summary>
Функция, которая возвращает количество элементов списка.
</summary>
<returns>Возвращает количество элементов списка.</returns>
</member>
<member name="M:List.op_Subscript(System.Int32!System.Runtime.CompilerServices.IsConst)" decl="true" source="C:\Users\kiril\source\repos\FSPG\FSPG\List.h" line="30">
<summary>
Перегруженный оператор [].
<param name="i">Индекс выбранного элемента в списке.</param>
</summary>
<returns>Возвращает выбранный элемент списка (0, если ничего не найдено).</returns>
</member>
</members>
</doc>