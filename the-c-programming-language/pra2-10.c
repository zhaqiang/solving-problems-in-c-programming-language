/* 重新编写将大写字母转换为小写字母的函数lower，并用条件表达式代替其中的if-else结构。 */
int lower(int c)
{
	return (c >= 'A' && c <= 'Z') ? (c + 'a' - 'A') : c;
}

int lower(int c)
{
	if(c >= 'A' && c <= 'Z')
		return c + 'a' - 'A';
	else
		return c;
}