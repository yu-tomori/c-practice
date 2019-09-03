// MySub1関数の定義
void MySub1()
{
	// 何もしない
}

// MySub2関数の定義
void MySub2()
{
	// 何もしない
}

// MySub3関数の定義
void MySub3()
{
	// 何もしない
}

// MyFunc関数の定義
void MyFunc()
{
	int a = 123;
	// 条件に応じて異なる関数を呼び出す
	if (a > 100)
	{
		MySub1();
	}
	else if (a < 50)
	{
		MySub2();
	}
	else {
		MySub3();
	}
}
