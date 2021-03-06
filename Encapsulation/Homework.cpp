#include <iostream>
#include "stdafx.h"
#include "Header.h"
using namespace std;

Internet::Internet(int Countr, int Provid, int v, int DS, int US)
{
	m_country = Countr;
	m_provider = Provid;
	m_vpn = v;
	m_dowloadSpeed = DS;
	m_uploadSpeed = US;
}

Internet::~Internet()
{
}

void Internet::setCountry(int Country)
{
	m_country = Country;
}

int Internet::getCountry()
{
	return m_country;
}

void Internet::setProvider(int Provider)
{
	m_provider = Provider;
}

int Internet::getProvider()
{
	return m_provider;
}

void Internet::setVPN(int VPN)
{
	m_vpn = VPN;
}

int Internet::getVPN()
{
	return m_vpn;
}
void Internet::setDownloadSpeed(int DownloadSpeed)
{
	m_dowloadSpeed = DownloadSpeed;
}

int Internet::getDownloadSpeed()
{
	return m_dowloadSpeed;
}
void Internet::setUploadSpeed(int UploadSpeed)
{
	m_uploadSpeed = UploadSpeed;
}

int Internet::getUploadSpeed()
{
	return m_uploadSpeed;
}