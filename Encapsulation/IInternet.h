#pragma once
#include <string>
#include <iostream>
class Internet
{
public:
	Internet();
	Internet(int Countr, int Provid, int v, int DS, int US);
	~Internet();
	void setCountry(int Country);
	int getCountry();
	void setProvider(int Provider);
	int getProvider();
	void setVPN(int VPN);
	int getVPN();
	void setDownloadSpeed(int DownloadSpeed);
	int getDownloadSpeed();
	void setUploadSpeed(int UploadSpeed);
	int getUploadSpeed();

private:
	int m_country;
	int m_provider;
	int m_vpn;
	int m_dowloadSpeed;
	int m_uploadSpeed;
};