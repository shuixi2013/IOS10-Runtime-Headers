//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreParsec/PARRequest.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>

@class NSString;

@interface PARFlightLookupRequest : PARRequest <NSSecureCoding>
{
    NSString *_flightId;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *flightId; // @synthesize flightId=_flightId;
- (void).cxx_destruct;
- (Class)responseClass;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

