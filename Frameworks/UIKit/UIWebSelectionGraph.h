//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface UIWebSelectionGraph : NSObject
{
    NSMutableArray *_selectionNodes;
}

- (void)exploreFromNode:(id)arg1;
- (void)exploreFromNode:(id)arg1 outwards:(_Bool)arg2 maxDepth:(int)arg3;
- (id)addNodeFromSelection:(id)arg1;
- (void)clearNodes;
- (void)dealloc;
- (id)init;

@end

