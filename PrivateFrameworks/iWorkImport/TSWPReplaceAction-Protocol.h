//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/NSObject-Protocol.h>

@class TSWPStorage;

@protocol TSWPReplaceAction <NSObject>
- (struct _NSRange)insertedRange;
- (long long)delta;
- (unsigned long long)targetCharIndex;
- (void)performWithStorage:(TSWPStorage *)arg1 delta:(long long)arg2 actionBuilder:(struct TSWPStorageActionBuilder *)arg3 withFlags:(unsigned int)arg4 replaceBlock:(void (^)(TSWPSelection *, NSString *))arg5;
@end

