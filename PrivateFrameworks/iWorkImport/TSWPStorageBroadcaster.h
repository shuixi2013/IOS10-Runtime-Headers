//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSWPStorageBroadcaster : NSObject
{
    struct set<id<TSWPStorageObserver>, std::__1::less<id<TSWPStorageObserver>>, std::__1::allocator<id<TSWPStorageObserver>>> _observers;
    struct set<id<TSWPStorageParagraphObserver>, std::__1::less<id<TSWPStorageParagraphObserver>>, std::__1::allocator<id<TSWPStorageParagraphObserver>>> _paragraphObservers;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)broadcastStorage:(id)arg1 didChangeParagraphsInIndexRange:(struct _NSRange)arg2;
- (void)broadcastStorage:(id)arg1 didDeleteParagraphsInIndexRange:(struct _NSRange)arg2;
- (void)broadcastStorage:(id)arg1 didInsertParagraphsInIndexRange:(struct _NSRange)arg2;
- (void)broadcastStorage:(id)arg1 didChangeRange:(struct _NSRange)arg2 delta:(long long)arg3 broadcastKind:(int)arg4 attributeKindChanges:(id)arg5;
- (void)broadcastStorage:(id)arg1 didChangeRange:(struct _NSRange)arg2 delta:(long long)arg3 broadcastKind:(int)arg4;
- (void)removeAllObservers;
- (void)removeParagraphObserver:(id)arg1;
- (void)addParagraphObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;

@end

