//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TSURetainedPointerKeyDictionary;

@interface TSULayerSaveRestore : NSObject
{
    TSURetainedPointerKeyDictionary *_layerStates;
}

@property(retain, nonatomic) TSURetainedPointerKeyDictionary *layerStates; // @synthesize layerStates=_layerStates;
- (_Bool)restoreLayer:(id)arg1;
- (void)saveLayer:(id)arg1;
- (id)objectForLayer:(id)arg1 key:(id)arg2;
- (void)dealloc;

@end

