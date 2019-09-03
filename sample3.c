// MySub関数の定義
void MySub()
{
	// 何もしない
}

// MyFunc関数の定義
void MyFunc()
{
	int i;
	for (i = 0; i < 10; i++)
	{
		// MySub関数を10回繰り返し呼び出す
		MySub();
	}
}
