//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKit/CKSubscription.h>

#import <CloudKit/NSCopying-Protocol.h>
#import <CloudKit/NSSecureCoding-Protocol.h>

@class NSString;

@interface CKDatabaseSubscription : CKSubscription <NSSecureCoding, NSCopying>
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSubscriptionID:(id)arg1;
- (id)init;

// Remaining properties
@property(copy, nonatomic) NSString *recordType; // @dynamic recordType;

@end

