//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

@interface SKProductsResponse : NSObject
{
    id _internal;
}

- (void)_setProducts:(id)arg1;
- (void)_setInvalidIdentifiers:(id)arg1;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
@property(readonly, nonatomic) NSArray *products;
@property(readonly, nonatomic) NSArray *invalidProductIdentifiers;
- (void)dealloc;
- (id)init;

@end

