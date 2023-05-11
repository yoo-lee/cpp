#include "PmergeMe.hpp"

// プログラムの引数が2つ未満の場合、エラーメッセージを表示してプログラムを終了します。
// std::vector<int>型のベクトル vec と std::list<int>型のリスト lst を作成します。
// プログラムの引数をパースして、正の整数のみを vec と lst に追加します。パース中にエラーが発生した場合は、エラーメッセージを表示してプログラムを終了します。

// ソート前のベクトル vec とリスト lst を表示します。
// ベクトル vec の要素数を取得し、変数 nVec に格納します。
// リスト lst の要素数を取得し、変数 nLst に格納します。

// ベクトル vec をマージソートでソートし、実行時間を計測します。
// リスト lst をマージソートでソートし、実行時間を計測します。

// ソート後のベクトル vec を表示します。
// ソート後のリスト lst を表示します。
// ベクトルソートの実行時間を表示します。
// リストソートの実行時間を表示します。
// 最終的に、ベクトルとリストそれぞれでソートが行われ、ソート前とソート後のシーケンスが表示され、それぞれのソートの実行時間が表示されます。


int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cerr << "Error: No input sequence provided." << std::endl;
        return 1;
    }

// std::vector<int>型のベクトル vec と std::list<int>型のリスト lst を作成します。
    std::vector<int> vec;
    std::list<int> lst;


    // Parse input sequence and store in containers
    for (int i = 1; i < argc; i++) {
        try {
            for(int j=0; argv[i][j]!='\0';j++) {
                if(argv[i][j] < 48 || argv[i][j] > 57) {
                    std::cout << "Error: bad input." << std::endl;
                    return 1;
                }
            }
            int num = std::atoi(argv[i]);
            if (num <= 0) {
                throw std::invalid_argument("Error: Input sequence must only contain positive integers.");
            }
            vec.push_back(num);
            lst.push_back(num);
        }
        catch (const std::invalid_argument& e) {
            std::cout << e.what() << std::endl;
            return 1;
        }
    }

    // Display unsorted sequence
    std::cout << "<vec>Before: ";
    for (std::vector<int>::const_iterator it = vec.begin(); it != vec.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // find size vec
    int nVec = vec.size();
    int nLst = lst.size();

    // Display unsorted sequence
    std::cout << "<list>Before: ";
    for (std::list<int>::const_iterator it = lst.begin(); it != lst.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Sort with vector and measure time
    std::clock_t start_vec = std::clock();
    mergeInsertVec(vec, 0, nVec - 1);
    // std::sort(vec.begin(), vec.end());
    std::clock_t end_vec = std::clock();
    double elapsed_vec = static_cast<double>(end_vec - start_vec) / CLOCKS_PER_SEC * 1000000;

    // Sort with list and measure time
    std::clock_t start_lst = std::clock();
    mergeInsertList(lst, 0 , nLst-1);
    std::clock_t end_lst = std::clock();
    double elapsed_lst = static_cast<double>(end_lst - start_lst) / CLOCKS_PER_SEC * 1000000;

    // Display sorted sequence with vector
    std::cout << "<vec>After: ";
    for (std::vector<int>::const_iterator it = vec.begin(); it != vec.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Display sorted sequence with list
    std::cout << "<list>After: ";
    for (std::list<int>::const_iterator it = lst.begin(); it != lst.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Display time taken by vector sort
    std::cout << "Time to process a range of " << vec.size() << " elements with vector sort: " << elapsed_vec << " us" << std::endl;

    // Display time taken by list sort
    std::cout << "Time to process a range of " << lst.size() << " elements with list sort: " << elapsed_lst << " us" << std::endl;

    return 0;
}


