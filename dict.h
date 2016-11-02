typedef struct dict{
	char ch;
	int key;
	int fp;
	struct dict *next;
}dict;

typedef struct harr{
	dict *a[13];
	dict *b[13];
	dict *c[13];
	dict *d[13];
	dict *e[13];
	dict *f[13];
	dict *g[13];
	dict *h[13];
	dict *i[13];
	dict *j[13];
	dict *k[13];
	dict *l[13];
	dict *m[13];
	dict *n[13];
	dict *o[13];
	dict *p[13];
	dict *q[13];
	dict *r[13];
	dict *s[13];
	dict *t[13];
	dict *u[13];
	dict *v[13];
	dict *w[13];
	dict *x[13];
	dict *y[13];
	dict *z[13];
	dict *rem;
}harr;

int key(char *);
harr *store();
dict *search(harr *, char *);
void print(dict *);
