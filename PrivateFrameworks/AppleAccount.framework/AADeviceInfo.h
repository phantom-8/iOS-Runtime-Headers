/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AADeviceInfo : NSObject {
    struct _lockdown_connection { } *connection;
}

+ (id)deviceCredential;
+ (id)infoDictionary;
+ (id)osVersion;
+ (id)signatureWithDictionary:(id)arg1;
+ (id)udid;

- (void)dealloc;
- (id)deviceInfoDictionary;
- (id)init;
- (id)lockDownValueForKey:(struct __CFString { }*)arg1;
- (id)mobileMeSetupToken;
- (id)osVersion;
- (id)productVersion;
- (id)regionCode;
- (id)serialNumber;
- (id)udid;
- (id)wifiMacAddress;

@end