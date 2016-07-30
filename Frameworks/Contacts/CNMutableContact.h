//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Contacts/CNContact.h>

@class CNActivityAlert, NSArray, NSData, NSDateComponents, NSDictionary, NSSet, NSString;

@interface CNMutableContact : CNContact
{
    _Bool _hasChanges;
}

+ (id)imageDataDescriptions;
+ (id)unifyContacts:(id)arg1;
@property(readonly, nonatomic) _Bool hasChanges; // @synthesize hasChanges=_hasChanges;
@property(copy, nonatomic) NSArray *linkedContacts; // @dynamic linkedContacts;
@property(copy, nonatomic) NSSet *availableKeys;
@property(copy, nonatomic) CNContact *snapshot; // @dynamic snapshot;
- (void)adoptValuesFromAndSetSnaphot:(id)arg1;
- (void)setNilValueForKey:(id)arg1;
@property(copy, nonatomic) NSDictionary *storeInfo; // @dynamic storeInfo;
@property(copy, nonatomic) NSString *storeIdentifier; // @dynamic storeIdentifier;
@property(copy, nonatomic) NSString *preferredApplePersonaIdentifier;
@property(copy, nonatomic) NSString *preferredLikenessSource;
@property(copy, nonatomic) NSArray *calendarURIs; // @dynamic calendarURIs;
@property(copy, nonatomic) NSArray *postalAddresses; // @dynamic postalAddresses;
@property(copy, nonatomic) NSArray *socialProfiles; // @dynamic socialProfiles;
@property(copy, nonatomic) NSArray *contactRelations; // @dynamic contactRelations;
@property(copy, nonatomic) NSArray *instantMessageAddresses; // @dynamic instantMessageAddresses;
@property(copy, nonatomic) NSArray *dates; // @dynamic dates;
@property(copy, nonatomic) NSArray *urlAddresses; // @dynamic urlAddresses;
@property(copy, nonatomic) NSArray *emailAddresses; // @dynamic emailAddresses;
@property(copy, nonatomic) NSArray *phoneNumbers; // @dynamic phoneNumbers;
@property(copy, nonatomic) NSDictionary *activityAlerts; // @dynamic activityAlerts;
@property(copy, nonatomic) NSString *mapsData;
@property(copy, nonatomic) CNActivityAlert *textAlert; // @dynamic textAlert;
@property(copy, nonatomic) CNActivityAlert *callAlert; // @dynamic callAlert;
@property(copy, nonatomic) NSString *phonemeData; // @dynamic phonemeData;
@property(copy, nonatomic) NSString *cardDAVUID; // @dynamic cardDAVUID;
@property(nonatomic) long long contactType; // @dynamic contactType;
@property(nonatomic, getter=isPreferredForImage) _Bool preferredForImage; // @dynamic preferredForImage;
- (_Bool)preferredForImage;
@property(nonatomic, getter=isPreferredForName) _Bool preferredForName; // @dynamic preferredForName;
- (_Bool)preferredForName;
@property(copy, nonatomic) NSString *linkIdentifier; // @dynamic linkIdentifier;
@property(nonatomic) _Bool imageDataAvailable; // @dynamic imageDataAvailable;
- (void)updateImageDataAvailableFromCurrentState;
@property(copy, nonatomic) NSData *fullscreenImageData; // @dynamic fullscreenImageData;
@property(copy, nonatomic) NSData *thumbnailImageData;
@property(nonatomic) struct CGRect cropRect;
@property(copy, nonatomic) NSData *imageData;
@property(copy, nonatomic) NSString *note; // @dynamic note;
- (void)setModificationDate:(id)arg1;
- (id)modificationDate;
@property(copy, nonatomic) NSDateComponents *nonGregorianBirthday; // @dynamic nonGregorianBirthday;
@property(copy, nonatomic) NSDateComponents *birthday; // @dynamic birthday;
@property(copy, nonatomic) NSString *jobTitle; // @dynamic jobTitle;
@property(copy, nonatomic) NSString *departmentName; // @dynamic departmentName;
@property(copy, nonatomic) NSString *organizationName; // @dynamic organizationName;
@property(copy, nonatomic) NSString *sectionForSortingByGivenName;
@property(copy, nonatomic) NSString *sectionForSortingByFamilyName;
@property(copy, nonatomic) NSString *pronunciationFamilyName; // @dynamic pronunciationFamilyName;
@property(copy, nonatomic) NSString *pronunciationGivenName; // @dynamic pronunciationGivenName;
@property(copy, nonatomic) NSString *searchIndex;
@property(copy, nonatomic) NSString *phoneticCompanyName;
@property(copy, nonatomic) NSString *phoneticFamilyName; // @dynamic phoneticFamilyName;
@property(copy, nonatomic) NSString *phoneticMiddleName; // @dynamic phoneticMiddleName;
@property(copy, nonatomic) NSString *phoneticGivenName; // @dynamic phoneticGivenName;
@property(copy, nonatomic) NSString *nickname; // @dynamic nickname;
@property(copy, nonatomic) NSString *previousFamilyName; // @dynamic previousFamilyName;
@property(copy, nonatomic) NSString *nameSuffix; // @dynamic nameSuffix;
@property(copy, nonatomic) NSString *familyName; // @dynamic familyName;
@property(copy, nonatomic) NSString *middleName; // @dynamic middleName;
@property(copy, nonatomic) NSString *givenName; // @dynamic givenName;
@property(copy, nonatomic) NSString *namePrefix; // @dynamic namePrefix;
@property(nonatomic) int iOSLegacyIdentifier; // @dynamic iOSLegacyIdentifier;
- (id)freezeWithSelfAsSnapshot;
- (id)freeze;
- (id)copyWithSelfAsSnapshot;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithContact:(id)arg1;
@property(copy) NSArray *relatedNames;
@property(copy) NSString *companyName; // @dynamic companyName;
@property(copy) NSString *phoneticLastName; // @dynamic phoneticLastName;
@property(copy) NSString *phoneticFirstName; // @dynamic phoneticFirstName;
@property(copy) NSString *maidenName; // @dynamic maidenName;
@property(copy) NSString *lastName; // @dynamic lastName;
@property(copy) NSString *firstName; // @dynamic firstName;
@property(copy) NSString *nameTitle; // @dynamic nameTitle;

@end

