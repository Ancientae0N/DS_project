double dist(long int n ){//1432
    reverse = 0;
		while (n != 0)
   {
      reverse = reverse * 10;
      reverse = reverse + n%10;
      n       = n/10;
   }
      int i, j = 0 ;
	  while(reverse! = 0){
		i = reverse%10
		double distance = 0;
		distance = distance + graph[j][i];
		j = i;
		reverse = reverse/10;
	}
	distance = distance + graph[j][0];
		
		
	return distance;
	}
