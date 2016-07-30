//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/GQDNameMappable-Protocol.h>

@class GQDBezierPath, NSString;

__attribute__((visibility("hidden")))
@interface GQDRLineEnd : NSObject <GQDNameMappable>
{
    GQDBezierPath *mPath;
    struct CGPoint mEndPoint;
    _Bool mIsFilled;
    double mScale;
}

+ (const struct StateSpec *)stateForReading;
- (double)scale;
- (_Bool)isFilled;
- (struct CGPoint)endPoint;
- (struct CGPath *)path;
- (char *)pathStr;
- (void)dealloc;
- (int)readAttributesFromReader:(struct _xmlTextReader *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

