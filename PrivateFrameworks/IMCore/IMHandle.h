//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IMCore/NSCoding-Protocol.h>

@class IMAccount, IMPerson, IMServiceImpl, NSArray, NSAttributedString, NSData, NSDate, NSDictionary, NSMutableArray, NSSet, NSString, NSURL;

@interface IMHandle : NSObject <NSCoding>
{
    NSString *_guid;
    IMAccount *_account;
    NSString *_id;
    NSString *_uncanonicalID;
    NSString *_countryCode;
    NSDictionary *_otherServiceIDs;
    NSDate *_idleSince;
    NSDate *_feedUpdatedDate;
    NSDictionary *_extraProps;
    NSDictionary *_certs;
    NSSet *_groups;
    IMPerson *_person;
    NSString *_abFirstName;
    NSString *_abLastName;
    NSString *_abFullName;
    NSString *_abNickname;
    NSString *_displayID;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_fullName;
    NSString *_nickname;
    NSArray *_emails;
    NSString *_normalizedFormOfID;
    NSString *_IDWithoutResource;
    NSString *_IDWithTrimmedServer;
    NSString *_uniqueName;
    NSData *_pictureData;
    NSString *_statusMsg;
    NSString *_processedStatusMsg;
    NSAttributedString *_richStatusMsg;
    NSDate *_whenWentOffline;
    NSDate *_whenStatusChanged;
    NSString *_prevStatusMsg;
    NSMutableArray *_notificationNameQueue;
    NSMutableArray *_notificationQueue;
    NSURL *_statusURL;
    struct __CFPhoneNumber *_phoneNumberRef;
    NSString *_formattedNumber;
    _Bool _hasCheckedPhoneNumber;
    unsigned long long _status;
    unsigned long long _prevStatus;
    unsigned long long _capabilities;
    unsigned int _authRequestStatus;
    unsigned long long _resourceIndex;
    long long _IDStatus;
    _Bool _isRetainingAccount;
    _Bool _blockNotifications;
    _Bool _hasTemporaryWatch;
    _Bool _isMobile;
    _Bool _isBot;
    _Bool _isAnonymous;
    _Bool _beingTornDown;
    _Bool _hasCheckedCardMap;
    _Bool _isRegistered;
    long long _priority;
    int _addressBookIdentifier;
    int _notificationQueueCount;
    NSURL *_statusMessageURL;
    NSString *_suggestedName;
}

