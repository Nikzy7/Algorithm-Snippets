class MergeSort { 
	// Below function merges two subarrays 
	void merge(int arr[], int left, int middle, int right) 
	{ 
		// calculate size of two subarrays to be merged 
      
		int n1 = middle - left + 1; 
		int n2 = right - middle; 

		int Left[] = new int[n1]; 
		int Right[] = new int[n2]; 

		for (int i = 0; i < n1; ++i) 
			Left[i] = arr[left + i]; 
		for (int j = 0; j < n2; ++j) 
			Right[j] = arr[middle + 1 + j]; 

		
		int i = 0, j = 0; 

		int k = left; 
		while (i < n1 && j < n2) { 
			if (Left[i] <= Right[j]) { 
				arr[k] = Left[i]; 
				i++; 
			} 
			else { 
				arr[k] = Right[j]; 
				j++; 
			} 
			k++; 
		} 

		while (i < n1) { 
			arr[k] = Left[i]; 
			i++; 
			k++; 
		} 

		while (j < n2) { 
			arr[k] = Right[j]; 
			j++; 
			k++; 
		} 
	} 
	
	// Below function that sorts inut array using merge() 
	void sort(int arr[], int left, int right) 
	{ 
		if (left < right) {  
			int middle = (left + right) / 2; 
			// sorting first and seconf halves
			sort(arr, left, middle); 
			sort(arr, middle + 1, right); 
			// merging sorted halves
			merge(arr, left, middle, right); 
		} 
	} 

	// Below function prints the array
	static void printArray(int arr[]) 
	{ 
		int l = arr.length; 
		for (int i = 0; i < l; ++i) 
			System.out.print(arr[i] + " "); 
		System.out.println(); 
	} 

	
	public static void main(String args[]) 
	{ 
		int arr[] = {46, 42 , 21, 22, 11, 16}; 

		System.out.println("Unsorted Input Array"); 
		printArray(arr); 

		MergeSort ob = new MergeSort(); 
		ob.sort(arr, 0, arr.length - 1); 

		System.out.println("\nSorted Output array"); 
		printArray(arr); 
	} 
} 
