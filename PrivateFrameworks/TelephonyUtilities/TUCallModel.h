//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <TelephonyUtilities/NSCopying-Protocol.h>
#import <TelephonyUtilities/NSSecureCoding-Protocol.h>

@interface TUCallModel : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _supportsHolding;
    _Bool _supportsGrouping;
    _Bool _supportsUngrouping;
    _Bool _supportsDTMF;
    _Bool _supportsUnambiguousMultiPartyState;
    _Bool _supportsAddCall;
    _Bool _supportsSendingToVoicemail;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool supportsSendingToVoicemail; // @synthesize supportsSendingToVoicemail=_supportsSendingToVoicemail;
@property(nonatomic) _Bool supportsAddCall; // @synthesize supportsAddCall=_supportsAddCall;
@property(nonatomic) _Bool supportsUnambiguousMultiPartyState; // @synthesize supportsUnambiguousMultiPartyState=_supportsUnambiguousMultiPartyState;
@property(nonatomic) _Bool supportsDTMF; // @synthesize supportsDTMF=_supportsDTMF;
@property(nonatomic) _Bool supportsUngrouping; // @synthesize supportsUngrouping=_supportsUngrouping;
@property(nonatomic) _Bool supportsGrouping; // @synthesize supportsGrouping=_supportsGrouping;
@property(nonatomic) _Bool supportsHolding; // @synthesize supportsHolding=_supportsHolding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end

