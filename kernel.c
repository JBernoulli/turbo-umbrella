int _main(){
	char* video_memory = (char*) 0xb8370;
	*video_memory = 'X';
	return 0;

}
