//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TSDEditableBezierPathSource, TSUPointerKeyDictionary;

__attribute__((visibility("hidden")))
@interface TSDEditableBezierPathSourceMorphInfo : NSObject
{
    TSDEditableBezierPathSource *mOriginal;
    TSDEditableBezierPathSource *mSmoothOriginal;
    TSUPointerKeyDictionary *mOriginalNodeIndexMapping;
}

@property(retain, nonatomic) TSDEditableBezierPathSource *smoothOriginal; // @synthesize smoothOriginal=mSmoothOriginal;
@property(retain, nonatomic) TSDEditableBezierPathSource *original; // @synthesize original=mOriginal;
- (id)originalSmoothNodeForNode:(id)arg1;
- (unsigned long long)originalNodeIndexForNode:(id)arg1;
- (unsigned long long)originalSubpathIndexForNode:(id)arg1;
- (id)originalNodeForNode:(id)arg1;
- (void)dealloc;
- (id)initWithEditableBezierPathSource:(id)arg1;

@end

