#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the sherlockAndMinimax function below.
int findMin(vector<int> arr, int m) {
    int start = 0;
    int end = arr.size() - 1;
    while(true) {
        if(start == end) return abs(arr[start]-m);
        int pos = (start + end)/2;
        if(arr[pos] <= m && arr[pos+1] >= m) {
            return min(abs(arr[pos]-m),abs(arr[pos+1]-m));
        } else if(arr[pos] <= m && arr[pos+1] <= m) {
            start = pos + 1;
        } else {
            end = pos;
        }
    }
}

int sherlockAndMinimax(vector<int> arr, int p, int q) {
    int l=arr.size();
    sort(arr.begin(),arr.end());
    int result = p;
    int max = findMin(arr, p);
    int start = p < arr[0] ? arr[0] : p;
    int end = q < arr[l - 1] ? q : arr[l - 1];
    if(p > arr[l - 1] || q < arr[0]) {
        //do nothing
    } else {
        for(int i=0; i< l-1; i++) {
            int x = (arr[i] + arr[i+1])/2;
            if(x <= end && x >=start) {
                int curr = findMin(arr, x);
                if(curr > max) {
                    max = curr;
                    result = x;
                }
            }
            if(x+1 <= end && x+1 >=start) {
                int curr = findMin(arr, x+1);
                if(curr > max) {
                    max = curr;
                    result = x+1;
                }
            }
        }
    }
    int forQ = findMin(arr, q);
    if(forQ > max) {
        max = forQ;
        result = q;
    }
    return result;
}


int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split_string(arr_temp_temp);

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    string pq_temp;
    getline(cin, pq_temp);

    vector<string> pq = split_string(pq_temp);

    int p = stoi(pq[0]);

    int q = stoi(pq[1]);

    int result = sherlockAndMinimax(arr, p, q);

    fout << result << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
