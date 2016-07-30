//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CVML/ExternalDetectedObject-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface FaceDetectedObject : NSObject <ExternalDetectedObject>
{
    float confidence;
    long long objectType;
    struct CGPoint center;
    struct CGRect bounds;
}

@property float confidence; // @synthesize confidence;
@property struct CGPoint center; // @synthesize center;
@property struct CGRect bounds; // @synthesize bounds;
@property long long objectType; // @synthesize objectType;
- (id)initWithOptionsXloc:(float)arg1 yloc:(float)arg2 size:(float)arg3 confidence:(float)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

