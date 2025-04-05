stoppwatch::stopwatch():saniye(0),dakika(0),saat(0){}



	void stoppwatch::readtime()
	{
	}
	void stoppwatch::settime(int saat,int dakika,int saniye){
	}
	
	void stoppwatch::operator++(){
		
		saniye++;
		if(saniye==60){
			saniye=0;
			dakika++;
			if(dakika==60){
				dakika=0;
				saat++
			}
		}
	}
	bool stoppwatch::operator--(){
		saniye--;
		if(saniye==-1){
			saniye=59;
			dakika--;
			if(dakika==-1){
				dakika=59;
				saat--;
				if(saat==-1){
					cout<<"vakit doldu";
					return false;
				}
			}
		}
		Sleep(100);
		return true;
	}

