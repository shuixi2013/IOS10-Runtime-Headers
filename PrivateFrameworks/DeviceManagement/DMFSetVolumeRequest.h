//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Catalyst/CATTaskRequest.h>

@interface DMFSetVolumeRequest : CATTaskRequest
{
    float _volume;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) float volume; // @synthesize volume=_volume;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

