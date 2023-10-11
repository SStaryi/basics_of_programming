//
// Created by Artyom on 11.10.2023.
//

#ifndef BASICS_OF_PROGRAMMING_LABORATORY_WORK_5_H
#define BASICS_OF_PROGRAMMING_LABORATORY_WORK_5_H

#include <stdio.h>
#include <limits.h>

#include "../standart_function/standart_function.h"

/*
 * Команда 231A codeforces
 *
 * Однажды трое лучших друзей Петя, Вася и Тоня решили создать команду и участвовать в соревновании
 * по программированию. Обычно на соревнованиях по программированию участникам предлагается
 * несколько задач. Еще перед началом друзья договорились, что они будут реализовывать задачу, если
 * как минимум двое из них придумали и уверены в решении, в противном случае ребята не будут
 * писать решение этой задачи.
 * На этом соревновании организаторы предложили n задач. Для каждой задачи известно, кто из
 * друзей придумал и уверен в ее решении. Помогите друзьям найти количество задач, по которым они
 * будут писать решение.
 */
void team();

/*
 * Неправильное вычитание 977A codeforces
 *
 * Маленькая девочка Таня учится уменьшать числа на единицу, но она делает это неправильно с
 * числами, состоящими из нескольких цифр. Таня вычитает единицу из числа по следующему алгоритму:
 * если последняя цифра числа не равна нулю, она уменьшает число на единицу;
 * если последняя цифра числа равна нулю, она делит число на 10 (то есть удаляет его последнюю цифру).
 * Вам задано целое число n. Таня хочет вычесть из него единицу k раз. Ваша задача вывести результат
 * после всех k вычитаний.
 * Гарантируется, что ответ будет являться целым положительным числом.
 */
void incorrect_subtraction();

/*
 * Трамвай 116A codeforces
 *
 * В Линейном Королевстве всего один трамвайный маршрут. На нем n остановок, пронумерованных от 1 до n
 * в порядке следования трамвая. На i-ой остановке ai человек выходит из трамвая, а bi человек заходит
 * в трамвай. Трамвай прибывает на первую остановку пустым. Также, когда трамвай прибывает на
 * последнюю остановку, все пассажиры выходят, и трамвай уезжает пустым.
 * Ваша задача — найти минимальную возможную вместимость трамвая, такую, что количество пассажиров
 * в трамвае в любой момент времени не превосходит эту вместимость. Учтите, что на каждой остановке
 * все пассажиры выходят до того как какой-либо пассажир заходит.
 */
void tram();

/*
 * Ваня и забор 677A codeforces
 *
 * Ваня с друзьями идёт по запрещенной территории возле забора высотой h. Чтобы охранник их не
 * заметил, высота каждого из друзей не должна превышать h. При этом каждый из них может
 * пригнуться, тогда его точно не будет видно охраннику. Высота i-го из друзей равняется ai.
 * Будем считать, что ширина человека, идущего в полный рост, равна 1, а согнутого — 2. Друзья
 * хотят идти по дороге в один ряд, чтобы иметь возможность разговаривать друг с другом.
 * Какой минимальной ширины должна быть дорога, чтобы все они поместились на ней в один ряд и
 * охранник никого не увидел?
 */
void vanya_and_the_fence();

/*
 * Юра и заселение 467A codeforces
 *
 * Недавно Юра поступил в БГУКП (Берляндский Государственный Университет Крутых Программистов). У
 * Юры есть друг Леша, который поступил вместе с ним, и теперь они заселяются в общежитие.
 * Юра и Леша хотят жить в одной комнате. Всего в общежитии есть n комнат. В данный момент в комнате
 * с номером i живут pi человек, когда всего в этой комнате может жить qi человек (pi ≤ qi).
 * Посчитайте, сколько комнат общежития смогут вместить Юру и Лешу вместе?
 */
void jura_and_settlement();

