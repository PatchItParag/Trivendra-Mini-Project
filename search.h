#include "key.h"
dict *search(harr *hl,char *str){
	printf("aa");;
	char s[16], c[20], d[16];
	int i, j, cnt, slen, len;
	strcpy(s, str);
	len = strlen(str);
	dict *flag = NULL; 
	for(i = 0; i < len; i++){
		switch(s[i]){
			case 'A':
				s[i] = 'a';
				break;
			case 'B':
				s[i] = 'b';
				break;
			case 'C':
				s[i] = 'c';
				break;
			case 'D':
				s[i] = 'd'; 
				break;
			case 'E':
				s[i] = 'e';
				break;
			case 'F':
				s[i] = 'f';		
				break;
			case 'G':
				s[i] = 'g';
				break;
			case 'H':
				s[i] = 'h';
				break;
			case 'I':
				s[i] = 'i';
				break;
			case 'J':
				s[i] = 'j';
				break;
			case 'K':
				s[i] = 'k';
				break;
			case 'L':
				s[i] = 'l';
				break;
			case 'M':
				s[i] = 'm';
				break;
			case 'N':
				s[i] = 'n';
				break;
			case 'O':
				s[i] = 'o';
				break;
			case 'P':
				s[i] = 'p';
				break;
			case 'Q':
				s[i] = 'q';
				break;
			case 'R':
				s[i] = 'r';
				break;
			case 'S':
				s[i] = 's';
				break;
			case 'T':
				s[i] = 't';
				break;
			case 'U':
				s[i] = 'u';
				break;
			case 'V':
				s[i] = 'v';
				break;
			case 'W':
				s[i] = 'w';
				break;
			case 'X':
				s[i] = 'x';
				break;
			case 'Y':
				s[i] = 'y';
				break;
			case 'Z':
				s[i] = 'z';
				break;
			default:
				break;		
			}
	}
	int kval = key(s);
	char ch = s[0];
	dict *head;
	int l = len - 1;
	switch(l){
		case 0: 
			switch(ch){
				case 'a':
					head = hl->a[0];
					break;
				case 'b':
					head = hl->b[0];
					break;	
				case 'c':
					head = hl->c[0];
					break;	
				case 'd':
					head = hl->d[0];
					break;	
				case 'e':
					head = hl->e[0];
					break;	
				case 'f':
					head = hl->f[0];
					break;	
				case 'g':
					head = hl->g[0];
					break;	
				case 'h':
					head = hl->h[0];
					break;	
				case 'i':
					head = hl->i[0];
					break;	
				case 'j':
					head = hl->j[0];
					break;	
				case 'k':
					head = hl->k[0];
					break;	
				case 'l':
					head = hl->l[0];
					break;	
				case 'm':
					head = hl->m[0];
					break;	
				case 'n':
					head = hl->n[0];
					break;	
				case 'o':
					head = hl->o[0];
					break;	
				case 'p':
					head = hl->p[0];
					break;	
				case 'q':
					head = hl->q[0];
					break;	
				case 'r':
					head = hl->r[0];
					break;	
				case 's':
					head = hl->s[0];
					break;	
				case 't':
					head = hl->t[0];
					break;	
				case 'u':
					head = hl->u[0];
					break;	
				case 'v':
					head = hl->v[0];
					break;	
				case 'w':
					head = hl->w[0];
					break;	
				case 'x':
					head = hl->x[0];
					break;	
				case 'y':
					head = hl->y[0];
					break;	
				case 'z':
					head = hl->z[0];
					break;	
				default:
					head = hl->rem;
					break;	
			}
			break;                                                                  				
		case 1: 
			switch(ch){
				case 'a':
					head = hl->a[1];
					break;
				case 'b':
					head = hl->b[1];
					break;	
				case 'c':
					head = hl->c[1];
					break;	
				case 'd':
					head = hl->d[1];
					break;	
				case 'e':
					head = hl->e[1];
					break;	
				case 'f':
					head = hl->f[1];
					break;	
				case 'g':
					head = hl->g[1];
					break;	
				case 'h':
					head = hl->h[1];
					break;	
				case 'i':
					head = hl->i[1];
					break;	
				case 'j':
					head = hl->j[1];
					break;	
				case 'k':
					head = hl->k[1];
					break;	
				case 'l':
					head = hl->l[1];
					break;	
				case 'm':
					head = hl->m[1];
					break;	
				case 'n':
					head = hl->n[1];
					break;	
				case 'o':
					head = hl->o[1];
					break;	
				case 'p':
					head = hl->p[1];
					break;	
				case 'q':
					head = hl->q[1];
					break;	
				case 'r':
					head = hl->r[1];
					break;	
				case 's':
					head = hl->s[1];
					break;	
				case 't':
					head = hl->t[1];
					break;	
				case 'u':
					head = hl->u[1];
					break;	
				case 'v':
					head = hl->v[1];
					break;	
				case 'w':
					head = hl->w[1];
					break;	
				case 'x':
					head = hl->x[1];
					break;	
				case 'y':
					head = hl->y[1];
					break;	
				case 'z':
					head = hl->z[1];
					break;	
				default:
					head = hl->rem;
					break;	
			}
			break;                                                                  				
		case 2: 
			switch(ch){
				case 'a':
					head = hl->a[2];
					break;
				case 'b':
					head = hl->b[2];
					break;	
				case 'c':
					head = hl->c[2];
					break;	
				case 'd':
					head = hl->d[2];
					break;	
				case 'e':
					head = hl->e[2];
					break;	
				case 'f':
					head = hl->f[2];
					break;	
				case 'g':
					head = hl->g[2];
					break;	
				case 'h':
					head = hl->h[2];
					break;	
				case 'i':
					head = hl->i[2];
					break;	
				case 'j':
					head = hl->j[2];
					break;	
				case 'k':
					head = hl->k[2];
					break;	
				case 'l':
					head = hl->l[2];
					break;	
				case 'm':
					head = hl->m[2];
					break;	
				case 'n':
					head = hl->n[2];
					break;	
				case 'o':
					head = hl->o[2];
					break;	
				case 'p':
					head = hl->p[2];
					break;	
				case 'q':
					head = hl->q[2];
					break;	
				case 'r':
					head = hl->r[2];
					break;	
				case 's':
					head = hl->s[2];
					break;	
				case 't':
					head = hl->t[2];
					break;	
				case 'u':
					head = hl->u[2];
					break;	
				case 'v':
					head = hl->v[2];
					break;	
				case 'w':
					head = hl->w[2];
					break;	
				case 'x':
					head = hl->x[2];
					break;	
				case 'y':
					head = hl->y[2];
					break;	
				case 'z':
					head = hl->z[2];
					break;	
				default:
					head = hl->rem;
					break;	
			}
			break;                                                                  				
		case 3: 
			switch(ch){
				case 'a':
					head = hl->a[3];
					break;
				case 'b':
					head = hl->b[3];
					break;	
				case 'c':
					head = hl->c[3];
					break;	
				case 'd':
					head = hl->d[3];
					break;	
				case 'e':
					head = hl->e[3];
					break;	
				case 'f':
					head = hl->f[3];
					break;	
				case 'g':
					head = hl->g[3];
					break;	
				case 'h':
					head = hl->h[3];
					break;	
				case 'i':
					head = hl->i[3];
					break;	
				case 'j':
					head = hl->j[3];
					break;	
				case 'k':
					head = hl->k[3];
					break;	
				case 'l':
					head = hl->l[3];
					break;	
				case 'm':
					head = hl->m[3];
					break;	
				case 'n':
					head = hl->n[3];
					break;	
				case 'o':
					head = hl->o[3];
					break;	
				case 'p':
					head = hl->p[3];
					break;	
				case 'q':
					head = hl->q[3];
					break;	
				case 'r':
					head = hl->r[3];
					break;	
				case 's':
					head = hl->s[3];
					break;	
				case 't':
					head = hl->t[3];
					break;	
				case 'u':
					head = hl->u[3];
					break;	
				case 'v':
					head = hl->v[3];
					break;	
				case 'w':
					head = hl->w[3];
					break;	
				case 'x':
					head = hl->x[3];
					break;	
				case 'y':
					head = hl->y[3];
					break;	
				case 'z':
					head = hl->z[3];
					break;	
				default:
					head = hl->rem;
					break;	
			}
			break;                                                                  				
		case 4: 
			switch(ch){
				case 'a':
					head = hl->a[4];
					break;
				case 'b':
					head = hl->b[4];
					break;	
				case 'c':
					head = hl->c[4];
					break;	
				case 'd':
					head = hl->d[4];
					break;	
				case 'e':
					head = hl->e[4];
					break;	
				case 'f':
					head = hl->f[4];
					break;	
				case 'g':
					head = hl->g[4];
					break;	
				case 'h':
					head = hl->h[4];
					break;	
				case 'i':
					head = hl->i[4];
					break;	
				case 'j':
					head = hl->j[4];
					break;	
				case 'k':
					head = hl->k[4];
					break;	
				case 'l':
					head = hl->l[4];
					break;	
				case 'm':
					head = hl->m[4];
					break;	
				case 'n':
					head = hl->n[4];
					break;	
				case 'o':
					head = hl->o[4];
					break;	
				case 'p':
					head = hl->p[4];
					break;	
				case 'q':
					head = hl->q[4];
					break;	
				case 'r':
					head = hl->r[4];
					break;	
				case 's':
					head = hl->s[4];
					break;	
				case 't':
					head = hl->t[4];
					break;	
				case 'u':
					head = hl->u[4];
					break;	
				case 'v':
					head = hl->v[4];
					break;	
				case 'w':
					head = hl->w[4];
					break;	
				case 'x':
					head = hl->x[4];
					break;	
				case 'y':
					head = hl->y[4];
					break;	
				case 'z':
					head = hl->z[4];
					break;	
				default:
					head = hl->rem;
					break;	
			}
			break;                                                                  				
		case 5: 
			switch(ch){
				case 'a':
					head = hl->a[5];
					break;
				case 'b':
					head = hl->b[5];
					break;	
				case 'c':
					head = hl->c[5];
					break;	
				case 'd':
					head = hl->d[5];
					break;	
				case 'e':
					head = hl->e[5];
					break;	
				case 'f':
					head = hl->f[5];
					break;	
				case 'g':
					head = hl->g[5];
					break;	
				case 'h':
					head = hl->h[5];
					break;	
				case 'i':
					head = hl->i[5];
					break;	
				case 'j':
					head = hl->j[5];
					break;	
				case 'k':
					head = hl->k[5];
					break;	
				case 'l':
					head = hl->l[5];
					break;	
				case 'm':
					head = hl->m[5];
					break;	
				case 'n':
					head = hl->n[5];
					break;	
				case 'o':
					head = hl->o[5];
					break;	
				case 'p':
					head = hl->p[5];
					break;	
				case 'q':
					head = hl->q[5];
					break;	
				case 'r':
					head = hl->r[5];
					break;	
				case 's':
					head = hl->s[5];
					break;	
				case 't':
					head = hl->t[5];
					break;	
				case 'u':
					head = hl->u[5];
					break;	
				case 'v':
					head = hl->v[5];
					break;	
				case 'w':
					head = hl->w[5];
					break;	
				case 'x':
					head = hl->x[5];
					break;	
				case 'y':
					head = hl->y[5];
					break;	
				case 'z':
					head = hl->z[5];
					break;	
				default:
					head = hl->rem;
					break;	
			}
			break;                                                                  				
		case 6: 
			switch(ch){
				case 'a':
					head = hl->a[6];
					break;
				case 'b':
					head = hl->b[6];
					break;	
				case 'c':
					head = hl->c[6];
					break;	
				case 'd':
					head = hl->d[6];
					break;	
				case 'e':
					head = hl->e[6];
					break;	
				case 'f':
					head = hl->f[6];
					break;	
				case 'g':
					head = hl->g[6];
					break;	
				case 'h':
					head = hl->h[6];
					break;	
				case 'i':
					head = hl->i[6];
					break;	
				case 'j':
					head = hl->j[6];
					break;	
				case 'k':
					head = hl->k[6];
					break;	
				case 'l':
					head = hl->l[6];
					break;	
				case 'm':
					head = hl->m[6];
					break;	
				case 'n':
					head = hl->n[6];
					break;	
				case 'o':
					head = hl->o[6];
					break;	
				case 'p':
					head = hl->p[6];
					break;	
				case 'q':
					head = hl->q[6];
					break;	
				case 'r':
					head = hl->r[6];
					break;	
				case 's':
					head = hl->s[6];
					break;	
				case 't':
					head = hl->t[6];
					break;	
				case 'u':
					head = hl->u[6];
					break;	
				case 'v':
					head = hl->v[6];
					break;	
				case 'w':
					head = hl->w[6];
					break;	
				case 'x':
					head = hl->x[6];
					break;	
				case 'y':
					head = hl->y[6];
					break;	
				case 'z':
					head = hl->z[6];
					break;	
				default:
					head = hl->rem;
					break;	
			}
			break;                                                                  				
		case 7: 
			switch(ch){
				case 'a':
					head = hl->a[7];
					break;
				case 'b':
					head = hl->b[7];
					break;	
				case 'c':
					head = hl->c[7];
					break;	
				case 'd':
					head = hl->d[7];
					break;	
				case 'e':
					head = hl->e[7];
					break;	
				case 'f':
					head = hl->f[7];
					break;	
				case 'g':
					head = hl->g[7];
					break;	
				case 'h':
					head = hl->h[7];
					break;	
				case 'i':
					head = hl->i[7];
					break;	
				case 'j':
					head = hl->j[7];
					break;	
				case 'k':
					head = hl->k[7];
					break;	
				case 'l':
					head = hl->l[7];
					break;	
				case 'm':
					head = hl->m[7];
					break;	
				case 'n':
					head = hl->n[7];
					break;	
				case 'o':
					head = hl->o[7];
					break;	
				case 'p':
					head = hl->p[7];
					break;	
				case 'q':
					head = hl->q[7];
					break;	
				case 'r':
					head = hl->r[7];
					break;	
				case 's':
					head = hl->s[7];
					break;	
				case 't':
					head = hl->t[7];
					break;	
				case 'u':
					head = hl->u[7];
					break;	
				case 'v':
					head = hl->v[7];
					break;	
				case 'w':
					head = hl->w[7];
					break;	
				case 'x':
					head = hl->x[7];
					break;	
				case 'y':
					head = hl->y[7];
					break;	
				case 'z':
					head = hl->z[7];
					break;	
				default:
					head = hl->rem;
					break;	
			}
			break;                                                                  				
		case 8: 
			switch(ch){
				case 'a':
					head = hl->a[8];
					break;
				case 'b':
					head = hl->b[8];
					break;	
				case 'c':
					head = hl->c[8];
					break;	
				case 'd':
					head = hl->d[8];
					break;	
				case 'e':
					head = hl->e[8];
					break;	
				case 'f':
					head = hl->f[8];
					break;	
				case 'g':
					head = hl->g[8];
					break;	
				case 'h':
					head = hl->h[8];
					break;	
				case 'i':
					head = hl->i[8];
					break;	
				case 'j':
					head = hl->j[8];
					break;	
				case 'k':
					head = hl->k[8];
					break;	
				case 'l':
					head = hl->l[8];
					break;	
				case 'm':
					head = hl->m[8];
					break;	
				case 'n':
					head = hl->n[8];
					break;	
				case 'o':
					head = hl->o[8];
					break;	
				case 'p':
					head = hl->p[8];
					break;	
				case 'q':
					head = hl->q[8];
					break;	
				case 'r':
					head = hl->r[8];
					break;	
				case 's':
					head = hl->s[8];
					break;	
				case 't':
					head = hl->t[8];
					break;	
				case 'u':
					head = hl->u[8];
					break;	
				case 'v':
					head = hl->v[8];
					break;	
				case 'w':
					head = hl->w[8];
					break;	
				case 'x':
					head = hl->x[8];
					break;	
				case 'y':
					head = hl->y[8];
					break;	
				case 'z':
					head = hl->z[8];
					break;	
				default:
					head = hl->rem;
					break;	
			}
			break;                                                                  				
		case 9: 
			switch(ch){
				case 'a':
					head = hl->a[9];
					break;
				case 'b':
					head = hl->b[9];
					break;	
				case 'c':
					head = hl->c[9];
					break;	
				case 'd':
					head = hl->d[9];
					break;	
				case 'e':
					head = hl->e[9];
					break;	
				case 'f':
					head = hl->f[9];
					break;	
				case 'g':
					head = hl->g[9];
					break;	
				case 'h':
					head = hl->h[9];
					break;	
				case 'i':
					head = hl->i[9];
					break;	
				case 'j':
					head = hl->j[9];
					break;	
				case 'k':
					head = hl->k[9];
					break;	
				case 'l':
					head = hl->l[9];
					break;	
				case 'm':
					head = hl->m[9];
					break;	
				case 'n':
					head = hl->n[9];
					break;	
				case 'o':
					head = hl->o[9];
					break;	
				case 'p':
					head = hl->p[9];
					break;	
				case 'q':
					head = hl->q[9];
					break;	
				case 'r':
					head = hl->r[9];
					break;	
				case 's':
					head = hl->s[9];
					break;	
				case 't':
					head = hl->t[9];
					break;	
				case 'u':
					head = hl->u[9];
					break;	
				case 'v':
					head = hl->v[9];
					break;	
				case 'w':
					head = hl->w[9];
					break;	
				case 'x':
					head = hl->x[9];
					break;	
				case 'y':
					head = hl->y[9];
					break;	
				case 'z':
					head = hl->z[9];
					break;	
				default:
					head = hl->rem;
					break;	
			}
			break;                                                                  				
		case 10: 
			switch(ch){
				case 'a':
					head = hl->a[10];
					break;
				case 'b':
					head = hl->b[10];
					break;	
				case 'c':
					head = hl->c[10];
					break;	
				case 'd':
					head = hl->d[10];
					break;	
				case 'e':
					head = hl->e[10];
					break;	
				case 'f':
					head = hl->f[10];
					break;	
				case 'g':
					head = hl->g[10];
					break;	
				case 'h':
					head = hl->h[10];
					break;	
				case 'i':
					head = hl->i[10];
					break;	
				case 'j':
					head = hl->j[10];
					break;	
				case 'k':
					head = hl->k[10];
					break;	
				case 'l':
					head = hl->l[10];
					break;	
				case 'm':
					head = hl->m[10];
					break;	
				case 'n':
					head = hl->n[10];
					break;	
				case 'o':
					head = hl->o[10];
					break;	
				case 'p':
					head = hl->p[10];
					break;	
				case 'q':
					head = hl->q[10];
					break;	
				case 'r':
					head = hl->r[10];
					break;	
				case 's':
					head = hl->s[10];
					break;	
				case 't':
					head = hl->t[10];
					break;	
				case 'u':
					head = hl->u[10];
					break;	
				case 'v':
					head = hl->v[10];
					break;	
				case 'w':
					head = hl->w[10];
					break;	
				case 'x':
					head = hl->x[10];
					break;	
				case 'y':
					head = hl->y[10];
					break;	
				case 'z':
					head = hl->z[10];
					break;	
				default:
					head = hl->rem;
					break;	
			}
			break;                                                                  				
		case 11: 
			switch(ch){
				case 'a':
					head = hl->a[11];
					break;
				case 'b':
					head = hl->b[11];
					break;	
				case 'c':
					head = hl->c[11];
					break;	
				case 'd':
					head = hl->d[11];
					break;	
				case 'e':
					head = hl->e[11];
					break;	
				case 'f':
					head = hl->f[11];
					break;	
				case 'g':
					head = hl->g[11];
					break;	
				case 'h':
					head = hl->h[11];
					break;	
				case 'i':
					head = hl->i[11];
					break;	
				case 'j':
					head = hl->j[11];
					break;	
				case 'k':
					head = hl->k[11];
					break;	
				case 'l':
					head = hl->l[11];
					break;	
				case 'm':
					head = hl->m[11];
					break;	
				case 'n':
					head = hl->n[11];
					break;	
				case 'o':
					head = hl->o[11];
					break;	
				case 'p':
					head = hl->p[11];
					break;	
				case 'q':
					head = hl->q[11];
					break;	
				case 'r':
					head = hl->r[11];
					break;	
				case 's':
					head = hl->s[11];
					break;	
				case 't':
					head = hl->t[11];
					break;	
				case 'u':
					head = hl->u[11];
					break;	
				case 'v':
					head = hl->v[11];
					break;	
				case 'w':
					head = hl->w[11];
					break;	
				case 'x':
					head = hl->x[11];
					break;	
				case 'y':
					head = hl->y[11];
					break;	
				case 'z':
					head = hl->z[11];
					break;	
				default:
					head = hl->rem;
					break;	
			}
			break;                                                                  				
		case 12: 
			switch(ch){
				case 'a':
					head = hl->a[12];
					break;
				case 'b':
					head = hl->b[12];
					break;	
				case 'c':
					head = hl->c[12];
					break;	
				case 'd':
					head = hl->d[12];
					break;	
				case 'e':
					head = hl->e[12];
					break;	
				case 'f':
					head = hl->f[12];
					break;	
				case 'g':
					head = hl->g[12];
					break;	
				case 'h':
					head = hl->h[12];
					break;	
				case 'i':
					head = hl->i[12];
					break;	
				case 'j':
					head = hl->j[12];
					break;	
				case 'k':
					head = hl->k[12];
					break;	
				case 'l':
					head = hl->l[12];
					break;	
				case 'm':
					head = hl->m[12];
					break;	
				case 'n':
					head = hl->n[12];
					break;	
				case 'o':
					head = hl->o[12];
					break;	
				case 'p':
					head = hl->p[12];
					break;	
				case 'q':
					head = hl->q[12];
					break;	
				case 'r':
					head = hl->r[12];
					break;	
				case 's':
					head = hl->s[12];
					break;	
				case 't':
					head = hl->t[12];
					break;	
				case 'u':
					head = hl->u[12];
					break;	
				case 'v':
					head = hl->v[12];
					break;	
				case 'w':
					head = hl->w[12];
					break;	
				case 'x':
					head = hl->x[12];
					break;	
				case 'y':
					head = hl->y[12];
					break;	
				case 'z':
					head = hl->z[12];
					break;	
				default:
					head = hl->rem;
					break;	
			}
			break;                                                                  				
		case 13: 
			switch(ch){
				case 'a':
					head = hl->a[13];
					break;
				case 'b':
					head = hl->b[13];
					break;	
				case 'c':
					head = hl->c[13];
					break;	
				case 'd':
					head = hl->d[13];
					break;	
				case 'e':
					head = hl->e[13];
					break;	
				case 'f':
					head = hl->f[13];
					break;	
				case 'g':
					head = hl->g[13];
					break;	
				case 'h':
					head = hl->h[13];
					break;	
				case 'i':
					head = hl->i[13];
					break;	
				case 'j':
					head = hl->j[13];
					break;	
				case 'k':
					head = hl->k[13];
					break;	
				case 'l':
					head = hl->l[13];
					break;	
				case 'm':
					head = hl->m[13];
					break;	
				case 'n':
					head = hl->n[13];
					break;	
				case 'o':
					head = hl->o[13];
					break;	
				case 'p':
					head = hl->p[13];
					break;	
				case 'q':
					head = hl->q[13];
					break;	
				case 'r':
					head = hl->r[13];
					break;	
				case 's':
					head = hl->s[13];
					break;	
				case 't':
					head = hl->t[13];
					break;	
				case 'u':
					head = hl->u[13];
					break;	
				case 'v':
					head = hl->v[13];
					break;	
				case 'w':
					head = hl->w[13];
					break;	
				case 'x':
					head = hl->x[13];
					break;	
				case 'y':
					head = hl->y[13];
					break;	
				case 'z':
					head = hl->z[13];
					break;	
				default:
					head = hl->rem;
					break;	
			}
			break;                                                                  				
		default:
			head = hl->rem;
			break;	               
	}
	dict *ptr;
	if(head == NULL)
		printf("\nWord not found.\n");
	else{
		for(ptr = head; ptr != NULL; ptr = ptr->next){
			if(ptr->key == kval){
				int fd = open("src.txt", O_RDONLY);
				lseek(fd, ptr->fp, SEEK_SET);
				read(fd, &j, 4);
				cnt = 0;
				while(read(fd, &ch, 1) != 0 && ch != '\n')
					c[cnt++] = ch;
					c[cnt] = '\0';
					slen = strlen(c);
				for(i = 0; c[i] < '|'; i++)
					d[i] = c[i];
				d[i] = '\0';
				close(fd);
				if(strcmp(d, s) == 0){
					flag = ptr;
					break;
				}	
			}	
		}
	}
	if(flag != NULL)
		print(flag);
}
