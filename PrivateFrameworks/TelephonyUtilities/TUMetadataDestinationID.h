//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TUMetadataDestinationID : NSObject
{
    NSString *_destinationID;
    NSString *_countryCode;
    NSString *_cacheKey;
    struct __CFPhoneNumber *_phoneNumber;
}

+ (id)destinationIDWithVMVoicemail:(id)arg1;
+ (id)destinationIDWithRecentCall:(id)arg1;
+ (id)destinationIDWithCall:(id)arg1;
+ (id)destinationIDWithDestinationID:(id)arg1 countryCode:(id)arg2;
@property(nonatomic) struct __CFPhoneNumber *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(retain, nonatomic) NSString *cacheKey; // @synthesize cacheKey=_cacheKey;
@property(readonly, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(readonly, nonatomic) NSString *destinationID; // @synthesize destinationID=_destinationID;
- (void).cxx_destruct;
- (id)initWithVMVoicemail:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)init;
- (id)initWithRecentCall:(id)arg1;
- (id)initWithCall:(id)arg1;
- (id)initWithDestinationID:(id)arg1 countryCode:(id)arg2;
- (void)dealloc;

@end

