/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSSystemConfigurationDynamicStoreMISWatcher : NSObject {
    int _misReason;
    int _misState;
    struct __SCDynamicStore { } *_scDynamicStore;
    struct __CFRunLoopSource { } *_scRunLoopSource;
}

+ (id)sharedManager;

- (void)dealloc;
- (void)getMISState:(int*)arg1 andReason:(int*)arg2;
- (id)init;
- (void)readMISState:(int*)arg1 andReason:(int*)arg2;
- (void)sendStateUpdate;

@end
