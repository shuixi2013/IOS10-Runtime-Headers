//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CKDPCSIdentityWrapper : NSObject
{
    NSString *_identityString;
    struct _PCSIdentitySetData *_identitySet;
    NSString *_dsid;
}

@property(readonly, nonatomic) NSString *dsid; // @synthesize dsid=_dsid;
@property(readonly, nonatomic) struct _PCSIdentitySetData *identitySet; // @synthesize identitySet=_identitySet;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *identityString; // @synthesize identityString=_identityString;
- (void)dealloc;
- (id)initWithIdentitySet:(struct _PCSIdentitySetData *)arg1 dsid:(id)arg2;

@end

