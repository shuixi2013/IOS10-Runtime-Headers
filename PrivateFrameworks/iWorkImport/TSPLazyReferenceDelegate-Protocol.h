//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/NSObject-Protocol.h>

@class TSPLazyReference, TSPObject;

@protocol TSPLazyReferenceDelegate <NSObject>
- (void)addLoadObserver:(id)arg1 action:(SEL)arg2 forLazyReference:(TSPLazyReference *)arg3;
- (_Bool)readLazyReference:(TSPLazyReference *)arg1 object:(id *)arg2 error:(id *)arg3;
- (TSPObject *)objectForIdentifier:(long long)arg1;

@optional
- (void)lazyReference:(TSPLazyReference *)arg1 didCreateCopy:(TSPLazyReference *)arg2;
@end

