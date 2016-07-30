//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GKListNode;

@interface GKLinkedList : NSObject
{
    GKListNode *_headNode;
    GKListNode *_tailNode;
}

@property(nonatomic) GKListNode *tailNode; // @synthesize tailNode=_tailNode;
@property(nonatomic) GKListNode *headNode; // @synthesize headNode=_headNode;
- (id)nodeForInsertionWithValue:(id)arg1;
- (void)removeNode:(id)arg1;
- (void)insertNodeAtBeginning:(id)arg1;
- (void)insertNode:(id)arg1 before:(id)arg2;
- (void)removeAllNodes;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)insertNodeAtBeginningWithValue:(id)arg1 forKey:(id)arg2;
- (_Bool)isConsistent;
- (_Bool)hasCycle;

@end

