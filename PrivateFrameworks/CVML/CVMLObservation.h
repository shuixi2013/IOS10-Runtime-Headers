//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CVML/NSCoding-Protocol.h>

@interface CVMLObservation : NSObject <NSCoding>
{
    float _confidence;
}

@property float confidence; // @synthesize confidence=_confidence;
- (id)serializeSelfForKey:(id)arg1;
- (id)initWithData:(id)arg1 forKey:(id)arg2;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

