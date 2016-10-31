harr *store(){
	int keyval, fpos, fd, len, cnt, i;
	char ch;
	harr *hl = (harr*)malloc(sizeof(harr));
	for(i = 0; i < 13; i++){
		hl->a[i] = NULL; 
		hl->b[i] = NULL;
		hl->c[i] = NULL;
		hl->d[i] = NULL;
		hl->e[i] = NULL;
		hl->f[i] = NULL;
		hl->g[i] = NULL;
		hl->h[i] = NULL;
		hl->i[i] = NULL;
		hl->j[i] = NULL;
		hl->k[i] = NULL;
		hl->l[i] = NULL;
		hl->m[i] = NULL;
		hl->n[i] = NULL;
		hl->o[i] = NULL;
		hl->p[i] = NULL;
		hl->q[i] = NULL;
		hl->r[i] = NULL;
		hl->s[i] = NULL;
		hl->t[i] = NULL;
		hl->u[i] = NULL;
		hl->v[i] = NULL;
		hl->w[i] = NULL;
		hl->x[i] = NULL;
		hl->y[i] = NULL;
		hl->z[i] = NULL;
	}
	hl->rem = NULL;
	// opening file in which structured data is stored in read only mode
	fd = open("keyfd.txt", O_RDONLY);
	dict *temp;
	// reading from worlist structured data from "wl1.txt" and storing in corresponding linked lists
	while(read(fd, &ch, 1) != 0){
            	dict *newnode = (dict*)malloc(sizeof(dict));
            	if (newnode == NULL){
		       	printf("\nMemory was not allocated");
          		return NULL;
            	}
            	else{
            		newnode->next = NULL;
			newnode->ch = ch;
			read(fd, &keyval, 4);
			len = keyval % 100;
			newnode->key = keyval;
			read(fd, &fpos, 4);
			newnode->fp = fpos;
			int l = len - 1;
			switch(l){
				case 0:	
					switch(ch){
						case 'a':	
							if(hl->a[0] != NULL){
								temp = hl->a[0];
								hl->a[0] = newnode;
								hl->a[0]->next = temp;
							}
							else{
								hl->a[0] = newnode;
								hl->a[0]->next = NULL;
							}
							break;
						case 'b':	
							if(hl->b[0] != NULL){
								temp = hl->b[0];
								hl->b[0] = newnode;
								hl->b[0]->next = temp;
							}
							else{
								hl->b[0] = newnode;
								hl->b[0]->next = NULL;
							}
							break;
						case 'c':	
							if(hl->c[0] != NULL){
								temp = hl->c[0];
								hl->c[0] = newnode;
								hl->c[0]->next = temp;
							}
							else{
								hl->c[0] = newnode;
								hl->c[0]->next = NULL;
							}
							break;
						case 'd':	
							if(hl->d[0] != NULL){
								temp = hl->d[0];
								hl->d[0] = newnode;
								hl->d[0]->next = temp;
							}
							else{
								hl->d[0] = newnode;
								hl->d[0]->next = NULL;
							}
							break;
						case 'e':	
							if(hl->e[0] != NULL){
								temp = hl->e[0];
								hl->e[0] = newnode;
								hl->e[0]->next = temp;
							}
							else{
								hl->e[0] = newnode;
								hl->e[0]->next = NULL;
							}
							break;
						case 'f':	
							if(hl->f[0] != NULL){
								temp = hl->f[0];
								hl->f[0] = newnode;
								hl->f[0]->next = temp;
							}
							else{
								hl->f[0] = newnode;
								hl->f[0]->next = NULL;
							}
							break;
						case 'g':	
							if(hl->g[0] != NULL){
								temp = hl->g[0];
								hl->g[0] = newnode;
								hl->g[0]->next = temp;
							}
							else{
								hl->g[0] = newnode;
								hl->g[0]->next = NULL;
							}
							break;
						case 'h':	
							if(hl->h[0] != NULL){
								temp = hl->h[0];
								hl->h[0] = newnode;
								hl->h[0]->next = temp;
							}
							else{
								hl->h[0] = newnode;
								hl->h[0]->next = NULL;
							}
							break;
						case 'i':	
							if(hl->i[0] != NULL){
								temp = hl->i[0];
								hl->i[0] = newnode;
								hl->i[0]->next = temp;
							}
							else{
								hl->i[0] = newnode;
								hl->i[0]->next = NULL;
							}
							break;
						case 'j':	
							if(hl->j[0] != NULL){
								temp = hl->j[0];
								hl->j[0] = newnode;
								hl->j[0]->next = temp;
							}
							else{
								hl->j[0] = newnode;
								hl->j[0]->next = NULL;
							}
							break;
						case 'k':	
							if(hl->k[0] != NULL){
								temp = hl->k[0];
								hl->k[0] = newnode;
								hl->k[0]->next = temp;
							}
							else{
								hl->k[0] = newnode;
								hl->k[0]->next = NULL;
							}
							break;
						case 'l':	
							if(hl->l[0] != NULL){
								temp = hl->l[0];
								hl->l[0] = newnode;
								hl->l[0]->next = temp;
							}
							else{
								hl->l[0] = newnode;
								hl->l[0]->next = NULL;
							}
							break;
						case 'm':	
							if(hl->m[0] != NULL){
								temp = hl->m[0];
								hl->m[0] = newnode;
								hl->m[0]->next = temp;
							}
							else{
								hl->m[0] = newnode;
								hl->m[0]->next = NULL;
							}
							break;
						case 'n':	
							if(hl->n[0] != NULL){
								temp = hl->n[0];
								hl->n[0] = newnode;
								hl->n[0]->next = temp;
							}
							else{
								hl->n[0] = newnode;
								hl->n[0]->next = NULL;
							}
							break;
						case 'o':	
							if(hl->o[0] != NULL){
								temp = hl->o[0];
								hl->o[0] = newnode;
								hl->o[0]->next = temp;
							}
							else{
								hl->o[0] = newnode;
								hl->o[0]->next = NULL;
							}
							break;
						case 'p':	
							if(hl->p[0] != NULL){
								temp = hl->p[0];
								hl->p[0] = newnode;
								hl->p[0]->next = temp;
							}
							else{
								hl->p[0] = newnode;
								hl->p[0]->next = NULL;
							}
							break;
						case 'q':	
							if(hl->q[0] != NULL){
								temp = hl->q[0];
								hl->q[0] = newnode;
								hl->q[0]->next = temp;
							}
							else{
								hl->q[0] = newnode;
								hl->q[0]->next = NULL;
							}
							break;
						case 'r':	
							if(hl->r[0] != NULL){
								temp = hl->r[0];
								hl->r[0] = newnode;
								hl->r[0]->next = temp;
							}
							else{
								hl->r[0] = newnode;
								hl->r[0]->next = NULL;
							}
							break;
						case 's':	
							if(hl->s[0] != NULL){
								temp = hl->s[0];
								hl->s[0] = newnode;
								hl->s[0]->next = temp;
							}
							else{
								hl->s[0] = newnode;
								hl->s[0]->next = NULL;
							}
							break;
						case 't':	
							if(hl->t[0] != NULL){
								temp = hl->t[0];
								hl->t[0] = newnode;
								hl->t[0]->next = temp;
							}
							else{
								hl->t[0] = newnode;
								hl->t[0]->next = NULL;
							}
							break;
						case 'u':	
							if(hl->u[0] != NULL){
								temp = hl->u[0];
								hl->u[0] = newnode;
								hl->u[0]->next = temp;
							}
							else{
								hl->u[0] = newnode;
								hl->u[0]->next = NULL;
							}
							break;
						case 'v':	
							if(hl->v[0] != NULL){
								temp = hl->v[0];
								hl->v[0] = newnode;
								hl->v[0]->next = temp;
							}
							else{
								hl->v[0] = newnode;
								hl->v[0]->next = NULL;
							}
							break;
						case 'w':	
							if(hl->w[0] != NULL){
								temp = hl->w[0];
								hl->w[0] = newnode;
								hl->w[0]->next = temp;
							}
							else{
								hl->w[0] = newnode;
								hl->w[0]->next = NULL;
							}
							break;
						case 'x':	
							if(hl->x[0] != NULL){
								temp = hl->x[0];
								hl->x[0] = newnode;
								hl->x[0]->next = temp;
							}
							else{
								hl->x[0] = newnode;
								hl->x[0]->next = NULL;
							}
							break;
						case 'y':	
							if(hl->y[0] != NULL){
								temp = hl->y[0];
								hl->y[0] = newnode;
								hl->y[0]->next = temp;
							}
							else{
								hl->y[0] = newnode;
								hl->y[0]->next = NULL;
							}
							break;
						case 'z':	
							if(hl->z[0] != NULL){
								temp = hl->z[0];
								hl->z[0] = newnode;
								hl->z[0]->next = temp;
							}
							else{
								hl->z[0] = newnode;
								hl->z[0]->next = NULL;
							}
							break;
						default:	
							if(hl->rem != NULL){
								temp = hl->rem;
								hl->rem = newnode;
								hl->rem->next = temp;
							}
							else{
								hl->rem = newnode;
								hl->rem->next = NULL;
							}
							break;
					}//end of switch(ch)
					break;
				case 1:	
					switch(ch){
						case 'a':	
							if(hl->a[1] != NULL){
								temp = hl->a[1];
								hl->a[1] = newnode;
								hl->a[1]->next = temp;
							}
							else{
								hl->a[1] = newnode;
								hl->a[1]->next = NULL;
							}
							break;
						case 'b':	
							if(hl->b[1] != NULL){
								temp = hl->b[1];
								hl->b[1] = newnode;
								hl->b[1]->next = temp;
							}
							else{
								hl->b[1] = newnode;
								hl->b[1]->next = NULL;
							}
							break;
						case 'c':	
							if(hl->c[1] != NULL){
								temp = hl->c[1];
								hl->c[1] = newnode;
								hl->c[1]->next = temp;
							}
							else{
								hl->c[1] = newnode;
								hl->c[1]->next = NULL;
							}
							break;
						case 'd':	
							if(hl->d[1] != NULL){
								temp = hl->d[1];
								hl->d[1] = newnode;
								hl->d[1]->next = temp;
							}
							else{
								hl->d[1] = newnode;
								hl->d[1]->next = NULL;
							}
							break;
						case 'e':	
							if(hl->e[1] != NULL){
								temp = hl->e[1];
								hl->e[1] = newnode;
								hl->e[1]->next = temp;
							}
							else{
								hl->e[1] = newnode;
								hl->e[1]->next = NULL;
							}
							break;
						case 'f':	
							if(hl->f[1] != NULL){
								temp = hl->f[1];
								hl->f[1] = newnode;
								hl->f[1]->next = temp;
							}
							else{
								hl->f[1] = newnode;
								hl->f[1]->next = NULL;
							}
							break;
						case 'g':	
							if(hl->g[1] != NULL){
								temp = hl->g[1];
								hl->g[1] = newnode;
								hl->g[1]->next = temp;
							}
							else{
								hl->g[1] = newnode;
								hl->g[1]->next = NULL;
							}
							break;
						case 'h':	
							if(hl->h[1] != NULL){
								temp = hl->h[1];
								hl->h[1] = newnode;
								hl->h[1]->next = temp;
							}
							else{
								hl->h[1] = newnode;
								hl->h[1]->next = NULL;
							}
							break;
						case 'i':	
							if(hl->i[1] != NULL){
								temp = hl->i[1];
								hl->i[1] = newnode;
								hl->i[1]->next = temp;
							}
							else{
								hl->i[1] = newnode;
								hl->i[1]->next = NULL;
							}
							break;
						case 'j':	
							if(hl->j[1] != NULL){
								temp = hl->j[1];
								hl->j[1] = newnode;
								hl->j[1]->next = temp;
							}
							else{
								hl->j[1] = newnode;
								hl->j[1]->next = NULL;
							}
							break;
						case 'k':	
							if(hl->k[1] != NULL){
								temp = hl->k[1];
								hl->k[1] = newnode;
								hl->k[1]->next = temp;
							}
							else{
								hl->k[1] = newnode;
								hl->k[1]->next = NULL;
							}
							break;
						case 'l':	
							if(hl->l[1] != NULL){
								temp = hl->l[1];
								hl->l[1] = newnode;
								hl->l[1]->next = temp;
							}
							else{
								hl->l[1] = newnode;
								hl->l[1]->next = NULL;
							}
							break;
						case 'm':	
							if(hl->m[1] != NULL){
								temp = hl->m[1];
								hl->m[1] = newnode;
								hl->m[1]->next = temp;
							}
							else{
								hl->m[1] = newnode;
								hl->m[1]->next = NULL;
							}
							break;
						case 'n':	
							if(hl->n[1] != NULL){
								temp = hl->n[1];
								hl->n[1] = newnode;
								hl->n[1]->next = temp;
							}
							else{
								hl->n[1] = newnode;
								hl->n[1]->next = NULL;
							}
							break;
						case 'o':	
							if(hl->o[1] != NULL){
								temp = hl->o[1];
								hl->o[1] = newnode;
								hl->o[1]->next = temp;
							}
							else{
								hl->o[1] = newnode;
								hl->o[1]->next = NULL;
							}
							break;
						case 'p':	
							if(hl->p[1] != NULL){
								temp = hl->p[1];
								hl->p[1] = newnode;
								hl->p[1]->next = temp;
							}
							else{
								hl->p[1] = newnode;
								hl->p[1]->next = NULL;
							}
							break;
						case 'q':	
							if(hl->q[1] != NULL){
								temp = hl->q[1];
								hl->q[1] = newnode;
								hl->q[1]->next = temp;
							}
							else{
								hl->q[1] = newnode;
								hl->q[1]->next = NULL;
							}
							break;
						case 'r':	
							if(hl->r[1] != NULL){
								temp = hl->r[1];
								hl->r[1] = newnode;
								hl->r[1]->next = temp;
							}
							else{
								hl->r[1] = newnode;
								hl->r[1]->next = NULL;
							}
							break;
						case 's':	
							if(hl->s[1] != NULL){
								temp = hl->s[1];
								hl->s[1] = newnode;
								hl->s[1]->next = temp;
							}
							else{
								hl->s[1] = newnode;
								hl->s[1]->next = NULL;
							}
							break;
						case 't':	
							if(hl->t[1] != NULL){
								temp = hl->t[1];
								hl->t[1] = newnode;
								hl->t[1]->next = temp;
							}
							else{
								hl->t[1] = newnode;
								hl->t[1]->next = NULL;
							}
							break;
						case 'u':	
							if(hl->u[1] != NULL){
								temp = hl->u[1];
								hl->u[1] = newnode;
								hl->u[1]->next = temp;
							}
							else{
								hl->u[1] = newnode;
								hl->u[1]->next = NULL;
							}
							break;
						case 'v':	
							if(hl->v[1] != NULL){
								temp = hl->v[1];
								hl->v[1] = newnode;
								hl->v[1]->next = temp;
							}
							else{
								hl->v[1] = newnode;
								hl->v[1]->next = NULL;
							}
							break;
						case 'w':	
							if(hl->w[1] != NULL){
								temp = hl->w[1];
								hl->w[1] = newnode;
								hl->w[1]->next = temp;
							}
							else{
								hl->w[1] = newnode;
								hl->w[1]->next = NULL;
							}
							break;
						case 'x':	
							if(hl->x[1] != NULL){
								temp = hl->x[1];
								hl->x[1] = newnode;
								hl->x[1]->next = temp;
							}
							else{
								hl->x[1] = newnode;
								hl->x[1]->next = NULL;
							}
							break;
						case 'y':	
							if(hl->y[1] != NULL){
								temp = hl->y[1];
								hl->y[1] = newnode;
								hl->y[1]->next = temp;
							}
							else{
								hl->y[1] = newnode;
								hl->y[1]->next = NULL;
							}
							break;
						case 'z':	
							if(hl->z[1] != NULL){
								temp = hl->z[1];
								hl->z[1] = newnode;
								hl->z[1]->next = temp;
							}
							else{
								hl->z[1] = newnode;
								hl->z[1]->next = NULL;
							}
							break;
						default:	
							if(hl->rem != NULL){
								temp = hl->rem;
								hl->rem = newnode;
								hl->rem->next = temp;
							}
							else{
								hl->rem = newnode;
								hl->rem->next = NULL;
							}
							break;
					}//end of switch(ch)
					break;
				case 2:	
					switch(ch){
						case 'a':	
							if(hl->a[2] != NULL){
								temp = hl->a[2];
								hl->a[2] = newnode;
								hl->a[2]->next = temp;
							}
							else{
								hl->a[2] = newnode;
								hl->a[2]->next = NULL;
							}
							break;
						case 'b':	
							if(hl->b[2] != NULL){
								temp = hl->b[2];
								hl->b[2] = newnode;
								hl->b[2]->next = temp;
							}
							else{
								hl->b[2] = newnode;
								hl->b[2]->next = NULL;
							}
							break;
						case 'c':	
							if(hl->c[2] != NULL){
								temp = hl->c[2];
								hl->c[2] = newnode;
								hl->c[2]->next = temp;
							}
							else{
								hl->c[2] = newnode;
								hl->c[2]->next = NULL;
							}
							break;
						case 'd':	
							if(hl->d[2] != NULL){
								temp = hl->d[2];
								hl->d[2] = newnode;
								hl->d[2]->next = temp;
							}
							else{
								hl->d[2] = newnode;
								hl->d[2]->next = NULL;
							}
							break;
						case 'e':	
							if(hl->e[2] != NULL){
								temp = hl->e[2];
								hl->e[2] = newnode;
								hl->e[2]->next = temp;
							}
							else{
								hl->e[2] = newnode;
								hl->e[2]->next = NULL;
							}
							break;
						case 'f':	
							if(hl->f[2] != NULL){
								temp = hl->f[2];
								hl->f[2] = newnode;
								hl->f[2]->next = temp;
							}
							else{
								hl->f[2] = newnode;
								hl->f[2]->next = NULL;
							}
							break;
						case 'g':	
							if(hl->g[2] != NULL){
								temp = hl->g[2];
								hl->g[2] = newnode;
								hl->g[2]->next = temp;
							}
							else{
								hl->g[2] = newnode;
								hl->g[2]->next = NULL;
							}
							break;
						case 'h':	
							if(hl->h[2] != NULL){
								temp = hl->h[2];
								hl->h[2] = newnode;
								hl->h[2]->next = temp;
							}
							else{
								hl->h[2] = newnode;
								hl->h[2]->next = NULL;
							}
							break;
						case 'i':	
							if(hl->i[2] != NULL){
								temp = hl->i[2];
								hl->i[2] = newnode;
								hl->i[2]->next = temp;
							}
							else{
								hl->i[2] = newnode;
								hl->i[2]->next = NULL;
							}
							break;
						case 'j':	
							if(hl->j[2] != NULL){
								temp = hl->j[2];
								hl->j[2] = newnode;
								hl->j[2]->next = temp;
							}
							else{
								hl->j[2] = newnode;
								hl->j[2]->next = NULL;
							}
							break;
						case 'k':	
							if(hl->k[2] != NULL){
								temp = hl->k[2];
								hl->k[2] = newnode;
								hl->k[2]->next = temp;
							}
							else{
								hl->k[2] = newnode;
								hl->k[2]->next = NULL;
							}
							break;
						case 'l':	
							if(hl->l[2] != NULL){
								temp = hl->l[2];
								hl->l[2] = newnode;
								hl->l[2]->next = temp;
							}
							else{
								hl->l[2] = newnode;
								hl->l[2]->next = NULL;
							}
							break;
						case 'm':	
							if(hl->m[2] != NULL){
								temp = hl->m[2];
								hl->m[2] = newnode;
								hl->m[2]->next = temp;
							}
							else{
								hl->m[2] = newnode;
								hl->m[2]->next = NULL;
							}
							break;
						case 'n':	
							if(hl->n[2] != NULL){
								temp = hl->n[2];
								hl->n[2] = newnode;
								hl->n[2]->next = temp;
							}
							else{
								hl->n[2] = newnode;
								hl->n[2]->next = NULL;
							}
							break;
						case 'o':	
							if(hl->o[2] != NULL){
								temp = hl->o[2];
								hl->o[2] = newnode;
								hl->o[2]->next = temp;
							}
							else{
								hl->o[2] = newnode;
								hl->o[2]->next = NULL;
							}
							break;
						case 'p':	
							if(hl->p[2] != NULL){
								temp = hl->p[2];
								hl->p[2] = newnode;
								hl->p[2]->next = temp;
							}
							else{
								hl->p[2] = newnode;
								hl->p[2]->next = NULL;
							}
							break;
						case 'q':	
							if(hl->q[2] != NULL){
								temp = hl->q[2];
								hl->q[2] = newnode;
								hl->q[2]->next = temp;
							}
							else{
								hl->q[2] = newnode;
								hl->q[2]->next = NULL;
							}
							break;
						case 'r':	
							if(hl->r[2] != NULL){
								temp = hl->r[2];
								hl->r[2] = newnode;
								hl->r[2]->next = temp;
							}
							else{
								hl->r[2] = newnode;
								hl->r[2]->next = NULL;
							}
							break;
						case 's':	
							if(hl->s[2] != NULL){
								temp = hl->s[2];
								hl->s[2] = newnode;
								hl->s[2]->next = temp;
							}
							else{
								hl->s[2] = newnode;
								hl->s[2]->next = NULL;
							}
							break;
						case 't':	
							if(hl->t[2] != NULL){
								temp = hl->t[2];
								hl->t[2] = newnode;
								hl->t[2]->next = temp;
							}
							else{
								hl->t[2] = newnode;
								hl->t[2]->next = NULL;
							}
							break;
						case 'u':	
							if(hl->u[2] != NULL){
								temp = hl->u[2];
								hl->u[2] = newnode;
								hl->u[2]->next = temp;
							}
							else{
								hl->u[2] = newnode;
								hl->u[2]->next = NULL;
							}
							break;
						case 'v':	
							if(hl->v[2] != NULL){
								temp = hl->v[2];
								hl->v[2] = newnode;
								hl->v[2]->next = temp;
							}
							else{
								hl->v[2] = newnode;
								hl->v[2]->next = NULL;
							}
							break;
						case 'w':	
							if(hl->w[2] != NULL){
								temp = hl->w[2];
								hl->w[2] = newnode;
								hl->w[2]->next = temp;
							}
							else{
								hl->w[2] = newnode;
								hl->w[2]->next = NULL;
							}
							break;
						case 'x':	
							if(hl->x[2] != NULL){
								temp = hl->x[2];
								hl->x[2] = newnode;
								hl->x[2]->next = temp;
							}
							else{
								hl->x[2] = newnode;
								hl->x[2]->next = NULL;
							}
							break;
						case 'y':	
							if(hl->y[2] != NULL){
								temp = hl->y[2];
								hl->y[2] = newnode;
								hl->y[2]->next = temp;
							}
							else{
								hl->y[2] = newnode;
								hl->y[2]->next = NULL;
							}
							break;
						case 'z':	
							if(hl->z[2] != NULL){
								temp = hl->z[2];
								hl->z[2] = newnode;
								hl->z[2]->next = temp;
							}
							else{
								hl->z[2] = newnode;
								hl->z[2]->next = NULL;
							}
							break;
						default:	
							if(hl->rem != NULL){
								temp = hl->rem;
								hl->rem = newnode;
								hl->rem->next = temp;
							}
							else{
								hl->rem = newnode;
								hl->rem->next = NULL;
							}
							break;
					}//end of switch(ch)
					break;
				case 3:	
					switch(ch){
						case 'a':	
							if(hl->a[3] != NULL){
								temp = hl->a[3];
								hl->a[3] = newnode;
								hl->a[3]->next = temp;
							}
							else{
								hl->a[3] = newnode;
								hl->a[3]->next = NULL;
							}
							break;
						case 'b':	
							if(hl->b[3] != NULL){
								temp = hl->b[3];
								hl->b[3] = newnode;
								hl->b[3]->next = temp;
							}
							else{
								hl->b[3] = newnode;
								hl->b[3]->next = NULL;
							}
							break;
						case 'c':	
							if(hl->c[3] != NULL){
								temp = hl->c[3];
								hl->c[3] = newnode;
								hl->c[3]->next = temp;
							}
							else{
								hl->c[3] = newnode;
								hl->c[3]->next = NULL;
							}
							break;
						case 'd':	
							if(hl->d[3] != NULL){
								temp = hl->d[3];
								hl->d[3] = newnode;
								hl->d[3]->next = temp;
							}
							else{
								hl->d[3] = newnode;
								hl->d[3]->next = NULL;
							}
							break;
						case 'e':	
							if(hl->e[3] != NULL){
								temp = hl->e[3];
								hl->e[3] = newnode;
								hl->e[3]->next = temp;
							}
							else{
								hl->e[3] = newnode;
								hl->e[3]->next = NULL;
							}
							break;
						case 'f':	
							if(hl->f[3] != NULL){
								temp = hl->f[3];
								hl->f[3] = newnode;
								hl->f[3]->next = temp;
							}
							else{
								hl->f[3] = newnode;
								hl->f[3]->next = NULL;
							}
							break;
						case 'g':	
							if(hl->g[3] != NULL){
								temp = hl->g[3];
								hl->g[3] = newnode;
								hl->g[3]->next = temp;
							}
							else{
								hl->g[3] = newnode;
								hl->g[3]->next = NULL;
							}
							break;
						case 'h':	
							if(hl->h[3] != NULL){
								temp = hl->h[3];
								hl->h[3] = newnode;
								hl->h[3]->next = temp;
							}
							else{
								hl->h[3] = newnode;
								hl->h[3]->next = NULL;
							}
							break;
						case 'i':	
							if(hl->i[3] != NULL){
								temp = hl->i[3];
								hl->i[3] = newnode;
								hl->i[3]->next = temp;
							}
							else{
								hl->i[3] = newnode;
								hl->i[3]->next = NULL;
							}
							break;
						case 'j':	
							if(hl->j[3] != NULL){
								temp = hl->j[3];
								hl->j[3] = newnode;
								hl->j[3]->next = temp;
							}
							else{
								hl->j[3] = newnode;
								hl->j[3]->next = NULL;
							}
							break;
						case 'k':	
							if(hl->k[3] != NULL){
								temp = hl->k[3];
								hl->k[3] = newnode;
								hl->k[3]->next = temp;
							}
							else{
								hl->k[3] = newnode;
								hl->k[3]->next = NULL;
							}
							break;
						case 'l':	
							if(hl->l[3] != NULL){
								temp = hl->l[3];
								hl->l[3] = newnode;
								hl->l[3]->next = temp;
							}
							else{
								hl->l[3] = newnode;
								hl->l[3]->next = NULL;
							}
							break;
						case 'm':	
							if(hl->m[3] != NULL){
								temp = hl->m[3];
								hl->m[3] = newnode;
								hl->m[3]->next = temp;
							}
							else{
								hl->m[3] = newnode;
								hl->m[3]->next = NULL;
							}
							break;
						case 'n':	
							if(hl->n[3] != NULL){
								temp = hl->n[3];
								hl->n[3] = newnode;
								hl->n[3]->next = temp;
							}
							else{
								hl->n[3] = newnode;
								hl->n[3]->next = NULL;
							}
							break;
						case 'o':	
							if(hl->o[3] != NULL){
								temp = hl->o[3];
								hl->o[3] = newnode;
								hl->o[3]->next = temp;
							}
							else{
								hl->o[3] = newnode;
								hl->o[3]->next = NULL;
							}
							break;
						case 'p':	
							if(hl->p[3] != NULL){
								temp = hl->p[3];
								hl->p[3] = newnode;
								hl->p[3]->next = temp;
							}
							else{
								hl->p[3] = newnode;
								hl->p[3]->next = NULL;
							}
							break;
						case 'q':	
							if(hl->q[3] != NULL){
								temp = hl->q[3];
								hl->q[3] = newnode;
								hl->q[3]->next = temp;
							}
							else{
								hl->q[3] = newnode;
								hl->q[3]->next = NULL;
							}
							break;
						case 'r':	
							if(hl->r[3] != NULL){
								temp = hl->r[3];
								hl->r[3] = newnode;
								hl->r[3]->next = temp;
							}
							else{
								hl->r[3] = newnode;
								hl->r[3]->next = NULL;
							}
							break;
						case 's':	
							if(hl->s[3] != NULL){
								temp = hl->s[3];
								hl->s[3] = newnode;
								hl->s[3]->next = temp;
							}
							else{
								hl->s[3] = newnode;
								hl->s[3]->next = NULL;
							}
							break;
						case 't':	
							if(hl->t[3] != NULL){
								temp = hl->t[3];
								hl->t[3] = newnode;
								hl->t[3]->next = temp;
							}
							else{
								hl->t[3] = newnode;
								hl->t[3]->next = NULL;
							}
							break;
						case 'u':	
							if(hl->u[3] != NULL){
								temp = hl->u[3];
								hl->u[3] = newnode;
								hl->u[3]->next = temp;
							}
							else{
								hl->u[3] = newnode;
								hl->u[3]->next = NULL;
							}
							break;
						case 'v':	
							if(hl->v[3] != NULL){
								temp = hl->v[3];
								hl->v[3] = newnode;
								hl->v[3]->next = temp;
							}
							else{
								hl->v[3] = newnode;
								hl->v[3]->next = NULL;
							}
							break;
						case 'w':	
							if(hl->w[3] != NULL){
								temp = hl->w[3];
								hl->w[3] = newnode;
								hl->w[3]->next = temp;
							}
							else{
								hl->w[3] = newnode;
								hl->w[3]->next = NULL;
							}
							break;
						case 'x':	
							if(hl->x[3] != NULL){
								temp = hl->x[3];
								hl->x[3] = newnode;
								hl->x[3]->next = temp;
							}
							else{
								hl->x[3] = newnode;
								hl->x[3]->next = NULL;
							}
							break;
						case 'y':	
							if(hl->y[3] != NULL){
								temp = hl->y[3];
								hl->y[3] = newnode;
								hl->y[3]->next = temp;
							}
							else{
								hl->y[3] = newnode;
								hl->y[3]->next = NULL;
							}
							break;
						case 'z':	
							if(hl->z[3] != NULL){
								temp = hl->z[3];
								hl->z[3] = newnode;
								hl->z[3]->next = temp;
							}
							else{
								hl->z[3] = newnode;
								hl->z[3]->next = NULL;
							}
							break;
						default:	
							if(hl->rem != NULL){
								temp = hl->rem;
								hl->rem = newnode;
								hl->rem->next = temp;
							}
							else{
								hl->rem = newnode;
								hl->rem->next = NULL;
							}
							break;
					}//end of switch(ch)
					break;
				case 4:	
					switch(ch){
						case 'a':	
							if(hl->a[4] != NULL){
								temp = hl->a[4];
								hl->a[4] = newnode;
								hl->a[4]->next = temp;
							}
							else{
								hl->a[4] = newnode;
								hl->a[4]->next = NULL;
							}
							break;
						case 'b':	
							if(hl->b[4] != NULL){
								temp = hl->b[4];
								hl->b[4] = newnode;
								hl->b[4]->next = temp;
							}
							else{
								hl->b[4] = newnode;
								hl->b[4]->next = NULL;
							}
							break;
						case 'c':	
							if(hl->c[4] != NULL){
								temp = hl->c[4];
								hl->c[4] = newnode;
								hl->c[4]->next = temp;
							}
							else{
								hl->c[4] = newnode;
								hl->c[4]->next = NULL;
							}
							break;
						case 'd':	
							if(hl->d[4] != NULL){
								temp = hl->d[4];
								hl->d[4] = newnode;
								hl->d[4]->next = temp;
							}
							else{
								hl->d[4] = newnode;
								hl->d[4]->next = NULL;
							}
							break;
						case 'e':	
							if(hl->e[4] != NULL){
								temp = hl->e[4];
								hl->e[4] = newnode;
								hl->e[4]->next = temp;
							}
							else{
								hl->e[4] = newnode;
								hl->e[4]->next = NULL;
							}
							break;
						case 'f':	
							if(hl->f[4] != NULL){
								temp = hl->f[4];
								hl->f[4] = newnode;
								hl->f[4]->next = temp;
							}
							else{
								hl->f[4] = newnode;
								hl->f[4]->next = NULL;
							}
							break;
						case 'g':	
							if(hl->g[4] != NULL){
								temp = hl->g[4];
								hl->g[4] = newnode;
								hl->g[4]->next = temp;
							}
							else{
								hl->g[4] = newnode;
								hl->g[4]->next = NULL;
							}
							break;
						case 'h':	
							if(hl->h[4] != NULL){
								temp = hl->h[4];
								hl->h[4] = newnode;
								hl->h[4]->next = temp;
							}
							else{
								hl->h[4] = newnode;
								hl->h[4]->next = NULL;
							}
							break;
						case 'i':	
							if(hl->i[4] != NULL){
								temp = hl->i[4];
								hl->i[4] = newnode;
								hl->i[4]->next = temp;
							}
							else{
								hl->i[4] = newnode;
								hl->i[4]->next = NULL;
							}
							break;
						case 'j':	
							if(hl->j[4] != NULL){
								temp = hl->j[4];
								hl->j[4] = newnode;
								hl->j[4]->next = temp;
							}
							else{
								hl->j[4] = newnode;
								hl->j[4]->next = NULL;
							}
							break;
						case 'k':	
							if(hl->k[4] != NULL){
								temp = hl->k[4];
								hl->k[4] = newnode;
								hl->k[4]->next = temp;
							}
							else{
								hl->k[4] = newnode;
								hl->k[4]->next = NULL;
							}
							break;
						case 'l':	
							if(hl->l[4] != NULL){
								temp = hl->l[4];
								hl->l[4] = newnode;
								hl->l[4]->next = temp;
							}
							else{
								hl->l[4] = newnode;
								hl->l[4]->next = NULL;
							}
							break;
						case 'm':	
							if(hl->m[4] != NULL){
								temp = hl->m[4];
								hl->m[4] = newnode;
								hl->m[4]->next = temp;
							}
							else{
								hl->m[4] = newnode;
								hl->m[4]->next = NULL;
							}
							break;
						case 'n':	
							if(hl->n[4] != NULL){
								temp = hl->n[4];
								hl->n[4] = newnode;
								hl->n[4]->next = temp;
							}
							else{
								hl->n[4] = newnode;
								hl->n[4]->next = NULL;
							}
							break;
						case 'o':	
							if(hl->o[4] != NULL){
								temp = hl->o[4];
								hl->o[4] = newnode;
								hl->o[4]->next = temp;
							}
							else{
								hl->o[4] = newnode;
								hl->o[4]->next = NULL;
							}
							break;
						case 'p':	
							if(hl->p[4] != NULL){
								temp = hl->p[4];
								hl->p[4] = newnode;
								hl->p[4]->next = temp;
							}
							else{
								hl->p[4] = newnode;
								hl->p[4]->next = NULL;
							}
							break;
						case 'q':	
							if(hl->q[4] != NULL){
								temp = hl->q[4];
								hl->q[4] = newnode;
								hl->q[4]->next = temp;
							}
							else{
								hl->q[4] = newnode;
								hl->q[4]->next = NULL;
							}
							break;
						case 'r':	
							if(hl->r[4] != NULL){
								temp = hl->r[4];
								hl->r[4] = newnode;
								hl->r[4]->next = temp;
							}
							else{
								hl->r[4] = newnode;
								hl->r[4]->next = NULL;
							}
							break;
						case 's':	
							if(hl->s[4] != NULL){
								temp = hl->s[4];
								hl->s[4] = newnode;
								hl->s[4]->next = temp;
							}
							else{
								hl->s[4] = newnode;
								hl->s[4]->next = NULL;
							}
							break;
						case 't':	
							if(hl->t[4] != NULL){
								temp = hl->t[4];
								hl->t[4] = newnode;
								hl->t[4]->next = temp;
							}
							else{
								hl->t[4] = newnode;
								hl->t[4]->next = NULL;
							}
							break;
						case 'u':	
							if(hl->u[4] != NULL){
								temp = hl->u[4];
								hl->u[4] = newnode;
								hl->u[4]->next = temp;
							}
							else{
								hl->u[4] = newnode;
								hl->u[4]->next = NULL;
							}
							break;
						case 'v':	
							if(hl->v[4] != NULL){
								temp = hl->v[4];
								hl->v[4] = newnode;
								hl->v[4]->next = temp;
							}
							else{
								hl->v[4] = newnode;
								hl->v[4]->next = NULL;
							}
							break;
						case 'w':	
							if(hl->w[4] != NULL){
								temp = hl->w[4];
								hl->w[4] = newnode;
								hl->w[4]->next = temp;
							}
							else{
								hl->w[4] = newnode;
								hl->w[4]->next = NULL;
							}
							break;
						case 'x':	
							if(hl->x[4] != NULL){
								temp = hl->x[4];
								hl->x[4] = newnode;
								hl->x[4]->next = temp;
							}
							else{
								hl->x[4] = newnode;
								hl->x[4]->next = NULL;
							}
							break;
						case 'y':	
							if(hl->y[4] != NULL){
								temp = hl->y[4];
								hl->y[4] = newnode;
								hl->y[4]->next = temp;
							}
							else{
								hl->y[4] = newnode;
								hl->y[4]->next = NULL;
							}
							break;
						case 'z':	
							if(hl->z[4] != NULL){
								temp = hl->z[4];
								hl->z[4] = newnode;
								hl->z[4]->next = temp;
							}
							else{
								hl->z[4] = newnode;
								hl->z[4]->next = NULL;
							}
							break;
						default:	
							if(hl->rem != NULL){
								temp = hl->rem;
								hl->rem = newnode;
								hl->rem->next = temp;
							}
							else{
								hl->rem = newnode;
								hl->rem->next = NULL;
							}
							break;
					}//end of switch(ch)
					break;
				case 5:	
					switch(ch){
						case 'a':	
							if(hl->a[5] != NULL){
								temp = hl->a[5];
								hl->a[5] = newnode;
								hl->a[5]->next = temp;
							}
							else{
								hl->a[5] = newnode;
								hl->a[5]->next = NULL;
							}
							break;
						case 'b':	
							if(hl->b[5] != NULL){
								temp = hl->b[5];
								hl->b[5] = newnode;
								hl->b[5]->next = temp;
							}
							else{
								hl->b[5] = newnode;
								hl->b[5]->next = NULL;
							}
							break;
						case 'c':	
							if(hl->c[5] != NULL){
								temp = hl->c[5];
								hl->c[5] = newnode;
								hl->c[5]->next = temp;
							}
							else{
								hl->c[5] = newnode;
								hl->c[5]->next = NULL;
							}
							break;
						case 'd':	
							if(hl->d[5] != NULL){
								temp = hl->d[5];
								hl->d[5] = newnode;
								hl->d[5]->next = temp;
							}
							else{
								hl->d[5] = newnode;
								hl->d[5]->next = NULL;
							}
							break;
						case 'e':	
							if(hl->e[5] != NULL){
								temp = hl->e[5];
								hl->e[5] = newnode;
								hl->e[5]->next = temp;
							}
							else{
								hl->e[5] = newnode;
								hl->e[5]->next = NULL;
							}
							break;
						case 'f':	
							if(hl->f[5] != NULL){
								temp = hl->f[5];
								hl->f[5] = newnode;
								hl->f[5]->next = temp;
							}
							else{
								hl->f[5] = newnode;
								hl->f[5]->next = NULL;
							}
							break;
						case 'g':	
							if(hl->g[5] != NULL){
								temp = hl->g[5];
								hl->g[5] = newnode;
								hl->g[5]->next = temp;
							}
							else{
								hl->g[5] = newnode;
								hl->g[5]->next = NULL;
							}
							break;
						case 'h':	
							if(hl->h[5] != NULL){
								temp = hl->h[5];
								hl->h[5] = newnode;
								hl->h[5]->next = temp;
							}
							else{
								hl->h[5] = newnode;
								hl->h[5]->next = NULL;
							}
							break;
						case 'i':	
							if(hl->i[5] != NULL){
								temp = hl->i[5];
								hl->i[5] = newnode;
								hl->i[5]->next = temp;
							}
							else{
								hl->i[5] = newnode;
								hl->i[5]->next = NULL;
							}
							break;
						case 'j':	
							if(hl->j[5] != NULL){
								temp = hl->j[5];
								hl->j[5] = newnode;
								hl->j[5]->next = temp;
							}
							else{
								hl->j[5] = newnode;
								hl->j[5]->next = NULL;
							}
							break;
						case 'k':	
							if(hl->k[5] != NULL){
								temp = hl->k[5];
								hl->k[5] = newnode;
								hl->k[5]->next = temp;
							}
							else{
								hl->k[5] = newnode;
								hl->k[5]->next = NULL;
							}
							break;
						case 'l':	
							if(hl->l[5] != NULL){
								temp = hl->l[5];
								hl->l[5] = newnode;
								hl->l[5]->next = temp;
							}
							else{
								hl->l[5] = newnode;
								hl->l[5]->next = NULL;
							}
							break;
						case 'm':	
							if(hl->m[5] != NULL){
								temp = hl->m[5];
								hl->m[5] = newnode;
								hl->m[5]->next = temp;
							}
							else{
								hl->m[5] = newnode;
								hl->m[5]->next = NULL;
							}
							break;
						case 'n':	
							if(hl->n[5] != NULL){
								temp = hl->n[5];
								hl->n[5] = newnode;
								hl->n[5]->next = temp;
							}
							else{
								hl->n[5] = newnode;
								hl->n[5]->next = NULL;
							}
							break;
						case 'o':	
							if(hl->o[5] != NULL){
								temp = hl->o[5];
								hl->o[5] = newnode;
								hl->o[5]->next = temp;
							}
							else{
								hl->o[5] = newnode;
								hl->o[5]->next = NULL;
							}
							break;
						case 'p':	
							if(hl->p[5] != NULL){
								temp = hl->p[5];
								hl->p[5] = newnode;
								hl->p[5]->next = temp;
							}
							else{
								hl->p[5] = newnode;
								hl->p[5]->next = NULL;
							}
							break;
						case 'q':	
							if(hl->q[5] != NULL){
								temp = hl->q[5];
								hl->q[5] = newnode;
								hl->q[5]->next = temp;
							}
							else{
								hl->q[5] = newnode;
								hl->q[5]->next = NULL;
							}
							break;
						case 'r':	
							if(hl->r[5] != NULL){
								temp = hl->r[5];
								hl->r[5] = newnode;
								hl->r[5]->next = temp;
							}
							else{
								hl->r[5] = newnode;
								hl->r[5]->next = NULL;
							}
							break;
						case 's':	
							if(hl->s[5] != NULL){
								temp = hl->s[5];
								hl->s[5] = newnode;
								hl->s[5]->next = temp;
							}
							else{
								hl->s[5] = newnode;
								hl->s[5]->next = NULL;
							}
							break;
						case 't':	
							if(hl->t[5] != NULL){
								temp = hl->t[5];
								hl->t[5] = newnode;
								hl->t[5]->next = temp;
							}
							else{
								hl->t[5] = newnode;
								hl->t[5]->next = NULL;
							}
							break;
						case 'u':	
							if(hl->u[5] != NULL){
								temp = hl->u[5];
								hl->u[5] = newnode;
								hl->u[5]->next = temp;
							}
							else{
								hl->u[5] = newnode;
								hl->u[5]->next = NULL;
							}
							break;
						case 'v':	
							if(hl->v[5] != NULL){
								temp = hl->v[5];
								hl->v[5] = newnode;
								hl->v[5]->next = temp;
							}
							else{
								hl->v[5] = newnode;
								hl->v[5]->next = NULL;
							}
							break;
						case 'w':	
							if(hl->w[5] != NULL){
								temp = hl->w[5];
								hl->w[5] = newnode;
								hl->w[5]->next = temp;
							}
							else{
								hl->w[5] = newnode;
								hl->w[5]->next = NULL;
							}
							break;
						case 'x':	
							if(hl->x[5] != NULL){
								temp = hl->x[5];
								hl->x[5] = newnode;
								hl->x[5]->next = temp;
							}
							else{
								hl->x[5] = newnode;
								hl->x[5]->next = NULL;
							}
							break;
						case 'y':	
							if(hl->y[5] != NULL){
								temp = hl->y[5];
								hl->y[5] = newnode;
								hl->y[5]->next = temp;
							}
							else{
								hl->y[5] = newnode;
								hl->y[5]->next = NULL;
							}
							break;
						case 'z':	
							if(hl->z[5] != NULL){
								temp = hl->z[5];
								hl->z[5] = newnode;
								hl->z[5]->next = temp;
							}
							else{
								hl->z[5] = newnode;
								hl->z[5]->next = NULL;
							}
							break;
						default:	
							if(hl->rem != NULL){
								temp = hl->rem;
								hl->rem = newnode;
								hl->rem->next = temp;
							}
							else{
								hl->rem = newnode;
								hl->rem->next = NULL;
							}
							break;
					}//end of switch(ch)
					break;
				case 6:	
					switch(ch){
						case 'a':	
							if(hl->a[6] != NULL){
								temp = hl->a[6];
								hl->a[6] = newnode;
								hl->a[6]->next = temp;
							}
							else{
								hl->a[6] = newnode;
								hl->a[6]->next = NULL;
							}
							break;
						case 'b':	
							if(hl->b[6] != NULL){
								temp = hl->b[6];
								hl->b[6] = newnode;
								hl->b[6]->next = temp;
							}
							else{
								hl->b[6] = newnode;
								hl->b[6]->next = NULL;
							}
							break;
						case 'c':	
							if(hl->c[6] != NULL){
								temp = hl->c[6];
								hl->c[6] = newnode;
								hl->c[6]->next = temp;
							}
							else{
								hl->c[6] = newnode;
								hl->c[6]->next = NULL;
							}
							break;
						case 'd':	
							if(hl->d[6] != NULL){
								temp = hl->d[6];
								hl->d[6] = newnode;
								hl->d[6]->next = temp;
							}
							else{
								hl->d[6] = newnode;
								hl->d[6]->next = NULL;
							}
							break;
						case 'e':	
							if(hl->e[6] != NULL){
								temp = hl->e[6];
								hl->e[6] = newnode;
								hl->e[6]->next = temp;
							}
							else{
								hl->e[6] = newnode;
								hl->e[6]->next = NULL;
							}
							break;
						case 'f':	
							if(hl->f[6] != NULL){
								temp = hl->f[6];
								hl->f[6] = newnode;
								hl->f[6]->next = temp;
							}
							else{
								hl->f[6] = newnode;
								hl->f[6]->next = NULL;
							}
							break;
						case 'g':	
							if(hl->g[6] != NULL){
								temp = hl->g[6];
								hl->g[6] = newnode;
								hl->g[6]->next = temp;
							}
							else{
								hl->g[6] = newnode;
								hl->g[6]->next = NULL;
							}
							break;
						case 'h':	
							if(hl->h[6] != NULL){
								temp = hl->h[6];
								hl->h[6] = newnode;
								hl->h[6]->next = temp;
							}
							else{
								hl->h[6] = newnode;
								hl->h[6]->next = NULL;
							}
							break;
						case 'i':	
							if(hl->i[6] != NULL){
								temp = hl->i[6];
								hl->i[6] = newnode;
								hl->i[6]->next = temp;
							}
							else{
								hl->i[6] = newnode;
								hl->i[6]->next = NULL;
							}
							break;
						case 'j':	
							if(hl->j[6] != NULL){
								temp = hl->j[6];
								hl->j[6] = newnode;
								hl->j[6]->next = temp;
							}
							else{
								hl->j[6] = newnode;
								hl->j[6]->next = NULL;
							}
							break;
						case 'k':	
							if(hl->k[6] != NULL){
								temp = hl->k[6];
								hl->k[6] = newnode;
								hl->k[6]->next = temp;
							}
							else{
								hl->k[6] = newnode;
								hl->k[6]->next = NULL;
							}
							break;
						case 'l':	
							if(hl->l[6] != NULL){
								temp = hl->l[6];
								hl->l[6] = newnode;
								hl->l[6]->next = temp;
							}
							else{
								hl->l[6] = newnode;
								hl->l[6]->next = NULL;
							}
							break;
						case 'm':	
							if(hl->m[6] != NULL){
								temp = hl->m[6];
								hl->m[6] = newnode;
								hl->m[6]->next = temp;
							}
							else{
								hl->m[6] = newnode;
								hl->m[6]->next = NULL;
							}
							break;
						case 'n':	
							if(hl->n[6] != NULL){
								temp = hl->n[6];
								hl->n[6] = newnode;
								hl->n[6]->next = temp;
							}
							else{
								hl->n[6] = newnode;
								hl->n[6]->next = NULL;
							}
							break;
						case 'o':	
							if(hl->o[6] != NULL){
								temp = hl->o[6];
								hl->o[6] = newnode;
								hl->o[6]->next = temp;
							}
							else{
								hl->o[6] = newnode;
								hl->o[6]->next = NULL;
							}
							break;
						case 'p':	
							if(hl->p[6] != NULL){
								temp = hl->p[6];
								hl->p[6] = newnode;
								hl->p[6]->next = temp;
							}
							else{
								hl->p[6] = newnode;
								hl->p[6]->next = NULL;
							}
							break;
						case 'q':	
							if(hl->q[6] != NULL){
								temp = hl->q[6];
								hl->q[6] = newnode;
								hl->q[6]->next = temp;
							}
							else{
								hl->q[6] = newnode;
								hl->q[6]->next = NULL;
							}
							break;
						case 'r':	
							if(hl->r[6] != NULL){
								temp = hl->r[6];
								hl->r[6] = newnode;
								hl->r[6]->next = temp;
							}
							else{
								hl->r[6] = newnode;
								hl->r[6]->next = NULL;
							}
							break;
						case 's':	
							if(hl->s[6] != NULL){
								temp = hl->s[6];
								hl->s[6] = newnode;
								hl->s[6]->next = temp;
							}
							else{
								hl->s[6] = newnode;
								hl->s[6]->next = NULL;
							}
							break;
						case 't':	
							if(hl->t[6] != NULL){
								temp = hl->t[6];
								hl->t[6] = newnode;
								hl->t[6]->next = temp;
							}
							else{
								hl->t[6] = newnode;
								hl->t[6]->next = NULL;
							}
							break;
						case 'u':	
							if(hl->u[6] != NULL){
								temp = hl->u[6];
								hl->u[6] = newnode;
								hl->u[6]->next = temp;
							}
							else{
								hl->u[6] = newnode;
								hl->u[6]->next = NULL;
							}
							break;
						case 'v':	
							if(hl->v[6] != NULL){
								temp = hl->v[6];
								hl->v[6] = newnode;
								hl->v[6]->next = temp;
							}
							else{
								hl->v[6] = newnode;
								hl->v[6]->next = NULL;
							}
							break;
						case 'w':	
							if(hl->w[6] != NULL){
								temp = hl->w[6];
								hl->w[6] = newnode;
								hl->w[6]->next = temp;
							}
							else{
								hl->w[6] = newnode;
								hl->w[6]->next = NULL;
							}
							break;
						case 'x':	
							if(hl->x[6] != NULL){
								temp = hl->x[6];
								hl->x[6] = newnode;
								hl->x[6]->next = temp;
							}
							else{
								hl->x[6] = newnode;
								hl->x[6]->next = NULL;
							}
							break;
						case 'y':	
							if(hl->y[6] != NULL){
								temp = hl->y[6];
								hl->y[6] = newnode;
								hl->y[6]->next = temp;
							}
							else{
								hl->y[6] = newnode;
								hl->y[6]->next = NULL;
							}
							break;
						case 'z':	
							if(hl->z[6] != NULL){
								temp = hl->z[6];
								hl->z[6] = newnode;
								hl->z[6]->next = temp;
							}
							else{
								hl->z[6] = newnode;
								hl->z[6]->next = NULL;
							}
							break;
						default:	
							if(hl->rem != NULL){
								temp = hl->rem;
								hl->rem = newnode;
								hl->rem->next = temp;
							}
							else{
								hl->rem = newnode;
								hl->rem->next = NULL;
							}
							break;
					}//end of switch(ch)
					break;
				case 7:
					switch(ch){
						case 'a':	
							if(hl->a[7] != NULL){
								temp = hl->a[7];
								hl->a[7] = newnode;
								hl->a[7]->next = temp;
							}
							else{
								hl->a[7] = newnode;
								hl->a[7]->next = NULL;
							}
							break;
						case 'b':	
							if(hl->b[7] != NULL){
								temp = hl->b[7];
								hl->b[7] = newnode;
								hl->b[7]->next = temp;
							}
							else{
								hl->b[7] = newnode;
								hl->b[7]->next = NULL;
							}
							break;
						case 'c':	
							if(hl->c[7] != NULL){
								temp = hl->c[7];
								hl->c[7] = newnode;
								hl->c[7]->next = temp;
							}
							else{
								hl->c[7] = newnode;
								hl->c[7]->next = NULL;
							}
							break;
						case 'd':	
							if(hl->d[7] != NULL){
								temp = hl->d[7];
								hl->d[7] = newnode;
								hl->d[7]->next = temp;
							}
							else{
								hl->d[7] = newnode;
								hl->d[7]->next = NULL;
							}
							break;
						case 'e':	
							if(hl->e[7] != NULL){
								temp = hl->e[7];
								hl->e[7] = newnode;
								hl->e[7]->next = temp;
							}
							else{
								hl->e[7] = newnode;
								hl->e[7]->next = NULL;
							}
							break;
						case 'f':	
							if(hl->f[7] != NULL){
								temp = hl->f[7];
								hl->f[7] = newnode;
								hl->f[7]->next = temp;
							}
							else{
								hl->f[7] = newnode;
								hl->f[7]->next = NULL;
							}
							break;
						case 'g':	
							if(hl->g[7] != NULL){
								temp = hl->g[7];
								hl->g[7] = newnode;
								hl->g[7]->next = temp;
							}
							else{
								hl->g[7] = newnode;
								hl->g[7]->next = NULL;
							}
							break;
						case 'h':	
							if(hl->h[7] != NULL){
								temp = hl->h[7];
								hl->h[7] = newnode;
								hl->h[7]->next = temp;
							}
							else{
								hl->h[7] = newnode;
								hl->h[7]->next = NULL;
							}
							break;
						case 'i':	
							if(hl->i[7] != NULL){
								temp = hl->i[7];
								hl->i[7] = newnode;
								hl->i[7]->next = temp;
							}
							else{
								hl->i[7] = newnode;
								hl->i[7]->next = NULL;
							}
							break;
						case 'j':	
							if(hl->j[7] != NULL){
								temp = hl->j[7];
								hl->j[7] = newnode;
								hl->j[7]->next = temp;
							}
							else{
								hl->j[7] = newnode;
								hl->j[7]->next = NULL;
							}
							break;
						case 'k':	
							if(hl->k[7] != NULL){
								temp = hl->k[7];
								hl->k[7] = newnode;
								hl->k[7]->next = temp;
							}
							else{
								hl->k[7] = newnode;
								hl->k[7]->next = NULL;
							}
							break;
						case 'l':	
							if(hl->l[7] != NULL){
								temp = hl->l[7];
								hl->l[7] = newnode;
								hl->l[7]->next = temp;
							}
							else{
								hl->l[7] = newnode;
								hl->l[7]->next = NULL;
							}
							break;
						case 'm':	
							if(hl->m[7] != NULL){
								temp = hl->m[7];
								hl->m[7] = newnode;
								hl->m[7]->next = temp;
							}
							else{
								hl->m[7] = newnode;
								hl->m[7]->next = NULL;
							}
							break;
						case 'n':	
							if(hl->n[7] != NULL){
								temp = hl->n[7];
								hl->n[7] = newnode;
								hl->n[7]->next = temp;
							}
							else{
								hl->n[7] = newnode;
								hl->n[7]->next = NULL;
							}
							break;
						case 'o':	
							if(hl->o[7] != NULL){
								temp = hl->o[7];
								hl->o[7] = newnode;
								hl->o[7]->next = temp;
							}
							else{
								hl->o[7] = newnode;
								hl->o[7]->next = NULL;
							}
							break;
						case 'p':	
							if(hl->p[7] != NULL){
								temp = hl->p[7];
								hl->p[7] = newnode;
								hl->p[7]->next = temp;
							}
							else{
								hl->p[7] = newnode;
								hl->p[7]->next = NULL;
							}
							break;
						case 'q':	
							if(hl->q[7] != NULL){
								temp = hl->q[7];
								hl->q[7] = newnode;
								hl->q[7]->next = temp;
							}
							else{
								hl->q[7] = newnode;
								hl->q[7]->next = NULL;
							}
							break;
						case 'r':	
							if(hl->r[7] != NULL){
								temp = hl->r[7];
								hl->r[7] = newnode;
								hl->r[7]->next = temp;
							}
							else{
								hl->r[7] = newnode;
								hl->r[7]->next = NULL;
							}
							break;
						case 's':	
							if(hl->s[7] != NULL){
								temp = hl->s[7];
								hl->s[7] = newnode;
								hl->s[7]->next = temp;
							}
							else{
								hl->s[7] = newnode;
								hl->s[7]->next = NULL;
							}
							break;
						case 't':	
							if(hl->t[7] != NULL){
								temp = hl->t[7];
								hl->t[7] = newnode;
								hl->t[7]->next = temp;
							}
							else{
								hl->t[7] = newnode;
								hl->t[7]->next = NULL;
							}
							break;
						case 'u':	
							if(hl->u[7] != NULL){
								temp = hl->u[7];
								hl->u[7] = newnode;
								hl->u[7]->next = temp;
							}
							else{
								hl->u[7] = newnode;
								hl->u[7]->next = NULL;
							}
							break;
						case 'v':	
							if(hl->v[7] != NULL){
								temp = hl->v[7];
								hl->v[7] = newnode;
								hl->v[7]->next = temp;
							}
							else{
								hl->v[7] = newnode;
								hl->v[7]->next = NULL;
							}
							break;
						case 'w':	
							if(hl->w[7] != NULL){
								temp = hl->w[7];
								hl->w[7] = newnode;
								hl->w[7]->next = temp;
							}
							else{
								hl->w[7] = newnode;
								hl->w[7]->next = NULL;
							}
							break;
						case 'x':	
							if(hl->x[7] != NULL){
								temp = hl->x[7];
								hl->x[7] = newnode;
								hl->x[7]->next = temp;
							}
							else{
								hl->x[7] = newnode;
								hl->x[7]->next = NULL;
							}
							break;
						case 'y':	
							if(hl->y[7] != NULL){
								temp = hl->y[7];
								hl->y[7] = newnode;
								hl->y[7]->next = temp;
							}
							else{
								hl->y[7] = newnode;
								hl->y[7]->next = NULL;
							}
							break;
						case 'z':	
							if(hl->z[7] != NULL){
								temp = hl->z[7];
								hl->z[7] = newnode;
								hl->z[7]->next = temp;
							}
							else{
								hl->z[7] = newnode;
								hl->z[7]->next = NULL;
							}
							break;
						default:	
							if(hl->rem != NULL){
								temp = hl->rem;
								hl->rem = newnode;
								hl->rem->next = temp;
							}
							else{
								hl->rem = newnode;
								hl->rem->next = NULL;
							}
							break;
					}//end of switch(ch)
					break;

					switch(ch){
						case 'a':	
							if(hl->a[7] != NULL){
								temp = hl->a[7];
								hl->a[7] = newnode;
								hl->a[7]->next = temp;
							}
							else{
								hl->a[7] = newnode;
								hl->a[7]->next = NULL;
							}
							break;
						case 'b':	
							if(hl->b[7] != NULL){
								temp = hl->b[7];
								hl->b[7] = newnode;
								hl->b[7]->next = temp;
							}
							else{
								hl->b[7] = newnode;
								hl->b[7]->next = NULL;
							}
							break;
						case 'c':	
							if(hl->c[7] != NULL){
								temp = hl->c[7];
								hl->c[7] = newnode;
								hl->c[7]->next = temp;
							}
							else{
								hl->c[7] = newnode;
								hl->c[7]->next = NULL;
							}
							break;
						case 'd':	
							if(hl->d[7] != NULL){
								temp = hl->d[7];
								hl->d[7] = newnode;
								hl->d[7]->next = temp;
							}
							else{
								hl->d[7] = newnode;
								hl->d[7]->next = NULL;
							}
							break;
						case 'e':	
							if(hl->e[7] != NULL){
								temp = hl->e[7];
								hl->e[7] = newnode;
								hl->e[7]->next = temp;
							}
							else{
								hl->e[7] = newnode;
								hl->e[7]->next = NULL;
							}
							break;
						case 'f':	
							if(hl->f[7] != NULL){
								temp = hl->f[7];
								hl->f[7] = newnode;
								hl->f[7]->next = temp;
							}
							else{
								hl->f[7] = newnode;
								hl->f[7]->next = NULL;
							}
							break;
						case 'g':	
							if(hl->g[7] != NULL){
								temp = hl->g[7];
								hl->g[7] = newnode;
								hl->g[7]->next = temp;
							}
							else{
								hl->g[7] = newnode;
								hl->g[7]->next = NULL;
							}
							break;
						case 'h':	
							if(hl->h[7] != NULL){
								temp = hl->h[7];
								hl->h[7] = newnode;
								hl->h[7]->next = temp;
							}
							else{
								hl->h[7] = newnode;
								hl->h[7]->next = NULL;
							}
							break;
						case 'i':	
							if(hl->i[7] != NULL){
								temp = hl->i[7];
								hl->i[7] = newnode;
								hl->i[7]->next = temp;
							}
							else{
								hl->i[7] = newnode;
								hl->i[7]->next = NULL;
							}
							break;
						case 'j':	
							if(hl->j[7] != NULL){
								temp = hl->j[7];
								hl->j[7] = newnode;
								hl->j[7]->next = temp;
							}
							else{
								hl->j[7] = newnode;
								hl->j[7]->next = NULL;
							}
							break;
						case 'k':	
							if(hl->k[7] != NULL){
								temp = hl->k[7];
								hl->k[7] = newnode;
								hl->k[7]->next = temp;
							}
							else{
								hl->k[7] = newnode;
								hl->k[7]->next = NULL;
							}
							break;
						case 'l':	
							if(hl->l[7] != NULL){
								temp = hl->l[7];
								hl->l[7] = newnode;
								hl->l[7]->next = temp;
							}
							else{
								hl->l[7] = newnode;
								hl->l[7]->next = NULL;
							}
							break;
						case 'm':	
							if(hl->m[7] != NULL){
								temp = hl->m[7];
								hl->m[7] = newnode;
								hl->m[7]->next = temp;
							}
							else{
								hl->m[7] = newnode;
								hl->m[7]->next = NULL;
							}
							break;
						case 'n':	
							if(hl->n[7] != NULL){
								temp = hl->n[7];
								hl->n[7] = newnode;
								hl->n[7]->next = temp;
							}
							else{
								hl->n[7] = newnode;
								hl->n[7]->next = NULL;
							}
							break;
						case 'o':	
							if(hl->o[7] != NULL){
								temp = hl->o[7];
								hl->o[7] = newnode;
								hl->o[7]->next = temp;
							}
							else{
								hl->o[7] = newnode;
								hl->o[7]->next = NULL;
							}
							break;
						case 'p':	
							if(hl->p[7] != NULL){
								temp = hl->p[7];
								hl->p[7] = newnode;
								hl->p[7]->next = temp;
							}
							else{
								hl->p[7] = newnode;
								hl->p[7]->next = NULL;
							}
							break;
						case 'q':	
							if(hl->q[7] != NULL){
								temp = hl->q[7];
								hl->q[7] = newnode;
								hl->q[7]->next = temp;
							}
							else{
								hl->q[7] = newnode;
								hl->q[7]->next = NULL;
							}
							break;
						case 'r':	
							if(hl->r[7] != NULL){
								temp = hl->r[7];
								hl->r[7] = newnode;
								hl->r[7]->next = temp;
							}
							else{
								hl->r[7] = newnode;
								hl->r[7]->next = NULL;
							}
							break;
						case 's':	
							if(hl->s[7] != NULL){
								temp = hl->s[7];
								hl->s[7] = newnode;
								hl->s[7]->next = temp;
							}
							else{
								hl->s[7] = newnode;
								hl->s[7]->next = NULL;
							}
							break;
						case 't':	
							if(hl->t[7] != NULL){
								temp = hl->t[7];
								hl->t[7] = newnode;
								hl->t[7]->next = temp;
							}
							else{
								hl->t[7] = newnode;
								hl->t[7]->next = NULL;
							}
							break;
						case 'u':	
							if(hl->u[7] != NULL){
								temp = hl->u[7];
								hl->u[7] = newnode;
								hl->u[7]->next = temp;
							}
							else{
								hl->u[7] = newnode;
								hl->u[7]->next = NULL;
							}
							break;
						case 'v':	
							if(hl->v[7] != NULL){
								temp = hl->v[7];
								hl->v[7] = newnode;
								hl->v[7]->next = temp;
							}
							else{
								hl->v[7] = newnode;
								hl->v[7]->next = NULL;
							}
							break;
						case 'w':	
							if(hl->w[7] != NULL){
								temp = hl->w[7];
								hl->w[7] = newnode;
								hl->w[7]->next = temp;
							}
							else{
								hl->w[7] = newnode;
								hl->w[7]->next = NULL;
							}
							break;
						case 'x':	
							if(hl->x[7] != NULL){
								temp = hl->x[7];
								hl->x[7] = newnode;
								hl->x[7]->next = temp;
							}
							else{
								hl->x[7] = newnode;
								hl->x[7]->next = NULL;
							}
							break;
						case 'y':	
							if(hl->y[7] != NULL){
								temp = hl->y[7];
								hl->y[7] = newnode;
								hl->y[7]->next = temp;
							}
							else{
								hl->y[7] = newnode;
								hl->y[7]->next = NULL;
							}
							break;
						case 'z':	
							if(hl->z[7] != NULL){
								temp = hl->z[7];
								hl->z[7] = newnode;
								hl->z[7]->next = temp;
							}
							else{
								hl->z[7] = newnode;
								hl->z[7]->next = NULL;
							}
							break;
						default:	
							if(hl->rem != NULL){
								temp = hl->rem;
								hl->rem = newnode;
								hl->rem->next = temp;
							}
							else{
								hl->rem = newnode;
								hl->rem->next = NULL;
							}
							break;
					}//end of switch(ch)
					break;
				case 8:	
					switch(ch){
						case 'a':	
							if(hl->a[8] != NULL){
								temp = hl->a[8];
								hl->a[8] = newnode;
								hl->a[8]->next = temp;
							}
							else{
								hl->a[8] = newnode;
								hl->a[8]->next = NULL;
							}
							break;
						case 'b':	
							if(hl->b[8] != NULL){
								temp = hl->b[8];
								hl->b[8] = newnode;
								hl->b[8]->next = temp;
							}
							else{
								hl->b[8] = newnode;
								hl->b[8]->next = NULL;
							}
							break;
						case 'c':	
							if(hl->c[8] != NULL){
								temp = hl->c[8];
								hl->c[8] = newnode;
								hl->c[8]->next = temp;
							}
							else{
								hl->c[8] = newnode;
								hl->c[8]->next = NULL;
							}
							break;
						case 'd':	
							if(hl->d[8] != NULL){
								temp = hl->d[8];
								hl->d[8] = newnode;
								hl->d[8]->next = temp;
							}
							else{
								hl->d[8] = newnode;
								hl->d[8]->next = NULL;
							}
							break;
						case 'e':	
							if(hl->e[8] != NULL){
								temp = hl->e[8];
								hl->e[8] = newnode;
								hl->e[8]->next = temp;
							}
							else{
								hl->e[8] = newnode;
								hl->e[8]->next = NULL;
							}
							break;
						case 'f':	
							if(hl->f[8] != NULL){
								temp = hl->f[8];
								hl->f[8] = newnode;
								hl->f[8]->next = temp;
							}
							else{
								hl->f[8] = newnode;
								hl->f[8]->next = NULL;
							}
							break;
						case 'g':	
							if(hl->g[8] != NULL){
								temp = hl->g[8];
								hl->g[8] = newnode;
								hl->g[8]->next = temp;
							}
							else{
								hl->g[8] = newnode;
								hl->g[8]->next = NULL;
							}
							break;
						case 'h':	
							if(hl->h[8] != NULL){
								temp = hl->h[8];
								hl->h[8] = newnode;
								hl->h[8]->next = temp;
							}
							else{
								hl->h[8] = newnode;
								hl->h[8]->next = NULL;
							}
							break;
						case 'i':	
							if(hl->i[8] != NULL){
								temp = hl->i[8];
								hl->i[8] = newnode;
								hl->i[8]->next = temp;
							}
							else{
								hl->i[8] = newnode;
								hl->i[8]->next = NULL;
							}
							break;
						case 'j':	
							if(hl->j[8] != NULL){
								temp = hl->j[8];
								hl->j[8] = newnode;
								hl->j[8]->next = temp;
							}
							else{
								hl->j[8] = newnode;
								hl->j[8]->next = NULL;
							}
							break;
						case 'k':	
							if(hl->k[8] != NULL){
								temp = hl->k[8];
								hl->k[8] = newnode;
								hl->k[8]->next = temp;
							}
							else{
								hl->k[8] = newnode;
								hl->k[8]->next = NULL;
							}
							break;
						case 'l':	
							if(hl->l[8] != NULL){
								temp = hl->l[8];
								hl->l[8] = newnode;
								hl->l[8]->next = temp;
							}
							else{
								hl->l[8] = newnode;
								hl->l[8]->next = NULL;
							}
							break;
						case 'm':	
							if(hl->m[8] != NULL){
								temp = hl->m[8];
								hl->m[8] = newnode;
								hl->m[8]->next = temp;
							}
							else{
								hl->m[8] = newnode;
								hl->m[8]->next = NULL;
							}
							break;
						case 'n':	
							if(hl->n[8] != NULL){
								temp = hl->n[8];
								hl->n[8] = newnode;
								hl->n[8]->next = temp;
							}
							else{
								hl->n[8] = newnode;
								hl->n[8]->next = NULL;
							}
							break;
						case 'o':	
							if(hl->o[8] != NULL){
								temp = hl->o[8];
								hl->o[8] = newnode;
								hl->o[8]->next = temp;
							}
							else{
								hl->o[8] = newnode;
								hl->o[8]->next = NULL;
							}
							break;
						case 'p':	
							if(hl->p[8] != NULL){
								temp = hl->p[8];
								hl->p[8] = newnode;
								hl->p[8]->next = temp;
							}
							else{
								hl->p[8] = newnode;
								hl->p[8]->next = NULL;
							}
							break;
						case 'q':	
							if(hl->q[8] != NULL){
								temp = hl->q[8];
								hl->q[8] = newnode;
								hl->q[8]->next = temp;
							}
							else{
								hl->q[8] = newnode;
								hl->q[8]->next = NULL;
							}
							break;
						case 'r':	
							if(hl->r[8] != NULL){
								temp = hl->r[8];
								hl->r[8] = newnode;
								hl->r[8]->next = temp;
							}
							else{
								hl->r[8] = newnode;
								hl->r[8]->next = NULL;
							}
							break;
						case 's':	
							if(hl->s[8] != NULL){
								temp = hl->s[8];
								hl->s[8] = newnode;
								hl->s[8]->next = temp;
							}
							else{
								hl->s[8] = newnode;
								hl->s[8]->next = NULL;
							}
							break;
						case 't':	
							if(hl->t[8] != NULL){
								temp = hl->t[8];
								hl->t[8] = newnode;
								hl->t[8]->next = temp;
							}
							else{
								hl->t[8] = newnode;
								hl->t[8]->next = NULL;
							}
							break;
						case 'u':	
							if(hl->u[8] != NULL){
								temp = hl->u[8];
								hl->u[8] = newnode;
								hl->u[8]->next = temp;
							}
							else{
								hl->u[8] = newnode;
								hl->u[8]->next = NULL;
							}
							break;
						case 'v':	
							if(hl->v[8] != NULL){
								temp = hl->v[8];
								hl->v[8] = newnode;
								hl->v[8]->next = temp;
							}
							else{
								hl->v[8] = newnode;
								hl->v[8]->next = NULL;
							}
							break;
						case 'w':	
							if(hl->w[8] != NULL){
								temp = hl->w[8];
								hl->w[8] = newnode;
								hl->w[8]->next = temp;
							}
							else{
								hl->w[8] = newnode;
								hl->w[8]->next = NULL;
							}
							break;
						case 'x':	
							if(hl->x[8] != NULL){
								temp = hl->x[8];
								hl->x[8] = newnode;
								hl->x[8]->next = temp;
							}
							else{
								hl->x[8] = newnode;
								hl->x[8]->next = NULL;
							}
							break;
						case 'y':	
							if(hl->y[8] != NULL){
								temp = hl->y[8];
								hl->y[8] = newnode;
								hl->y[8]->next = temp;
							}
							else{
								hl->y[8] = newnode;
								hl->y[8]->next = NULL;
							}
							break;
						case 'z':	
							if(hl->z[8] != NULL){
								temp = hl->z[8];
								hl->z[8] = newnode;
								hl->z[8]->next = temp;
							}
							else{
								hl->z[8] = newnode;
								hl->z[8]->next = NULL;
							}
							break;
						default:	
							if(hl->rem != NULL){
								temp = hl->rem;
								hl->rem = newnode;
								hl->rem->next = temp;
							}
							else{
								hl->rem = newnode;
								hl->rem->next = NULL;
							}
							break;
					}//end of switch(ch)
					break;
				case 9:	
					switch(ch){
						case 'a':	
							if(hl->a[9] != NULL){
								temp = hl->a[9];
								hl->a[9] = newnode;
								hl->a[9]->next = temp;
							}
							else{
								hl->a[9] = newnode;
								hl->a[9]->next = NULL;
							}
							break;
						case 'b':	
							if(hl->b[9] != NULL){
								temp = hl->b[9];
								hl->b[9] = newnode;
								hl->b[9]->next = temp;
							}
							else{
								hl->b[9] = newnode;
								hl->b[9]->next = NULL;
							}
							break;
						case 'c':	
							if(hl->c[9] != NULL){
								temp = hl->c[9];
								hl->c[9] = newnode;
								hl->c[9]->next = temp;
							}
							else{
								hl->c[9] = newnode;
								hl->c[9]->next = NULL;
							}
							break;
						case 'd':	
							if(hl->d[9] != NULL){
								temp = hl->d[9];
								hl->d[9] = newnode;
								hl->d[9]->next = temp;
							}
							else{
								hl->d[9] = newnode;
								hl->d[9]->next = NULL;
							}
							break;
						case 'e':	
							if(hl->e[9] != NULL){
								temp = hl->e[9];
								hl->e[9] = newnode;
								hl->e[9]->next = temp;
							}
							else{
								hl->e[9] = newnode;
								hl->e[9]->next = NULL;
							}
							break;
						case 'f':	
							if(hl->f[9] != NULL){
								temp = hl->f[9];
								hl->f[9] = newnode;
								hl->f[9]->next = temp;
							}
							else{
								hl->f[9] = newnode;
								hl->f[9]->next = NULL;
							}
							break;
						case 'g':	
							if(hl->g[9] != NULL){
								temp = hl->g[9];
								hl->g[9] = newnode;
								hl->g[9]->next = temp;
							}
							else{
								hl->g[9] = newnode;
								hl->g[9]->next = NULL;
							}
							break;
						case 'h':	
							if(hl->h[9] != NULL){
								temp = hl->h[9];
								hl->h[9] = newnode;
								hl->h[9]->next = temp;
							}
							else{
								hl->h[9] = newnode;
								hl->h[9]->next = NULL;
							}
							break;
						case 'i':	
							if(hl->i[9] != NULL){
								temp = hl->i[9];
								hl->i[9] = newnode;
								hl->i[9]->next = temp;
							}
							else{
								hl->i[9] = newnode;
								hl->i[9]->next = NULL;
							}
							break;
						case 'j':	
							if(hl->j[9] != NULL){
								temp = hl->j[9];
								hl->j[9] = newnode;
								hl->j[9]->next = temp;
							}
							else{
								hl->j[9] = newnode;
								hl->j[9]->next = NULL;
							}
							break;
						case 'k':	
							if(hl->k[9] != NULL){
								temp = hl->k[9];
								hl->k[9] = newnode;
								hl->k[9]->next = temp;
							}
							else{
								hl->k[9] = newnode;
								hl->k[9]->next = NULL;
							}
							break;
						case 'l':	
							if(hl->l[9] != NULL){
								temp = hl->l[9];
								hl->l[9] = newnode;
								hl->l[9]->next = temp;
							}
							else{
								hl->l[9] = newnode;
								hl->l[9]->next = NULL;
							}
							break;
						case 'm':	
							if(hl->m[9] != NULL){
								temp = hl->m[9];
								hl->m[9] = newnode;
								hl->m[9]->next = temp;
							}
							else{
								hl->m[9] = newnode;
								hl->m[9]->next = NULL;
							}
							break;
						case 'n':	
							if(hl->n[9] != NULL){
								temp = hl->n[9];
								hl->n[9] = newnode;
								hl->n[9]->next = temp;
							}
							else{
								hl->n[9] = newnode;
								hl->n[9]->next = NULL;
							}
							break;
						case 'o':	
							if(hl->o[9] != NULL){
								temp = hl->o[9];
								hl->o[9] = newnode;
								hl->o[9]->next = temp;
							}
							else{
								hl->o[9] = newnode;
								hl->o[9]->next = NULL;
							}
							break;
						case 'p':	
							if(hl->p[9] != NULL){
								temp = hl->p[9];
								hl->p[9] = newnode;
								hl->p[9]->next = temp;
							}
							else{
								hl->p[9] = newnode;
								hl->p[9]->next = NULL;
							}
							break;
						case 'q':	
							if(hl->q[9] != NULL){
								temp = hl->q[9];
								hl->q[9] = newnode;
								hl->q[9]->next = temp;
							}
							else{
								hl->q[9] = newnode;
								hl->q[9]->next = NULL;
							}
							break;
						case 'r':	
							if(hl->r[9] != NULL){
								temp = hl->r[9];
								hl->r[9] = newnode;
								hl->r[9]->next = temp;
							}
							else{
								hl->r[9] = newnode;
								hl->r[9]->next = NULL;
							}
							break;
						case 's':	
							if(hl->s[9] != NULL){
								temp = hl->s[9];
								hl->s[9] = newnode;
								hl->s[9]->next = temp;
							}
							else{
								hl->s[9] = newnode;
								hl->s[9]->next = NULL;
							}
							break;
						case 't':	
							if(hl->t[9] != NULL){
								temp = hl->t[9];
								hl->t[9] = newnode;
								hl->t[9]->next = temp;
							}
							else{
								hl->t[9] = newnode;
								hl->t[9]->next = NULL;
							}
							break;
						case 'u':	
							if(hl->u[9] != NULL){
								temp = hl->u[9];
								hl->u[9] = newnode;
								hl->u[9]->next = temp;
							}
							else{
								hl->u[9] = newnode;
								hl->u[9]->next = NULL;
							}
							break;
						case 'v':	
							if(hl->v[9] != NULL){
								temp = hl->v[9];
								hl->v[9] = newnode;
								hl->v[9]->next = temp;
							}
							else{
								hl->v[9] = newnode;
								hl->v[9]->next = NULL;
							}
							break;
						case 'w':	
							if(hl->w[9] != NULL){
								temp = hl->w[9];
								hl->w[9] = newnode;
								hl->w[9]->next = temp;
							}
							else{
								hl->w[9] = newnode;
								hl->w[9]->next = NULL;
							}
							break;
						case 'x':	
							if(hl->x[9] != NULL){
								temp = hl->x[9];
								hl->x[9] = newnode;
								hl->x[9]->next = temp;
							}
							else{
								hl->x[9] = newnode;
								hl->x[9]->next = NULL;
							}
							break;
						case 'y':	
							if(hl->y[9] != NULL){
								temp = hl->y[9];
								hl->y[9] = newnode;
								hl->y[9]->next = temp;
							}
							else{
								hl->y[9] = newnode;
								hl->y[9]->next = NULL;
							}
							break;
						case 'z':	
							if(hl->z[9] != NULL){
								temp = hl->z[9];
								hl->z[9] = newnode;
								hl->z[9]->next = temp;
							}
							else{
								hl->z[9] = newnode;
								hl->z[9]->next = NULL;
							}
							break;
						default:	
							if(hl->rem != NULL){
								temp = hl->rem;
								hl->rem = newnode;
								hl->rem->next = temp;
							}
							else{
								hl->rem = newnode;
								hl->rem->next = NULL;
							}
							break;
					}//end of switch(ch)
					break;
				case 10:	
					switch(ch){
						case 'a':	
							if(hl->a[10] != NULL){
								temp = hl->a[10];
								hl->a[10] = newnode;
								hl->a[10]->next = temp;
							}
							else{
								hl->a[10] = newnode;
								hl->a[10]->next = NULL;
							}
							break;
						case 'b':	
							if(hl->b[10] != NULL){
								temp = hl->b[10];
								hl->b[10] = newnode;
								hl->b[10]->next = temp;
							}
							else{
								hl->b[10] = newnode;
								hl->b[10]->next = NULL;
							}
							break;
						case 'c':	
							if(hl->c[10] != NULL){
								temp = hl->c[10];
								hl->c[10] = newnode;
								hl->c[10]->next = temp;
							}
							else{
								hl->c[10] = newnode;
								hl->c[10]->next = NULL;
							}
							break;
						case 'd':	
							if(hl->d[10] != NULL){
								temp = hl->d[10];
								hl->d[10] = newnode;
								hl->d[10]->next = temp;
							}
							else{
								hl->d[10] = newnode;
								hl->d[10]->next = NULL;
							}
							break;
						case 'e':	
							if(hl->e[10] != NULL){
								temp = hl->e[10];
								hl->e[10] = newnode;
								hl->e[10]->next = temp;
							}
							else{
								hl->e[10] = newnode;
								hl->e[10]->next = NULL;
							}
							break;
						case 'f':	
							if(hl->f[10] != NULL){
								temp = hl->f[10];
								hl->f[10] = newnode;
								hl->f[10]->next = temp;
							}
							else{
								hl->f[10] = newnode;
								hl->f[10]->next = NULL;
							}
							break;
						case 'g':	
							if(hl->g[10] != NULL){
								temp = hl->g[10];
								hl->g[10] = newnode;
								hl->g[10]->next = temp;
							}
							else{
								hl->g[10] = newnode;
								hl->g[10]->next = NULL;
							}
							break;
						case 'h':	
							if(hl->h[10] != NULL){
								temp = hl->h[10];
								hl->h[10] = newnode;
								hl->h[10]->next = temp;
							}
							else{
								hl->h[10] = newnode;
								hl->h[10]->next = NULL;
							}
							break;
						case 'i':	
							if(hl->i[10] != NULL){
								temp = hl->i[10];
								hl->i[10] = newnode;
								hl->i[10]->next = temp;
							}
							else{
								hl->i[10] = newnode;
								hl->i[10]->next = NULL;
							}
							break;
						case 'j':	
							if(hl->j[10] != NULL){
								temp = hl->j[10];
								hl->j[10] = newnode;
								hl->j[10]->next = temp;
							}
							else{
								hl->j[10] = newnode;
								hl->j[10]->next = NULL;
							}
							break;
						case 'k':	
							if(hl->k[10] != NULL){
								temp = hl->k[10];
								hl->k[10] = newnode;
								hl->k[10]->next = temp;
							}
							else{
								hl->k[10] = newnode;
								hl->k[10]->next = NULL;
							}
							break;
						case 'l':	
							if(hl->l[10] != NULL){
								temp = hl->l[10];
								hl->l[10] = newnode;
								hl->l[10]->next = temp;
							}
							else{
								hl->l[10] = newnode;
								hl->l[10]->next = NULL;
							}
							break;
						case 'm':	
							if(hl->m[10] != NULL){
								temp = hl->m[10];
								hl->m[10] = newnode;
								hl->m[10]->next = temp;
							}
							else{
								hl->m[10] = newnode;
								hl->m[10]->next = NULL;
							}
							break;
						case 'n':	
							if(hl->n[10] != NULL){
								temp = hl->n[10];
								hl->n[10] = newnode;
								hl->n[10]->next = temp;
							}
							else{
								hl->n[10] = newnode;
								hl->n[10]->next = NULL;
							}
							break;
						case 'o':	
							if(hl->o[10] != NULL){
								temp = hl->o[10];
								hl->o[10] = newnode;
								hl->o[10]->next = temp;
							}
							else{
								hl->o[10] = newnode;
								hl->o[10]->next = NULL;
							}
							break;
						case 'p':	
							if(hl->p[10] != NULL){
								temp = hl->p[10];
								hl->p[10] = newnode;
								hl->p[10]->next = temp;
							}
							else{
								hl->p[10] = newnode;
								hl->p[10]->next = NULL;
							}
							break;
						case 'q':	
							if(hl->q[10] != NULL){
								temp = hl->q[10];
								hl->q[10] = newnode;
								hl->q[10]->next = temp;
							}
							else{
								hl->q[10] = newnode;
								hl->q[10]->next = NULL;
							}
							break;
						case 'r':	
							if(hl->r[10] != NULL){
								temp = hl->r[10];
								hl->r[10] = newnode;
								hl->r[10]->next = temp;
							}
							else{
								hl->r[10] = newnode;
								hl->r[10]->next = NULL;
							}
							break;
						case 's':	
							if(hl->s[10] != NULL){
								temp = hl->s[10];
								hl->s[10] = newnode;
								hl->s[10]->next = temp;
							}
							else{
								hl->s[10] = newnode;
								hl->s[10]->next = NULL;
							}
							break;
						case 't':	
							if(hl->t[10] != NULL){
								temp = hl->t[10];
								hl->t[10] = newnode;
								hl->t[10]->next = temp;
							}
							else{
								hl->t[10] = newnode;
								hl->t[10]->next = NULL;
							}
							break;
						case 'u':	
							if(hl->u[10] != NULL){
								temp = hl->u[10];
								hl->u[10] = newnode;
								hl->u[10]->next = temp;
							}
							else{
								hl->u[10] = newnode;
								hl->u[10]->next = NULL;
							}
							break;
						case 'v':	
							if(hl->v[10] != NULL){
								temp = hl->v[10];
								hl->v[10] = newnode;
								hl->v[10]->next = temp;
							}
							else{
								hl->v[10] = newnode;
								hl->v[10]->next = NULL;
							}
							break;
						case 'w':	
							if(hl->w[10] != NULL){
								temp = hl->w[10];
								hl->w[10] = newnode;
								hl->w[10]->next = temp;
							}
							else{
								hl->w[10] = newnode;
								hl->w[10]->next = NULL;
							}
							break;
						case 'x':	
							if(hl->x[10] != NULL){
								temp = hl->x[10];
								hl->x[10] = newnode;
								hl->x[10]->next = temp;
							}
							else{
								hl->x[10] = newnode;
								hl->x[10]->next = NULL;
							}
							break;
						case 'y':	
							if(hl->y[10] != NULL){
								temp = hl->y[10];
								hl->y[10] = newnode;
								hl->y[10]->next = temp;
							}
							else{
								hl->y[10] = newnode;
								hl->y[10]->next = NULL;
							}
							break;
						case 'z':	
							if(hl->z[10] != NULL){
								temp = hl->z[10];
								hl->z[10] = newnode;
								hl->z[10]->next = temp;
							}
							else{
								hl->z[10] = newnode;
								hl->z[10]->next = NULL;
							}
						default:	
							if(hl->rem != NULL){
								temp = hl->rem;
								hl->rem = newnode;
								hl->rem->next = temp;
							}
							else{
								hl->rem = newnode;
								hl->rem->next = NULL;
							}
							break;
					}//end of switch(ch)
					break;
				case 11:	
					switch(ch){
						case 'a':	
							if(hl->a[11] != NULL){
								temp = hl->a[11];
								hl->a[11] = newnode;
								hl->a[11]->next = temp;
							}
							else{
								hl->a[11] = newnode;
								hl->a[11]->next = NULL;
							}
							break;
						case 'b':	
							if(hl->b[11] != NULL){
								temp = hl->b[11];
								hl->b[11] = newnode;
								hl->b[11]->next = temp;
							}
							else{
								hl->b[11] = newnode;
								hl->b[11]->next = NULL;
							}
							break;
						case 'c':	
							if(hl->c[11] != NULL){
								temp = hl->c[11];
								hl->c[11] = newnode;
								hl->c[11]->next = temp;
							}
							else{
								hl->c[11] = newnode;
								hl->c[11]->next = NULL;
							}
							break;
						case 'd':	
							if(hl->d[11] != NULL){
								temp = hl->d[11];
								hl->d[11] = newnode;
								hl->d[11]->next = temp;
							}
							else{
								hl->d[11] = newnode;
								hl->d[11]->next = NULL;
							}
							break;
						case 'e':	
							if(hl->e[11] != NULL){
								temp = hl->e[11];
								hl->e[11] = newnode;
								hl->e[11]->next = temp;
							}
							else{
								hl->e[11] = newnode;
								hl->e[11]->next = NULL;
							}
							break;
						case 'f':	
							if(hl->f[11] != NULL){
								temp = hl->f[11];
								hl->f[11] = newnode;
								hl->f[11]->next = temp;
							}
							else{
								hl->f[11] = newnode;
								hl->f[11]->next = NULL;
							}
							break;
						case 'g':	
							if(hl->g[11] != NULL){
								temp = hl->g[11];
								hl->g[11] = newnode;
								hl->g[11]->next = temp;
							}
							else{
								hl->g[11] = newnode;
								hl->g[11]->next = NULL;
							}
							break;
						case 'h':	
							if(hl->h[11] != NULL){
								temp = hl->h[11];
								hl->h[11] = newnode;
								hl->h[11]->next = temp;
							}
							else{
								hl->h[11] = newnode;
								hl->h[11]->next = NULL;
							}
							break;
						case 'i':	
							if(hl->i[11] != NULL){
								temp = hl->i[11];
								hl->i[11] = newnode;
								hl->i[11]->next = temp;
							}
							else{
								hl->i[11] = newnode;
								hl->i[11]->next = NULL;
							}
							break;
						case 'j':	
							if(hl->j[11] != NULL){
								temp = hl->j[11];
								hl->j[11] = newnode;
								hl->j[11]->next = temp;
							}
							else{
								hl->j[11] = newnode;
								hl->j[11]->next = NULL;
							}
							break;
						case 'k':	
							if(hl->k[11] != NULL){
								temp = hl->k[11];
								hl->k[11] = newnode;
								hl->k[11]->next = temp;
							}
							else{
								hl->k[11] = newnode;
								hl->k[11]->next = NULL;
							}
							break;
						case 'l':	
							if(hl->l[11] != NULL){
								temp = hl->l[11];
								hl->l[11] = newnode;
								hl->l[11]->next = temp;
							}
							else{
								hl->l[11] = newnode;
								hl->l[11]->next = NULL;
							}
							break;
						case 'm':	
							if(hl->m[11] != NULL){
								temp = hl->m[11];
								hl->m[11] = newnode;
								hl->m[11]->next = temp;
							}
							else{
								hl->m[11] = newnode;
								hl->m[11]->next = NULL;
							}
							break;
						case 'n':	
							if(hl->n[11] != NULL){
								temp = hl->n[11];
								hl->n[11] = newnode;
								hl->n[11]->next = temp;
							}
							else{
								hl->n[11] = newnode;
								hl->n[11]->next = NULL;
							}
							break;
						case 'o':	
							if(hl->o[11] != NULL){
								temp = hl->o[11];
								hl->o[11] = newnode;
								hl->o[11]->next = temp;
							}
							else{
								hl->o[11] = newnode;
								hl->o[11]->next = NULL;
							}
							break;
						case 'p':	
							if(hl->p[11] != NULL){
								temp = hl->p[11];
								hl->p[11] = newnode;
								hl->p[11]->next = temp;
							}
							else{
								hl->p[11] = newnode;
								hl->p[11]->next = NULL;
							}
							break;
						case 'q':	
							if(hl->q[11] != NULL){
								temp = hl->q[11];
								hl->q[11] = newnode;
								hl->q[11]->next = temp;
							}
							else{
								hl->q[11] = newnode;
								hl->q[11]->next = NULL;
							}
							break;
						case 'r':	
							if(hl->r[11] != NULL){
								temp = hl->r[11];
								hl->r[11] = newnode;
								hl->r[11]->next = temp;
							}
							else{
								hl->r[11] = newnode;
								hl->r[11]->next = NULL;
							}
							break;
						case 's':	
							if(hl->s[11] != NULL){
								temp = hl->s[11];
								hl->s[11] = newnode;
								hl->s[11]->next = temp;
							}
							else{
								hl->s[11] = newnode;
								hl->s[11]->next = NULL;
							}
							break;
						case 't':	
							if(hl->t[11] != NULL){
								temp = hl->t[11];
								hl->t[11] = newnode;
								hl->t[11]->next = temp;
							}
							else{
								hl->t[11] = newnode;
								hl->t[11]->next = NULL;
							}
							break;
						case 'u':	
							if(hl->u[11] != NULL){
								temp = hl->u[11];
								hl->u[11] = newnode;
								hl->u[11]->next = temp;
							}
							else{
								hl->u[11] = newnode;
								hl->u[11]->next = NULL;
							}
							break;
						case 'v':	
							if(hl->v[11] != NULL){
								temp = hl->v[11];
								hl->v[11] = newnode;
								hl->v[11]->next = temp;
							}
							else{
								hl->v[11] = newnode;
								hl->v[11]->next = NULL;
							}
							break;
						case 'w':	
							if(hl->w[11] != NULL){
								temp = hl->w[11];
								hl->w[11] = newnode;
								hl->w[11]->next = temp;
							}
							else{
								hl->w[11] = newnode;
								hl->w[11]->next = NULL;
							}
							break;
						case 'x':	
							if(hl->x[11] != NULL){
								temp = hl->x[11];
								hl->x[11] = newnode;
								hl->x[11]->next = temp;
							}
							else{
								hl->x[11] = newnode;
								hl->x[11]->next = NULL;
							}
							break;
						case 'y':	
							if(hl->y[11] != NULL){
								temp = hl->y[11];
								hl->y[11] = newnode;
								hl->y[11]->next = temp;
							}
							else{
								hl->y[11] = newnode;
								hl->y[11]->next = NULL;
							}
							break;
						case 'z':	
							if(hl->z[11] != NULL){
								temp = hl->z[11];
								hl->z[11] = newnode;
								hl->z[11]->next = temp;
							}
							else{
								hl->z[11] = newnode;
								hl->z[11]->next = NULL;
							}
						default:	
							if(hl->rem != NULL){
								temp = hl->rem;
								hl->rem = newnode;
								hl->rem->next = temp;
							}
							else{
								hl->rem = newnode;
								hl->rem->next = NULL;
							}
							break;
					}//end of switch(ch)
					break;
				case 12:	
					switch(ch){
						case 'a':	
							if(hl->a[12] != NULL){
								temp = hl->a[12];
								hl->a[12] = newnode;
								hl->a[12]->next = temp;
							}
							else{
								hl->a[12] = newnode;
								hl->a[12]->next = NULL;
							}
							break;
						case 'b':	
							if(hl->b[12] != NULL){
								temp = hl->b[12];
								hl->b[12] = newnode;
								hl->b[12]->next = temp;
							}
							else{
								hl->b[12] = newnode;
								hl->b[12]->next = NULL;
							}
							break;
						case 'c':	
							if(hl->c[12] != NULL){
								temp = hl->c[12];
								hl->c[12] = newnode;
								hl->c[12]->next = temp;
							}
							else{
								hl->c[12] = newnode;
								hl->c[12]->next = NULL;
							}
							break;
						case 'd':	
							if(hl->d[12] != NULL){
								temp = hl->d[12];
								hl->d[12] = newnode;
								hl->d[12]->next = temp;
							}
							else{
								hl->d[12] = newnode;
								hl->d[12]->next = NULL;
							}
							break;
						case 'e':	
							if(hl->e[12] != NULL){
								temp = hl->e[12];
								hl->e[12] = newnode;
								hl->e[12]->next = temp;
							}
							else{
								hl->e[12] = newnode;
								hl->e[12]->next = NULL;
							}
							break;
						case 'f':	
							if(hl->f[12] != NULL){
								temp = hl->f[12];
								hl->f[12] = newnode;
								hl->f[12]->next = temp;
							}
							else{
								hl->f[12] = newnode;
								hl->f[12]->next = NULL;
							}
							break;
						case 'g':	
							if(hl->g[12] != NULL){
								temp = hl->g[12];
								hl->g[12] = newnode;
								hl->g[12]->next = temp;
							}
							else{
								hl->g[12] = newnode;
								hl->g[12]->next = NULL;
							}
							break;
						case 'h':	
							if(hl->h[12] != NULL){
								temp = hl->h[12];
								hl->h[12] = newnode;
								hl->h[12]->next = temp;
							}
							else{
								hl->h[12] = newnode;
								hl->h[12]->next = NULL;
							}
							break;
						case 'i':	
							if(hl->i[12] != NULL){
								temp = hl->i[12];
								hl->i[12] = newnode;
								hl->i[12]->next = temp;
							}
							else{
								hl->i[12] = newnode;
								hl->i[12]->next = NULL;
							}
							break;
						case 'j':	
							if(hl->j[12] != NULL){
								temp = hl->j[12];
								hl->j[12] = newnode;
								hl->j[12]->next = temp;
							}
							else{
								hl->j[12] = newnode;
								hl->j[12]->next = NULL;
							}
							break;
						case 'k':	
							if(hl->k[12] != NULL){
								temp = hl->k[12];
								hl->k[12] = newnode;
								hl->k[12]->next = temp;
							}
							else{
								hl->k[12] = newnode;
								hl->k[12]->next = NULL;
							}
							break;
						case 'l':	
							if(hl->l[12] != NULL){
								temp = hl->l[12];
								hl->l[12] = newnode;
								hl->l[12]->next = temp;
							}
							else{
								hl->l[12] = newnode;
								hl->l[12]->next = NULL;
							}
							break;
						case 'm':	
							if(hl->m[12] != NULL){
								temp = hl->m[12];
								hl->m[12] = newnode;
								hl->m[12]->next = temp;
							}
							else{
								hl->m[12] = newnode;
								hl->m[12]->next = NULL;
							}
							break;
						case 'n':	
							if(hl->n[12] != NULL){
								temp = hl->n[12];
								hl->n[12] = newnode;
								hl->n[12]->next = temp;
							}
							else{
								hl->n[12] = newnode;
								hl->n[12]->next = NULL;
							}
							break;
						case 'o':	
							if(hl->o[12] != NULL){
								temp = hl->o[12];
								hl->o[12] = newnode;
								hl->o[12]->next = temp;
							}
							else{
								hl->o[12] = newnode;
								hl->o[12]->next = NULL;
							}
							break;
						case 'p':	
							if(hl->p[12] != NULL){
								temp = hl->p[12];
								hl->p[12] = newnode;
								hl->p[12]->next = temp;
							}
							else{
								hl->p[12] = newnode;
								hl->p[12]->next = NULL;
							}
							break;
						case 'q':	
							if(hl->q[12] != NULL){
								temp = hl->q[12];
								hl->q[12] = newnode;
								hl->q[12]->next = temp;
							}
							else{
								hl->q[12] = newnode;
								hl->q[12]->next = NULL;
							}
							break;
						case 'r':	
							if(hl->r[12] != NULL){
								temp = hl->r[12];
								hl->r[12] = newnode;
								hl->r[12]->next = temp;
							}
							else{
								hl->r[12] = newnode;
								hl->r[12]->next = NULL;
							}
							break;
						case 's':	
							if(hl->s[12] != NULL){
								temp = hl->s[12];
								hl->s[12] = newnode;
								hl->s[12]->next = temp;
							}
							else{
								hl->s[12] = newnode;
								hl->s[12]->next = NULL;
							}
							break;
						case 't':	
							if(hl->t[12] != NULL){
								temp = hl->t[12];
								hl->t[12] = newnode;
								hl->t[12]->next = temp;
							}
							else{
								hl->t[12] = newnode;
								hl->t[12]->next = NULL;
							}
							break;
						case 'u':	
							if(hl->u[12] != NULL){
								temp = hl->u[12];
								hl->u[12] = newnode;
								hl->u[12]->next = temp;
							}
							else{
								hl->u[12] = newnode;
								hl->u[12]->next = NULL;
							}
							break;
						case 'v':	
							if(hl->v[12] != NULL){
								temp = hl->v[12];
								hl->v[12] = newnode;
								hl->v[12]->next = temp;
							}
							else{
								hl->v[12] = newnode;
								hl->v[12]->next = NULL;
							}
							break;
						case 'w':	
							if(hl->w[12] != NULL){
								temp = hl->w[12];
								hl->w[12] = newnode;
								hl->w[12]->next = temp;
							}
							else{
								hl->w[12] = newnode;
								hl->w[12]->next = NULL;
							}
							break;
						case 'x':	
							if(hl->x[12] != NULL){
								temp = hl->x[12];
								hl->x[12] = newnode;
								hl->x[12]->next = temp;
							}
							else{
								hl->x[12] = newnode;
								hl->x[12]->next = NULL;
							}
							break;
						case 'y':	
							if(hl->y[12] != NULL){
								temp = hl->y[12];
								hl->y[12] = newnode;
								hl->y[12]->next = temp;
							}
							else{
								hl->y[12] = newnode;
								hl->y[12]->next = NULL;
							}
							break;
						case 'z':	
							if(hl->z[12] != NULL){
								temp = hl->z[12];
								hl->z[12] = newnode;
								hl->z[12]->next = temp;
							}
							else{
								hl->z[12] = newnode;
								hl->z[12]->next = NULL;
							}
						default:	
							if(hl->rem != NULL){
								temp = hl->rem;
								hl->rem = newnode;
								hl->rem->next = temp;
							}
							else{
								hl->rem = newnode;
								hl->rem->next = NULL;
							}
							break;
					}//end of switch(ch)
					break;
					default:
						if(hl->rem != NULL){
								temp = hl->rem;
								hl->rem = newnode;
								hl->rem->next = temp;
							}
							else{
								hl->rem = newnode;
								hl->rem->next = NULL;
							}
						break;
			}//end of else block
		}//end of switch(len - 1)
		if(read(fd, &ch, 1) == 0)
			break;
	}//end of while loop
	return hl;	
}				
