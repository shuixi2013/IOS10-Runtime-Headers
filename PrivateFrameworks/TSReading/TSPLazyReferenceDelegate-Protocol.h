//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/NSObject-Protocol.h>

@class TSPLazyReference, TSPObject;

@protocol TSPLazyReferenceDelegate <NSObject>
- (TSPObject *)objectForIdentifier:(long long)arg1;

@optional
- (void)lazyReference:(TSPLazyReference *)arg1 didCreateCopy:(TSPLazyReference *)arg2;
@end

