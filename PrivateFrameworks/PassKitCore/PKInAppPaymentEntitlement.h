//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface PKInAppPaymentEntitlement : NSObject
{
    NSArray *_merchantIdentifiers;
    _Bool _ignoreMerchantIdentifiers;
}

@property(readonly, nonatomic) _Bool ignoreMerchantIdentifiers; // @synthesize ignoreMerchantIdentifiers=_ignoreMerchantIdentifiers;
- (void).cxx_destruct;
- (void)_probeEntitlementsWithToken:(CDStruct_6ad76789)arg1;
@property(readonly, nonatomic) _Bool hasMerchantIdentifiers;
- (_Bool)hasMerchantIdentifier:(id)arg1;
- (id)initWithToken:(CDStruct_6ad76789)arg1;

@end

