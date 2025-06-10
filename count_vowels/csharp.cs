int CountVowels(string input)
{
    int count = 0;
    foreach (char c in input.ToLower())
    {
        if ("aeiou".Contains(c))
        {
            count++;
        }
    }
    
    return count;
}

int CountVowels_min(string i) { int c = 0; foreach (char ch in i.ToLower()) if ("aeiou".Contains(ch)) c++; return c; }