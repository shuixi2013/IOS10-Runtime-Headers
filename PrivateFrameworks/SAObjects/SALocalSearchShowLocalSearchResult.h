//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class NSData, NSDate, NSString;

@interface SALocalSearchShowLocalSearchResult : SADomainCommand
{
}

+ (id)showLocalSearchResultWithDictionary:(id)arg1 context:(id)arg2;
+ (id)showLocalSearchResult;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSData *rawData;
@property(copy, nonatomic) NSDate *extSessionGuidCreatedTimestamp;
@property(copy, nonatomic) NSString *extSessionGuid;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

