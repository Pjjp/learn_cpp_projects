int** p = new int*(new int(42));
delete *p;
delete p; // <--- deletes a pointer