/*
 * Выбор команд 432A codeforces
 *
 * В центре олимпиадной подготовки программистов СГУ (ЦОПП СГУ) занимаются n ребят. Про каждого из
 * них известно, сколько раз он/она уже участвовал/участвовала в чемпионате мира по
 * программированию (ACM ICPC). По правилам ACM ICPC каждый человек может участвовать в чемпионате
 * мира не более 5 раз.
 * Руководитель ЦОПП СГУ в данный момент формирует команды для участия в чемпионате мира. Каждая
 * команда должна состоять ровно из 3 человек, причем один человек не может быть членом двух или
 * более команд. Какое максимальное количество команд может составить руководитель, если он хочет
 * чтобы каждая команда могла участвовать в чемпионате мира в этом же составе как минимум k раз?
 */
void team_selection();

/*
 * I_love_%username% 155A codeforces
 *
 * Вася обожает спортивное программирование. Программировать он не умеет, но очень любит наблюдать
 * за ходом разных соревнований. У Васи даже есть любимый участник, за которым он следит
 * особенно пристально.
 * Однажды Вася решил собрать результаты всех выступлений своего любимого участника и посмотреть на
 * рост его крутости. Для каждого соревнования с его участием он выписал одно неотрицательное
 * число — количество баллов, набранных участником в соревновании. Баллы за соревнования Вася выписывал
 * в том порядке, в котором соревнования проходили (разумеется, никакие два соревнования не
 * проходили одновременно).
 * Вася считает выступление участника удивительным в двух случаях: если участник установит новый
 * рекорд или анти-рекорд по количеству набранных баллов. Иными словами, удивительно, если
 * участник набирает на соревновании строго больше баллов, чем на каждом из предыдущих
 * соревнований. Также удивительно, если участник набирает на соревновании строго меньше баллов, чем
 * на каждом из предыдущих соревнований. Первое выступление удивительным не считается.
 * Теперь Вася хочет посчитать, сколько всего было удивительных выступлений за всю карьеру участника.
 * Но список набранных баллов получился длинный, а программировать Вася не умеет... Поэтому он просит
 * Вас помочь ему.
 */
void i_love_username();

/*
 * Нечётное множество 1542A codeforces
 *
 * Вам дано мультимножество (то есть множество, которое может содержать несколько одинаковых
 * элементов), содержащее 2n целых чисел. Определите, возможно ли разбить его ровно на n пар
 * (каждый элемент должен присутствовать ровно в одной паре) так, чтобы сумма элементов в каждой
 * паре была нечётна (то есть при делении на 2 давала остаток 1).
 */
void odd_set();

/*
 * Полицейские-рекруты 427A codeforces
 *
 * Недавно в вашем городе открылось отделение полиции. Сейчас идет набор кадров для работы в
 * новом отделении. А тем временем, преступления все совершаются в городе.
 * Достоверно известно, что один полицейский может расследовать только одно преступление за всю
 * свою жизнь. Если преступление произошло в тот момент, когда в отделении полиции не было ни
 * одного незанятого преступлениями полицейского, то оно так и останется навсегда нераскрытым.
 * Вам заданы события в хронологическом порядке. Каждое событие — это: либо совершение преступления,
 * либо прием на работу нового полицейского. Какое минимальное количество преступлений в любом
 * случае останутся нераскрытыми?
 */
void police_recruits();

/*
 * Задача Бахгольда 749A codeforces
 *
 * Задача Бахгольда формулируется очень просто. Дано целое положительное число n. Требуется
 * представить его в виде суммы максимального количества простых слагаемых. Известно, что представление
 * в виде суммы простых существует для всех целых положительных чисел, больших 1.
 * Напомним, целое положительное число k называется простым, если оно больше 1 и у него ровно два
 * целых положительных делителя — 1 и k.
 */
void bachgolds_task();

/*
 * Мишка и старший брат 791A codeforces
 *
 * Мишка Лимак хочет стать самым большим медведем, ну, или хотя бы стать больше своего старшего
 * брата Боба.
 * Сейчас вес Лимака равен a, а вес Боба равен b. Гарантируется, что вес Лимака меньше или равен
 * весу Боба.
 * Лимак ест много, и его вес утраивается каждый год, а вес Боба удваивается каждый год.
 * Через сколько целых лет Лимак станет строго больше (т. е. будет весить строго больше) Боба?
 */
