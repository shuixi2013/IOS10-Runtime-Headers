//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Catalyst/CATTaskRequest.h>

@interface DMFFetchScreenshotRequest : CATTaskRequest
{
    unsigned long long _maxWidth;
    unsigned long long _maxHeight;
}

+ (_Bool)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;
@property(nonatomic) unsigned long long maxHeight; // @synthesize maxHeight=_maxHeight;
@property(nonatomic) unsigned long long maxWidth; // @synthesize maxWidth=_maxWidth;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

