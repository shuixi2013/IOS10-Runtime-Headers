//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NEHelper, NSData, NSDictionary, NSKeyedUnarchiver, NSMutableDictionary, NSString, NSUUID;
@protocol NEConfigurationManagerDelegate, OS_dispatch_queue;

@interface NEConfigurationManager : NSObject
{
    NSString *_description;
    NEHelper *_helper;
    _Bool _hasReadPermission;
    _Bool _isVPNPublicAPI;
    _Bool _isNEHelper;
    _Bool _hasVPNAPIEntitlement;
    int _changedNotifyToken;
    NSString *_pluginType;
    NSObject<OS_dispatch_queue> *_queue;
    NSDictionary *_currentIndex;
    NSObject<OS_dispatch_queue> *_changedQueue;
    CDUnknownBlockType _changedHandler;
    NSMutableDictionary *_loadedIndex;
    NSMutableDictionary *_loadedConfigurations;
    NSKeyedUnarchiver *_decoder;
    long long _generation;
    NSData *_SCPreferencesSignature;
    NSUUID *_userUUID;
    NSString *_configFile;
    id <NEConfigurationManagerDelegate> _delegate;
    long long _configurationChangeSource;
}

+ (void)disableConfiguration:(id)arg1 onDemandOnly:(_Bool)arg2;
+ (long long)configuration:(id)arg1 overlapsWithOtherConfiguration:(id)arg2;
+ (_Bool)configurationIsEnabled:(id)arg1;
+ (void)updateFlags:(unsigned long long *)arg1 withConfiguration:(id)arg2;
+ (id)sharedManagerForAllUsers;
+ (id)sharedManager;
@property long long configurationChangeSource; // @synthesize configurationChangeSource=_configurationChangeSource;
@property(retain) id <NEConfigurationManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *configFile; // @synthesize configFile=_configFile;
@property(readonly) NSUUID *userUUID; // @synthesize userUUID=_userUUID;
@property _Bool hasVPNAPIEntitlement; // @synthesize hasVPNAPIEntitlement=_hasVPNAPIEntitlement;
@property _Bool isNEHelper; // @synthesize isNEHelper=_isNEHelper;
@property _Bool isVPNPublicAPI; // @synthesize isVPNPublicAPI=_isVPNPublicAPI;
@property _Bool hasReadPermission; // @synthesize hasReadPermission=_hasReadPermission;
@property(retain) NSData *SCPreferencesSignature; // @synthesize SCPreferencesSignature=_SCPreferencesSignature;
@property long long generation; // @synthesize generation=_generation;
@property(retain) NSKeyedUnarchiver *decoder; // @synthesize decoder=_decoder;
@property(retain) NSMutableDictionary *loadedConfigurations; // @synthesize loadedConfigurations=_loadedConfigurations;
@property(retain) NSMutableDictionary *loadedIndex; // @synthesize loadedIndex=_loadedIndex;
@property(copy) CDUnknownBlockType changedHandler; // @synthesize changedHandler=_changedHandler;
@property(retain) NSObject<OS_dispatch_queue> *changedQueue; // @synthesize changedQueue=_changedQueue;
@property(retain) NSDictionary *currentIndex; // @synthesize currentIndex=_currentIndex;
@property int changedNotifyToken; // @synthesize changedNotifyToken=_changedNotifyToken;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly) NSString *pluginType; // @synthesize pluginType=_pluginType;
- (void).cxx_destruct;
- (void)fetchCarrierBundleNATKeepAliveIntervalOverCell:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)fetchUpgradeInfoForPluginType:(id)arg1 completionQueue:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)fetchClientListenerWithBundleID:(id)arg1 completionQueue:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)triggerLocalAuthenticationForConfigurationWithID:(id)arg1 withCompletionQueue:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)copyIdentities:(id)arg1 fromDomain:(long long)arg2 withCompletionQueue:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)handleApplicationsRemoved:(id)arg1 pluginTypesRemoved:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)handlePluginTypesRemoved:(id)arg1 configuration:(id)arg2 vpn:(id)arg3 updateSCPreferences:(struct __SCPreferences *)arg4;
- (void)handleFileRemovedWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setChangedQueue:(id)arg1 andHandler:(CDUnknownBlockType)arg2;
- (void)removeConfiguration:(id)arg1 withCompletionQueue:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)saveConfiguration:(id)arg1 withCompletionQueue:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (_Bool)resetKeychainItemsAfterProtocolChange:(id)arg1 newConfiguration:(id)arg2;
- (void)loadConfigurationsWithCompletionQueue:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)loadConfigurationWithID:(id)arg1 withCompletionQueue:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)loadConfigurations:(id)arg1 withFilter:(id)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)loadConfigurationsInternal:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)loadIndexWithFilter:(id)arg1 completionQueue:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)syncWithSystemConfigurationWithAppNameCallback:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateSCPreferencesSignatureOnDisk;
- (void)removeConfigurationFromDisk:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)removeConfigurationFromDisk:(id)arg1 updateSCPreferences:(struct __SCPreferences *)arg2;
- (void)saveConfigurationToDisk:(id)arg1 currentSignature:(id)arg2 userUUID:(id)arg3 completionQueue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)saveConfigurationToDisk:(id)arg1 updateSCPreferences:(struct __SCPreferences *)arg2 currentSignature:(id)arg3 userUUID:(id)arg4 notifyNow:(_Bool)arg5;
- (void)postChangeNotification;
- (void)postChangeNotificationWithGeneration:(long long)arg1 andFlags:(unsigned long long)arg2;
- (id)makeMutableCopyOfIndex:(id)arg1;
- (id)filterIndexWithFilter:(id)arg1;
- (id)readIndexFromDiskWithError:(id *)arg1;
- (id)copyChangedConfigurationIDs:(id)arg1;
- (_Bool)configurationHasChanged:(id)arg1;
- (void)clearLoadedConfigurationsWithIDs:(id)arg1;
- (void)didLoadConfiguration:(id)arg1;
- (void)didLoadConfiguration:(id)arg1 withSignature:(id)arg2;
- (void)registerForChangeNotifications;
- (void)notifyChanges;
- (void)getCurrentIndexWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)reloadFromDisk;
- (void)postGeneration;
- (void)sendRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
@property(copy) CDUnknownBlockType incomingMessageHandler;
@property(readonly) NEHelper *helper;
- (id)decodeConfigurationWithIdentifier:(id)arg1;
- (id)errorWithCode:(long long)arg1 specifics:(id)arg2;
- (id)description;
- (void)dealloc;
- (id)initWithPluginType:(id)arg1;
- (id)init;
- (id)initWithUserUUID:(id)arg1;

@end

