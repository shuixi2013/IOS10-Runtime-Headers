//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsUI/NSObject-Protocol.h>

@class CNContactStore, CNUIContactsEnvironment, CNUIPeopleGroup, NSArray, NSString;

@protocol CNUIPeopleSource <NSObject>
+ (id)sourceWithEnvironment:(CNUIContactsEnvironment *)arg1 contactStore:(CNContactStore *)arg2;
+ (NSString *)sourceKind;
- (NSArray *)peopleInGroup:(CNUIPeopleGroup *)arg1 keysToFetch:(NSArray *)arg2;
- (NSArray *)groups;
@end

