//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SAAceClientState.h>

@class NSArray;

@interface SAUTSTvSubscriptionsClientState : SAAceClientState
{
}

+ (id)tvSubscriptionsClientStateWithDictionary:(id)arg1 context:(id)arg2;
+ (id)tvSubscriptionsClientState;
+ (id)uniqueObjectIdentifier;
+ (id)syncKey;
+ (id)persistencePolicy;
+ (id)deliveryDeadline;
@property(copy, nonatomic) NSArray *subscriptions;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