void mishka_and_big_brother();

/*
 * Открытки для друзей 1472A codeforces
 *
 * На Новый год Поликарп решил отправить открытки всем своим n друзьям. Он хочет сделать открытки
 * своими руками и для этих целей у него есть лист бумаги размерами w × h, который можно разрезать
 * на части.
 * Поликарп может разрезать любой имеющийся у него лист бумаги w × h только в двух случаях:
 * Если w четно, тогда можно разрезать лист пополам и получить два листа размерами w/2 × h;
 * Если h четно, тогда можно разрезать лист пополам и получить два листа размерами w×h/2;
 * Если w и h четны одновременно, тогда Поликарп может разрезать лист по любому из правил выше.
 * После разрезания листа бумаги количество листов бумаги у Поликарпа увеличивается на 1.
 * Помогите Поликарпу понять, пользуясь только описанными выше правилами, может ли он нарезать свой
 * лист размерами w × h хотя бы на n частей?
 */
void postcards_for_friends();

/*
 * Ваня и кубики 492A codeforces
 *
 * Ване на день рождения подарили n кубиков. Он с друзьями решил построить из них пирамиду. Ваня
 * хочет построить пирамиду следующим образом: на верхушке пирамиды должен находиться 1 кубик, на
 * втором уровне — 1 + 2 = 3 кубика, на третьем — 1 + 2 + 3 = 6 кубиков, и так далее. Таким образом,
 * на i-м уровне пирамиды должно располагаться 1 + 2 + ... + (i - 1) + i кубиков.
 * Ваня хочет узнать, пирамиду какой максимальной высоты он может создать с использованием
 * имеющихся кубиков.
 */
void vanya_and_the_cubes();

/*
 * Сайт отзывов 1511A codeforces
 *
 * Вы — начинающий режиссер, и вы только выпустили свой первый фильм. Вы также запустили простой сайт,
 * на котором есть две кнопки — лайк и дизлайк.
 * Однако сайт не так прост внутри. Есть два сервера, на каждом из них лайки и дизлайки
 * считаются независимо.
 * n пользователей заходят на сайт один за другим. Каждый пользователь одного из следующих типов:
 * тип 1: пользователь смотрел фильм, и он им понравился — они нажимают лайк;
 * тип 2: пользователь смотрел фильм, и он им не понравился — они нажимают дизлайк;
 * тип 3: пользователь не смотрел фильм — они смотрят на текущее количество лайков и дизлайков и
 * решают на какую кнопку нажимать. Если больше дизлайков, чем лайков, то пользователь ставит
 * дизлайк. Иначе, они ставят лайк.
 * Каждый пользователь оценивает фильм ровно один раз.
 * Так как у вас есть два сервера, можно манипулировать оценками, чтобы фильм получил как можно
 * больше лайков. Когда пользователь заходит на сайт, вы знаете его тип, и можете решить, на какой
 * из двух серверов его послать.
 * Какое наибольшее количество лайков можно собрать в сумме по двум серверам, если
 * распределить пользователей по двум серверам?
 */
void review_site();

/*
 * Системный администратор 245A codeforces
 *
 * Поликарп — системный администратор. Под его чутким надзором находятся два сервера — a и b. Чтобы
 * быть в курсе функционирования серверов, Поликарп выполняет команды «ping a» и «ping b». Каждая
 * команда ping посылает ровно десять пакетов на сервер, указанный в аргументе команды.
 * Результатом выполнения команды являются два целых числа x и y (x + y = 10; x, y ≥ 0). Эти
 * числа обозначают, что x пакетов успешно дошли по сети до соответствующего сервера, а y пакетов
 * были потеряны.
 * За сегодняшний рабочий день Поликарп выполнил всего n команд ping. Теперь для каждого сервера
 * Поликарп хочет узнать, «жив» этот сервер или нет. Поликарп считает, что сервер «жив», если не
 * менее половины из всех отправленных на этот сервер пакетов успешно дошли до него по сети.
 * Помогите Поликарпу, по заданным командам и их результатам определите для каждого сервера, «жив»
 * этот сервер или нет.
 */
