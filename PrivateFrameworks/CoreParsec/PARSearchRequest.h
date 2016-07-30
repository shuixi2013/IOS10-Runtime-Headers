//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreParsec/PARRequest.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

@interface PARSearchRequest : PARRequest <NSSecureCoding>
{
    NSString *_queryString;
    unsigned long long _bingWebResultsType;
    NSDictionary *_topics;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSDictionary *topics; // @synthesize topics=_topics;
@property(nonatomic) unsigned long long bingWebResultsType; // @synthesize bingWebResultsType=_bingWebResultsType;
@property(copy, nonatomic) NSString *queryString; // @synthesize queryString=_queryString;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

