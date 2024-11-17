#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
string s;
void cq(){
	system("adb shell reboot -p");
	cout<<"已经重启\n";
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
	cout<<"请把文件放到C:/ 并命名为1.apk \n";
	cout<<"如果好了请 输入1并按下回车";
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
	cout<<"Shizuku已经激活！\n"; 
	return ;
}
void ht() {
	cout<<"此功能为虚拟机打造！\n"; 
	cout<<"引擎初始化中！\n";
	system("adb wait-for-device");
	system("adb devices");
	system("adb shell /system/bin/device_config put activity_manager max_phantom_processes 2147483647");
	system("adb shell /system/bin/device_config set_sync_disabled_for_tests persistent");
	system("adb shell /system/bin/dumpsys activity settings | findstr max_phantom_processes");
	cout<<"解锁完成！\n"; 
}
void xh(){
	cout<<"    安卓: "; 
	system("adb shell getprop ro.build.version.release");
	cout<<"    IP:   ";
	system("adb shell ifconfig wlan0");
	cout<<"\n设备型号如上---\n"; 
}
void hf(){
	system("adb wait-for-device");
	system("adb devices");
	system("adb -d shell sh /data/data/me.piebridge.brevent/brevent.sh");
	cout<<"黑阈已经激活\n"; 
}
int main() {
	cout<<"=================================================\n\n";
	cout<<"		 寰宇银河工具箱\n\n";
	cout<<"================================================\n";
	cout<<"ADB连接检查(adb)  Shizuku激活(shi)  APK安装(apk)\n\n";
	cout<<"后台进程限制移除(htxz)     重启bootloade状态(bl)\n\n";
	cout<<"重启设备(cq)    查看设备型号(xh)    黑阈激活(hf)\n\n";
	
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
