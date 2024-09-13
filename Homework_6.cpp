// Homework_6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cstdlib>
#include <ctime> 
#include <vector>




int main() 
{
    //1.Дан двумерный массив размерностью M х N, заполненный случайными числами из диапазона от 0 до 20. 
    // Определить сумму элементов массива, среднее арифметическое, минимальный и максимальный элемент.

   /* setlocale(LC_ALL, "RUS");

    const int M = 5; 
    const int N = 6;  
    int array[M][N];

    
    std::srand(static_cast<unsigned>(std::time(0)));

    
    std::cout << "Двумерный массив:\n";
    for (int i = 0; i < M; ++i) 
    {
        for (int j = 0; j < N; ++j)
        {
            array[i][j] = std::rand() % 21;  
            std::cout << array[i][j] << "\t";  
        }
        std::cout << "\n";
    }

    
    int sum = 0;
    int min = array[0][0];
    int max = array[0][0];

    
    for (int i = 0; i < M; ++i) 
    {
        for (int j = 0; j < N; ++j)
        {
            sum += array[i][j];
            if (array[i][j] < min) 
            {
                min = array[i][j];
            }
            if (array[i][j] > max) 
            {
                max = array[i][j];
            }
        }
    }

    
    double average = static_cast<double>(sum) / (M * N);

   
    std::cout << "\nСумма элементов массива: " << sum << "\n";
    std::cout << "Среднее арифметическое: " << average << "\n";
    std::cout << "Минимальный элемент: " << min << "\n";
    std::cout << "Максимальный элемент: " << max << "\n";

    return 0; 

    //Дан двумерный массив размерностью M х M, заполненный случайными числами из диапазона от 0 до 20. 
    // Определить сумму элементов, расположенных на главной диагонали, а также сумму элементов, расположенных на побочной диагонали.

    setlocale(LC_ALL, "RUS");

    const int M = 5; 
    int array[M][M];

    std::srand(static_cast<unsigned>(std::time(0)));

    std::cout << "Двумерный массив:\n";
    for (int i = 0; i < M; ++i) 
    {
        for (int j = 0; j < M; ++j)
        {
            array[i][j] = std::rand() % 21;  
            std::cout << array[i][j] << "\t";  
        }
        std::cout << "\n";
    }

    int main_diagonal_sum = 0;
    int secondary_diagonal_sum = 0;

    for (int i = 0; i < M; ++i) 
    {
        main_diagonal_sum += array[i][i];            
        secondary_diagonal_sum += array[i][M - i - 1];  
    }

    std::cout << "\nСумма элементов на главной диагонали: " << main_diagonal_sum << "\n";
    std::cout << "Сумма элементов на побочной диагонали: " << secondary_diagonal_sum << "\n";

    return 0; 

    //3.Дан двумерный массив размерностью M х N, заполненный случайными числами из диапазона от -10 до 10. 
    // Определить количество положительных, отрицательных и нулевых элементов.

    setlocale(LC_ALL, "RUS");

    const int M = 5;
    const int N = 6;

    int array[M][N];

    std::srand(std::time(0));

    int positive_count = 0;
    int negative_count = 0;
    int zero_count = 0;

    for (int i = 0; i < M; i++) 
    {
        for (int j = 0; j < N; j++) 
        {
            array[i][j] = std::rand() % 21 - 10;  

            
            if (array[i][j] > 0) 
            {
                positive_count++;
            }
            else if (array[i][j] < 0) 
            {
                negative_count++;
            }
            else 
            {
                zero_count++;
            }
        }
    }

    std::cout << "Массив:\n";

    for (int i = 0; i < M; i++) 
    {
        for (int j = 0; j < N; j++) 
        {
            std::cout << array[i][j] << "\t";
        }
        std::cout << "\n";
    }

    
    std::cout << "\nПоложительных элементов: " << positive_count << "\n";
    std::cout << "Отрицательных элементов: " << negative_count << "\n";
    std::cout << "Нулевых элементов: " << zero_count << "\n";

    return 0; 

//4. Дан двумерный массив размерностью M х N, заполненный случайными числами из диапазона от 0 до 20. Определить сумму по каждой строке и по каждому столбцу массива.

    setlocale(LC_ALL, "RUS");

    const int M = 4;  
    const int N = 5;  

    int array[M][N];

    std::srand(std::time(0));

    for (int i = 0; i < M; i++) 
    {
    for (int j = 0; j < N; j++) 
    {
        array[i][j] = std::rand() % 21; 
    }
    }


    std::cout << "Массив:\n";

    for (int i = 0; i < M; i++) 
    {
    for (int j = 0; j < N; j++)
    {
        std::cout << array[i][j] << "\t";
    }
    std::cout << "\n";
    }


    std::cout << "\nСумма по строкам:\n";

    for (int i = 0; i < M; i++) 
    {
    int row_sum = 0;
    for (int j = 0; j < N; j++) 
    {
        row_sum += array[i][j];
    }

    std::cout << "Сумма элементов строки " << i + 1 << ": " << row_sum << "\n";
    }

    std::cout << "\nСумма по столбцам:\n";
    for (int j = 0; j < N; j++)
    {
    int col_sum = 0;
    for (int i = 0; i < M; i++)
    {
        col_sum += array[i][j];
    }

    std::cout << "Сумма элементов столбца " << j + 1 << ": " << col_sum << "\n";
    }

    return 0; 

    //5.Заполнить массив M x N двузначными числами так, чтобы первая цифра указывала  номер строки, а вторая – номер столбца.

    setlocale(LC_ALL, "RUS");

    const int M = 5;  
    const int N = 5; 


    int array[M][N];


    for (int i = 0; i < M; i++)
    {
    for (int j = 0; j < N; j++)
    {
        array[i][j] = (i + 1) * 10 + (j + 1);  
    }
    }


    std::cout << "Массив:\n";

    for (int i = 0; i < M; i++) 
    {
    for (int j = 0; j < N; j++) 
    {
        std::cout << array[i][j] << "\t";
    }
    std::cout << "\n";
    }

    return 0;
    
    //6.В двумерном массиве размерности M x N поменять местами чётные строки с нечётными.

    setlocale(LC_ALL, "RUS");

    const int M = 6;  
    const int N = 5;  

    int array[M][N];

    std::srand(std::time(0));

    std::cout << "Исходный массив:\n";

    for (int i = 0; i < M; i++) 
    {
    for (int j = 0; j < N; j++) 
    {
        array[i][j] = std::rand() % 21;
        std::cout << array[i][j] << "\t";
    }
    
    std::cout << "\n";
    }


    for (int i = 0; i < M - 1; i += 2) 
    {
    for (int j = 0; j < N; j++) 
    {
        std::swap(array[i], array[i + 1]);
    }
    }


    std::cout << "\nМассив после обмена четных и нечетных строк:\n";
    
    for (int i = 0; i < M; i++) 
    {
    for (int j = 0; j < N; j++) 
    {
        std::cout << array[i][j] << "\t";
    }
    std::cout << "\n";
}

return 0; 

//7.Дан двумерный массив размерностью M x N, заполненный случайными числами из диапазона от - 100 до 100. 
// Определить сумму элементов массива, расположенных между минимальным и максимальным элементами.

    setlocale(LC_ALL, "RUS"); 

    const int M = 5;  
    const int N = 6;  

    int array[M][N];
    int minElement = 100, maxElement = -100;
    int minRow = 0, minCol = 0;
    int maxRow = 0, maxCol = 0;

    std::srand(std::time(0));

    std::cout << "Исходный массив:\n";

    for (int i = 0; i < M; i++) 
    {
    for (int j = 0; j < N; j++) 
    {
        array[i][j] = std::rand() % 201 - 100;  
        std::cout << array[i][j] << "\t";

       
        if (array[i][j] < minElement) 
        {
            minElement = array[i][j];
            minRow = i;
            minCol = j;
        }
        if (array[i][j] > maxElement) 
        {
            maxElement = array[i][j];
            maxRow = i;
            maxCol = j;
        }
    }
    std::cout << "\n";
    }


    int minPos = minRow * N + minCol;
    int maxPos = maxRow * N + maxCol;
    if (minPos > maxPos) 
    {
    std::swap(minPos, maxPos);
    }


    int sum = 0;
    for (int pos = minPos + 1; pos < maxPos; ++pos) 
    {
    int i = pos / N;  
    int j = pos % N;  
    sum += array[i][j];
    }

    std::cout << "\nМинимальный элемент: " << minElement << " (на позиции " << minRow << ", " << minCol << ")\n";
    std::cout << "Максимальный элемент: " << maxElement << " (на позиции " << maxRow << ", " << maxCol << ")\n";
    std::cout << "Сумма элементов между ними: " << sum << "\n";

    return 0; 

    //8.Заполнить квадратную матрицу размером M x N по спирали. Число 1 ставится в центр матрицы, а затем массив заполняется по спирали против часовой стрелки значениями по возрастанию.
    
    setlocale(LC_ALL, "RUS");

    void fillSpiralMatrix(int M, int N) 
    {
        
        std::vector<std::vector<int>> matrix(M, std::vector<int>(N, 0));

        int centerX = M / 2;
        int centerY = N / 2;

        int value = 1;  
        matrix[centerX][centerY] = value;  

        int dx[] = { 0, -1, 0, 1 };  
        int dy[] = { -1, 0, 1, 0 };  

        int stepSize = 1;  
        int direction = 0; 

        int x = centerX, y = centerY;

        while (value < M * N) 
        {
            for (int steps = 0; steps < 2; ++steps) 
            {  
                for (int i = 0; i < stepSize; ++i) 
                {
                    x += dx[direction];
                    y += dy[direction];
 
                    if (x >= 0 && x < M && y >= 0 && y < N && matrix[x][y] == 0) 
                    {
                        matrix[x][y] = ++value;
                    }
                }
                direction = (direction + 1) % 4;  
            }
            ++stepSize;
        }

        for (int i = 0; i < M; ++i) 
        {
            for (int j = 0; j < N; ++j) 
            {
                std::cout << matrix[i][j] << "\t";
            }
            std::cout << "\n";
        }
    }

    int main(); 
    {
        int M = 5, N = 5; 
        fillSpiralMatrix(M, N);
        return 0; */
    }











   


    

    