+ (id)filterIMHandlesForBestAccountSiblings:(id)arg1;
+ (id)filterIMHandlesForAccountSiblings:(id)arg1 onAccount:(id)arg2;
+ (id)bestIMHandleInArray:(id)arg1;
+ (id)imHandlesForIMPerson:(id)arg1;
+ (id)nameOfStatus:(unsigned long long)arg1;
+ (void)_loadStatusNames;
+ (_Bool)notificationsEnabled;
+ (void)setNotificationsEnabled:(_Bool)arg1;
+ (void)bestHandlesForPersons:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) NSString *suggestedName; // @synthesize suggestedName=_suggestedName;
@property(readonly, nonatomic) int addressBookIdentifier; // @synthesize addressBookIdentifier=_addressBookIdentifier;
@property(retain, nonatomic) NSURL *statusMessageAsURL; // @synthesize statusMessageAsURL=_statusMessageURL;
@property(nonatomic) long long IDStatus; // @synthesize IDStatus=_IDStatus;
@property(readonly, nonatomic) _Bool isBot; // @synthesize isBot=_isBot;
@property(readonly, nonatomic) _Bool isMobile; // @synthesize isMobile=_isMobile;
@property(retain, nonatomic) NSDictionary *otherServiceIDs; // @synthesize otherServiceIDs=_otherServiceIDs;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(readonly, retain, nonatomic) NSString *guid; // @synthesize guid=_guid;
@property(readonly, retain, nonatomic) IMAccount *account; // @synthesize account=_account;
@property(readonly, retain, nonatomic) NSString *uniqueName; // @synthesize uniqueName=_uniqueName;
@property(readonly, retain, nonatomic) NSString *ID; // @synthesize ID=_id;
@property(readonly, retain, nonatomic) NSData *pictureData; // @synthesize pictureData=_pictureData;
@property(readonly, retain, nonatomic) NSAttributedString *richStatusMessage; // @synthesize richStatusMessage=_richStatusMsg;
@property(readonly, retain, nonatomic) NSString *previousStatusMessage; // @synthesize previousStatusMessage=_prevStatusMsg;
@property(readonly, retain, nonatomic) NSDate *feedUpdatedDate; // @synthesize feedUpdatedDate=_feedUpdatedDate;
@property(readonly, nonatomic) unsigned long long previousStatus; // @synthesize previousStatus=_prevStatus;
@property(readonly, nonatomic) unsigned int authRequestStatus; // @synthesize authRequestStatus=_authRequestStatus;
@property(readonly, retain, nonatomic) NSDictionary *extraProperties; // @synthesize extraProperties=_extraProps;
@property(readonly, retain, nonatomic) NSURL *statusURL; // @synthesize statusURL=_statusURL;
@property(setter=_setIsRegisteredWithRegistrar:) _Bool _isRegisteredWithRegistrar; // @synthesize _isRegisteredWithRegistrar=_isRegistered;
@property(retain, nonatomic, setter=_setOriginalID:) NSString *originalID; // @synthesize originalID=_uncanonicalID;
- (void)sendNotificationABPersonChanged;
- (id)description;
- (void)setCustomPictureData:(id)arg1 key:(id)arg2;
@property(retain, nonatomic) NSData *customPictureData;
- (void)customPictureDataChanged:(id)arg1 key:(id)arg2;
- (void)_imPersonPictureChanged:(id)arg1;
- (void)_sendCommand:(id)arg1 properties:(id)arg2;
- (void)_sendAutomationData:(id)arg1 properties:(id)arg2;
@property(readonly, nonatomic) _Bool hasMultiwayAudio;
@property(readonly, nonatomic) _Bool hasAudio;
@property(readonly, nonatomic) _Bool hasMultiwayVideo;
@property(readonly, nonatomic) _Bool hasVideo;
@property(readonly, nonatomic) _Bool isConferenceAvailable;
@property(readonly, nonatomic) _Bool hasConferencing;
- (_Bool)hasCapability:(unsigned long long)arg1;
- (_Bool)_setCapabilities:(unsigned long long)arg1;
- (void)setCapabilities:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long capabilities;
- (id)_bestChatSibling;
- (id)_chatSiblingsArray;
- (id)_chatSiblings;
- (_Bool)_isChatSiblingOf:(id)arg1;
- (_Bool)isSiblingOf:(id)arg1;
- (_Bool)isAccountSiblingOf:(id)arg1;
@property(readonly, retain, nonatomic) NSSet *siblings;
- (id)chatSiblingsArray;
- (id)existingChatSiblingsArray;
@property(readonly, retain, nonatomic) NSArray *accountSiblingsArray;
@property(readonly, retain, nonatomic) NSArray *existingAccountSiblingsArray;
@property(readonly, retain, nonatomic) NSArray *siblingsArray;
@property(readonly, nonatomic) _Bool hasOtherSiblings;
- (_Bool)matchesIMHandle:(id)arg1;
- (long long)compareAccountNames:(id)arg1;
- (long long)compareNormalizedIDs:(id)arg1;
- (long long)compareIDs:(id)arg1;
- (long long)compareStatus:(id)arg1;
- (long long)compareLastNames:(id)arg1;
- (long long)compareFirstNames:(id)arg1;
- (id)_nameForComparisonPreferFirst:(_Bool)arg1;
@property(readonly, nonatomic) double timeSinceStatusChanged;
@property(readonly, nonatomic) double timeSinceWentOffline;
- (void)setStatus:(unsigned long long)arg1 message:(id)arg2 richMessage:(id)arg3;
- (void)_clearStatusMessageURLCache;
@property(readonly, retain, nonatomic) NSString *statusMessage;
- (void)_filterStatusMessage;
@property(readonly, retain, nonatomic) NSString *idleString;
@property(readonly, retain, nonatomic) NSString *offlineString;
- (void)setStatusURLFromString:(id)arg1;
- (void)setFeedUpdatedDate:(id)arg1;
- (void)setIdleSince:(id)arg1;
- (void)_setIDStatus:(long long)arg1;
@property(readonly, nonatomic) double idleTime;
@property(readonly, retain, nonatomic) NSString *nameOfStatus;
- (void)statusChanged:(unsigned long long)arg1;
- (void)statusMessageChanged:(id)arg1;
- (void)statusChanged:(unsigned long long)arg1 message:(id)arg2;
- (void)setPersonStatus:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long status;
- (void)setAuthRequestStatus:(unsigned int)arg1;
- (void)_updateStatusBasedOnAuthRequestStatus;
- (void)_stopRetainingAccount:(id)arg1;
- (void)_removeAccountReference:(id)arg1;
@property(readonly, nonatomic) NSArray *dependentIMHandles;
@property(readonly, nonatomic) id existingIMHandleWithoutResource;
@property(readonly, nonatomic) id imHandleWithoutResource;
@property(readonly, retain, nonatomic) NSString *IDWithoutResource;
@property(readonly, retain, nonatomic) NSString *resource;
@property(readonly, retain, nonatomic) NSString *accountTypeName;
- (unsigned int)sortOrderInGroup:(id)arg1;
@property(nonatomic, setter=setBlocked:) _Bool isBlocked;
@property(readonly, nonatomic) _Bool isVisiblyBlocked;
- (_Bool)_isMyIDInList:(id)arg1;
- (void)propertiesChanged:(id)arg1;
- (void)_setExtraProperties:(id)arg1;
@property(readonly, nonatomic) id bestSibling;
- (id)bestIMHandleForAccount:(id)arg1 onService:(id)arg2 inGroup:(id)arg3 otherThan:(id)arg4;
@property(readonly, retain, nonatomic) id bestAccountSibling;
- (id)bestIMHandleForAccount:(id)arg1;
- (id)bestIMHandleForService:(id)arg1;
- (_Bool)isBetterThanIMHandle:(id)arg1;
- (void)setHasTemporaryWatch:(_Bool)arg1;
@property(readonly, nonatomic) _Bool watchingIMHandle;
- (void)setValue:(id)arg1 ofExtraProperty:(id)arg2;
- (void)requestValueOfProperty:(id)arg1;
- (id)_formattedPhoneNumber;
- (void)_updateOriginalID:(id)arg1;
- (struct __CFPhoneNumber *)phoneNumberRef;
- (void)_createPhoneNumberRefIfNeeded;
@property(readonly, nonatomic) _Bool isLoginIMHandle;
@property(readonly, nonatomic) _Bool isLoginIMHandleForAnyAccount;
@property(readonly, nonatomic) _Bool isBuddy;
@property(readonly, retain, nonatomic) NSString *server;
@property(readonly, nonatomic) _Bool hasResource;
@property(readonly, nonatomic) _Bool hasLocation;
@property(readonly, nonatomic) _Bool hasServer;
@property(readonly, retain, nonatomic) NSString *mobileDeviceName;
- (void)setIsBot:(_Bool)arg1;
- (void)setIsMobile:(_Bool)arg1;
@property(readonly, nonatomic) _Bool isSystemUser;
@property(readonly, nonatomic) _Bool canBeAdded;
- (void)setEmails:(id)arg1;
- (void)setEmail:(id)arg1;
- (void)setFirstName:(id)arg1 lastName:(id)arg2;
@property(readonly, retain, nonatomic) NSArray *emails;
- (void)setEmails:(id)arg1 andUpdateABPerson:(_Bool)arg2;
@property(readonly, retain, nonatomic) NSString *email;
- (void)setEmail:(id)arg1 andUpdateABPerson:(_Bool)arg2;
- (void)setFirstName:(id)arg1 lastName:(id)arg2 fullName:(id)arg3 andUpdateABPerson:(_Bool)arg4;
- (void)setLocalNickname:(id)arg1;
- (void)setImageData:(id)arg1;
- (void)_setBaseFirstName:(id)arg1 lastName:(id)arg2 fullName:(id)arg3;
- (void)_setABPersonFirstName:(id)arg1 lastName:(id)arg2;
@property(readonly, retain, nonatomic) NSString *lastName;
@property(readonly, retain, nonatomic) NSString *firstName;
@property(readonly, retain, nonatomic) NSString *nickname;
@property(readonly, nonatomic) _Bool hasName;
- (void)resetUniqueName;
@property(readonly, retain, nonatomic) NSString *nameAndID;
@property(readonly, retain, nonatomic) NSString *fullName;
@property(readonly, retain, nonatomic) NSString *_displayNameWithAbbreviation;
- (id)displayNameForChat:(id)arg1;
@property(readonly, retain, nonatomic) NSString *normalizedID;
@property(readonly, retain, nonatomic) NSString *displayID;
- (id)immediateNameWithNeedsSuggestedNameFetch:(_Bool *)arg1 useSuggestedName:(_Bool)arg2;
- (id)_nameWithoutSuggestedName;
@property(readonly, retain, nonatomic) NSString *name;
- (_Bool)_hasABName;
- (_Bool)_hasServiceNameProperties;
- (id)_IDWithTrimmedServer;
@property(retain, nonatomic, setter=setIMPerson:) IMPerson *person; // @synthesize person=_person;
@property(readonly, retain, nonatomic) IMPerson *_cachedPerson;
- (void)_clearABPersonLookup;
- (void)resetABProperties;
- (void)_clearABProperties;
@property(readonly, nonatomic) _Bool areABPropertiesRecent;
- (id)_abPersonCreateIfNeeded;
- (_Bool)resetABPerson;
- (void)clearABPerson;
- (unsigned long long)hash;
@property(readonly, retain, nonatomic) IMServiceImpl *service;
@property(readonly, retain, nonatomic) NSString *nameAndEmail;
- (void)setUniqueName:(id)arg1;
- (void)postNotificationName:(id)arg1;
- (void)_postNotificationName:(id)arg1 userInfo:(id)arg2;
- (void)_postNotification:(id)arg1;
- (void)_registerForNotifications;
@property(readonly, nonatomic) _Bool isAnonymous;
- (void)setAnonymous:(_Bool)arg1;
@property(readonly, retain, nonatomic) NSSet *groups;
@property(readonly, retain, nonatomic) NSArray *groupsArray;
- (id)imHandleForOtherAccount:(id)arg1;
@property(readonly, nonatomic) _Bool canBeDeleted;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(retain, nonatomic, setter=_setCountryCode:) NSString *countryCode; // @synthesize countryCode=_countryCode;
- (void)_setOriginalID:(id)arg1 updateSiblings:(_Bool)arg2;
- (void)_setOriginalID:(id)arg1 countryCode:(id)arg2 updateSiblings:(_Bool)arg3;
- (id)_handleInfo;
- (void)dealloc;
- (void)finalize;
- (oneway void)release;
- (id)initWithAccount:(id)arg1 ID:(id)arg2;
- (id)initWithAccount:(id)arg1 ID:(id)arg2 alreadyCanonical:(_Bool)arg3;
- (id)init;
- (void)_registerForIMPersonPictureChanges;
- (void)_unregisterFromIMPersonPictureChanges;
- (void)releaseNotificationQueue;
- (void)beginNotificationQueue;
- (_Bool)shouldQueueNotifications;
- (id)publicAPIPropertiesDictionary;
- (void)_sendRemoteLogDumpRequest;
- (void)_sendRemoteLogDumpRequest:(id)arg1;
- (id)imHandleRegistrarGUID;
- (id)fmfSiblingHandles;
- (id)fmfHandle;

@end
