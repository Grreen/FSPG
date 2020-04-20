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
<member name="T:Algorithms" decl="false" source="C:\Users\kiril\source\repos\FSPG\FSPG\Algorithms.h" line="10">
<summary>
Класс, который представляет основной функционал.
</summary>
</member>
<member name="M:Algorithms.ConvertToMatrix(std.list&lt;std.basic_string&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte,std.char_traits{System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte},std.allocator&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte&gt;&gt;,std.allocator&lt;std.basic_string&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte,std.char_traits{System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte},std.allocator&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte&gt;&gt;&gt;&gt;,System.Int32)" decl="true" source="C:\Users\kiril\source\repos\FSPG\FSPG\Algorithms.h" line="15">
<summary>
Функция, которая парсит входные данные и преобразует их в числовую матрицу.
<param name="edges">Строки, содержащие данные о ребрах и вершинах графа.</param>
<param name="sizeMatrix">Количество вершин графа.</param>
</summary>
</member>
<member name="M:Algorithms.ConvertToList(std.list&lt;std.basic_string&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte,std.char_traits{System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte},std.allocator&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte&gt;&gt;,std.allocator&lt;std.basic_string&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte,std.char_traits{System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte},std.allocator&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte&gt;&gt;&gt;&gt;,System.Int32)" decl="true" source="C:\Users\kiril\source\repos\FSPG\FSPG\Algorithms.h" line="21">
<summary>
Функция, которая парсит входные данные и преобразует их в односвязанный список.
<param name="edges">Строки, содержащие данные о ребрах и вершинах графа.</param>
<param name="sizeMatrix">Количество вершин графа.</param>
</summary>
</member>
<member name="M:Algorithms.ReadFile(std.basic_string&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte,std.char_traits{System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte},std.allocator&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte&gt;&gt;)" decl="true" source="C:\Users\kiril\source\repos\FSPG\FSPG\Algorithms.h" line="27">
<summary>
Функция, которая считывает данные из файла и на их основании решает как хранить граф в памяти (matrix/link).
<param name="filename">Содержит название файла, в котором хранятся данные.</param>
</summary>
</member>
<member name="M:Algorithms.FindWay(System.Int32,System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte**)" decl="true" source="C:\Users\kiril\source\repos\FSPG\FSPG\Algorithms.h" line="44">
<summary>
Основная функция, которая находит кратчайший путь от начальной вершины до конечной.
<param name="argc">Количество элементов командной строки.</param>
<param name="argv">Аргументы командной строки.</param>
</summary>
</member>
<member name="M:main(System.Int32,System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte**)" decl="false" source="C:\Users\kiril\source\repos\FSPG\FSPG\FSPG.cpp" line="5">
<summary>
Входная точка программы
<param name="argc">Количество элементов командной строки.</param>
<param name="argv">Аргументы командной строки.</param>
</summary>
</member>
</members>
</doc>