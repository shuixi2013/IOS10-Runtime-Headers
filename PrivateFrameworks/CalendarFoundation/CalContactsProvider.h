//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CNContactStore;

@interface CalContactsProvider : NSObject
{
    CNContactStore *_store;
}

+ (id)defaultProvider;
@property(retain) CNContactStore *store; // @synthesize store=_store;
- (void).cxx_destruct;
- (id)myFullName;
- (id)myNameWithStyle:(long long)arg1;
- (id)myShortDisplayName;
- (void)donateEncodedLikenessString:(id)arg1 forEmailAddress:(id)arg2;
- (id)myAvatarEncodedString;
- (id)unifiedContactWithIdentifier:(id)arg1 keysToFetch:(id)arg2;
- (id)unifiedContactsMatchingPredicate:(id)arg1 keysToFetch:(id)arg2;
- (id)_meWithKeys:(id)arg1;
- (void)meCardDidChange:(id)arg1;
- (void)contactDidChange:(id)arg1;
- (id)init;

@end

