int key(char *s){
	int i, a, b, len, k;
	len = strlen(s);
	a = (int)*s;
	k = a;
	
	for(i = 1; i < len; i++){
		b = (int)s[i];
		k = k + b;
		k = k * 11;
		k = k / 10;		
	}
	k = k * len;
	k = k * 100 + len;
	return k;
}