void system_administrator();

/*
 * Покупка еды 1296B codeforces
 *
 * Мишка хочет купить немного еды в магазине неподалеку. Изначально у него есть s бурлей на карте.
 * Мишка может применить следующую операцию некоторое (возможно, нулевое) количество раз:
 * выбрать некоторое целое положительное число 1 ≤ x ≤ s,купить еду стоимостью ровно x бурлей и
 * получить ⌊x/10⌋ бурлей в качестве кэшбека (другими словами, Мишка потратит x бурлей и получит
 * ⌊x/10⌋ обратно). Выражение ⌊a/b⌋ означает, что число a поделено на b с округлением вниз.
 * Гарантируется, что вы всегда можете купить еду, которая стоит x для любого возможного значения x.
 * Ваша задача — назвать максимальное количество бурлей, которое Мишка может потратить, если
 * будет совершать покупки оптимально.
 * Например, если у Мишки есть s = 19 бурлей, то максимальное количество бурлей, которое он
 * может потратить, равно 21. Сначала он может потратить x = 10 бурлей, получить 1 бурль в
 * качестве кэшбека. Теперь у него есть s = 10 бурлей, таким образом, он может потратить x = 10
 * бурлей, получить 1 бурль в качестве кэшбека и потратить его тоже.
 * Вам нужно ответить на t независимых наборов входных данных.
 */
void buying_food();

/*
 * Проблемные обеды 276A codeforces
 *
 * После написания очередного соревнования по программированию, три Кролика решили пообедать.
 * Тренер выделил команде Кроликов на обед ровно k единиц времени.
 * У Кроликов есть список, состоящий из n ресторанов, в которых они могут перекусить: i-ый
 * ресторан характеризуется двумя целыми числами fi и ti. Величина ti показывает время, которое
 * Кролики затратят на обед в i-ом ресторане. Если время ti превосходит по величине время k,
 * выделенное тренером на обед, то удовольствие, которое получат Кролики, пообедав в этом
 * ресторане, будет равно fi - (ti - k). Иначе, удовольствие, которое получат Кролики, будет равно fi.
 * Ваша задача — найти величину максимального удовольствия, которое могут получить Кролики от обеда
 * в зависимости от выбора ресторана. Кролики должны выбрать ровно один ресторан для обеда.
 * Обратите внимание, что величина удовольствия не всегда является положительной величиной.
 */
void problem_lunches();

/*
 * Хитрая сумма 598A codeforces
 *
 * В этой задаче вам требуется найти сумму всех целых чисел от 1 до n, причём степени двойки
 * нужно учитывать в сумме со знаком минус.
 * Например, при n = 4 сумма равна:  - 1 - 2 + 3 - 4 =  - 4, поскольку 1, 2 и 4 являются 2^0, 2^1 и
 * 2^2 соответственно.
 * Вычислите ответ для t значений n.
 */
void a_tricky_amount();

/*
 * Арья и Бран 839A codeforces
 *
 * Бран и его старшая сестра Арья родом из одного дома. Бран очень любит конфеты, поэтому Арья
 * собирается дать ему немного конфет.
 * Изначально у Арьи и Брана 0 конфет. В i-й из следующих n дней, Арья найдет ai конфет в
 * коробке, которую ей даст Многоликий Бог. Каждый день она может отдать Брану не более 8 конфет.
 * Если она не отдает конфеты в тот же день, они остаются у нее и она может отдать их позже.
 * Ваша задача — найти минимальное количество дней, которое потребуется Арье, чтобы дать Брану k
 * конфет до конца n-го дня. Формально, требуется вывести минимальный номер дня к концу которого
 * будут выданы k конфет (дни нумеруются от 1 до n).
 * Выведите -1, если за заданные n дней дать k конфет невозможно.
 */
void arya_and_bran();

