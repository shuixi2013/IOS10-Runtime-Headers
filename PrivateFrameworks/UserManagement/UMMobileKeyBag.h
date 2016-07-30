//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface UMMobileKeyBag : NSObject
{
}

+ (id)dictionaryRepresentationOfTask:(id)arg1;
+ (id)taskFromDictionaryRepresentation:(id)arg1;
+ (double)passcodeBackOffIntervalForUser:(id)arg1;
+ (id)personaSpecForUser:(id)arg1;
+ (_Bool)writeAttributesToDiskForUser:(id)arg1;
+ (void)fetchAttributesForUser:(id)arg1;
+ (id)userFromAttributes:(id)arg1;
+ (id)deleteUser:(id)arg1;
+ (id)loadUser:(id)arg1 withPasscodeData:(id)arg2;
+ (void)currentUserSwitchContextHasBeenUsed;
+ (id)currentUserSwitchContext;
+ (id)userUIDs;
+ (int)foregroundUID;
+ (unsigned long long)maxNumberOfUsers;
+ (unsigned long long)userType;
+ (_Bool)inSyncBubble;
+ (_Bool)isMultiUser;
+ (void)initialize;

@end

