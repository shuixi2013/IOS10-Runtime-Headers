//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NTKFace;

@interface _NTKCompanionFaceRenderingTask : NSObject
{
    NTKFace *_face;
    long long _detailMode;
    CDUnknownBlockType _completionHandler;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) long long detailMode; // @synthesize detailMode=_detailMode;
@property(readonly, nonatomic) NTKFace *face; // @synthesize face=_face;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isMemberOfBatch) _Bool memberOfBatch;
- (id)initWithFace:(id)arg1 detailMode:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