/*
 * Денежная система Геральдиона 560A codeforces
 *
 * На волшебном острове Геральдионе, на котором живёт Геральд, есть своя денежная система. В
 * обращении находятся купюры нескольких номиналов. Но, к сожалению, их система несовершенна, и
 * иногда Геральдионцы сталкиваются с ситуацией, что определённую сумму денег нельзя выдать без
 * сдачи никаким набором купюр (естественно, можно использовать сколько угодно купюр каждого
 * достоинства). Такая сумма называется неудачной. Геральд заинтересовался: а какова
 * минимальная неудачная сумма?
 */
void the_heraldine_monetary_system();

/*
 * Медведь и малина 385A codeforces
 *
 * Медведь решил запастись малиной на зиму. Хитрым образом он узнал, сколько килограммов малины
 * будет стоить бочонок меда в каждый из следующих n дней. По данным медведя, в i-ый (1 ≤ i ≤ n)
 * день один бочонок меда будет стоить xi килограмм малины.
 * К сожалению, у медведя нет ни бочонка меда, ни малины. В это же время, у медведя есть друг,
 * который готов за c килограмм малины одолжить ему бочонок меда ровно на один день. Поэтому
 * медведь придумал хитрый план. Он хочет выбрать некоторый день d (1 ≤ d < n), занять у друга в
 * этот день бочонок меда и сразу же (в день d) продать его по курсу дня d. На следующий день
 * (d + 1), медведь хочет купить новый бочонок меда по курсу текущего дня (ведь у него осталась малина
 * от продажи прошлого бочонка) и сразу же (в день d + 1) отдать другу одолженный бочонок меда, а также
 * c килограмм малины за аренду бочонка.
 * Медведь хочет привести в действие свой план не более одного раза, после чего уйти в спячку.
 * Какое максимальное количество малины (в килограммах) он может заработать? Учтите, что если на
 * каком-то этапе своего плана у медведя не хватает малины, то такой план медведь осуществлять не будет.
 */
void bear_and_raspberry();

/*
 * Возрастающая последовательность 11A codeforces
 *
 * Последовательность a0, a1, ..., at - 1 называется возрастающей если ai - 1 < ai для всех i: 0 < i < t.
 * Вам задана последовательность b0, b1, ..., bn - 1 и натуральное число d. Каждый ход выбирается один
 * из элементов последовательности и увеличивается на d. Какое минимальное число ходов
 * необходимо совершить, чтобы сделать последовательность возрастающей?
 */
void increasing_sequence();

/*
 * Расписание Алёны 586A codeforces
 *
 * Алёна успешно сдала вступительные экзамены в университет и теперь с нетерпением ожидает начала учебы.
 * Одно занятие в университете традиционно называется парой, потому что длится два академических
 * часа (академический час равен 45 минутам).
 * Университет работает таким образом, что каждый день в нём проводится ровно n пар. В зависимости
 * от расписания у конкретной группы, в данный день в какие-то пары в самом деле могут
 * проводиться занятия, а какие-то могут быть свободными (такие пары называются «окнами»).
 * На официальном сайте университета уже появилось расписание на завтра для группы Алёны. Таким
 * образом, про каждую из n пар она знает, будет в это время занятие или нет.
 * Дом Алёны находится далеко от университета, поэтому не всегда в случае свободных пар она
 * успевает сходить домой. Алёна успевает сходить домой, только если «окно» состоит из хотя бы
 * двух свободных пар подряд, иначе она ожидает следующего занятия в университете.
 * Конечно, Алёна не хочет быть сонной во время занятий, поэтому она будет спать как можно дольше
 * и придет только к первому занятию, которое у нее будет. Аналогично, если занятий больше нет, то
 * Алёна сразу идет домой.
 * Алена очень ценит время, проведённое дома, поэтому она всегда идет домой, когда это возможно,
 * и возвращается в университет только к началу следующего занятия. Помогите Алёне определить,
 * сколько пар она будет находиться в университете. Заметим, что во время некоторых пар Алена
 * может находиться в университете в ожидании предстоящего занятия.
 */
void alyonas_schedule();

#endif //BASICS_OF_PROGRAMMING_LABORATORY_WORK_5_H