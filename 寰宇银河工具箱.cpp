#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
string s;
void cq(){
	system("adb shell reboot -p");
	cout<<"�Ѿ�����\n";
	return ;
}
void BL(){
	system("adb reboot bootloader");
}
void ADB() {
	system("adb wait-for-device");
	system("adb devices");
	return ;
}
void apk() {
	int a;
	cout<<"����ļ��ŵ�C:/ ������Ϊ1.apk \n";
	cout<<"��������� ����1�����»س�";
	cin>>a;
	system("adb wait-for-device");
	system("adb devices");
	system("adb install C:\\1.apk");
	return ;
}
void Shi() {
	system("adb wait-for-device");
	system("adb devices");
	system("adb shell sh /storage/emulated/0/Android/data/moe.shizuku.privileged.api/start.sh");
	cout<<"Shizuku�Ѿ����\n"; 
	return ;
}
void ht() {
	cout<<"�˹���Ϊ��������죡\n"; 
	cout<<"�����ʼ���У�\n";
	system("adb wait-for-device");
	system("adb devices");
	system("adb shell /system/bin/device_config put activity_manager max_phantom_processes 2147483647");
	system("adb shell /system/bin/device_config set_sync_disabled_for_tests persistent");
	system("adb shell /system/bin/dumpsys activity settings | findstr max_phantom_processes");
	cout<<"������ɣ�\n"; 
}
void xh(){
	cout<<"    ��׿: "; 
	system("adb shell getprop ro.build.version.release");
	cout<<"    IP:   ";
	system("adb shell ifconfig wlan0");
	cout<<"\n�豸�ͺ�����---\n"; 
}
void hf(){
	system("adb wait-for-device");
	system("adb devices");
	system("adb -d shell sh /data/data/me.piebridge.brevent/brevent.sh");
	cout<<"�����Ѿ�����\n"; 
}
int main() {
	cout<<"=================================================\n\n";
	cout<<"		 ������ӹ�����\n\n";
	cout<<"================================================\n";
	cout<<"ADB���Ӽ��(adb)  Shizuku����(shi)  APK��װ(apk)\n\n";
	cout<<"��̨���������Ƴ�(htxz)     ����bootloade״̬(bl)\n\n";
	cout<<"�����豸(cq)    �鿴�豸�ͺ�(xh)    ���м���(hf)\n\n";
	
	while(1){ 
		cin>>s;
		if(s=="adb") ADB();
		if(s=="shi") Shi();
		if(s=="apk") apk();
		if(s=="htxz") ht();
		if(s=="bl") BL();
		if(s=="cq") cq();
		if(s=="xh") xh();
		if(s=="hf")  hf();
	} 
	return 0;
}
