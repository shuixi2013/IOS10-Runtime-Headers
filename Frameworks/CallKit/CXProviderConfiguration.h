//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CallKit/CXCopying-Protocol.h>
#import <CallKit/NSCopying-Protocol.h>
#import <CallKit/NSSecureCoding-Protocol.h>

@class NSArray, NSString, NSURL;

@interface CXProviderConfiguration : NSObject <NSSecureCoding, CXCopying, NSCopying>
{
    _Bool _supportsVideo;
    _Bool _supportsAudioOnly;
    _Bool _supportsEmergency;
    _Bool _supportsVoicemail;
    _Bool _hasRestrictionsInRetailEnvironment;
    unsigned int _audioSessionID;
    NSString *_localizedName;
    unsigned long long _maximumCallGroups;
    unsigned long long _maximumCallsPerCallGroup;
    NSArray *_emergencyNumbers;
    NSArray *_handoffIdentifiers;
    NSURL *_ringtoneSoundURL;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool hasRestrictionsInRetailEnvironment; // @synthesize hasRestrictionsInRetailEnvironment=_hasRestrictionsInRetailEnvironment;
@property(nonatomic) _Bool supportsVoicemail; // @synthesize supportsVoicemail=_supportsVoicemail;
@property(nonatomic) _Bool supportsEmergency; // @synthesize supportsEmergency=_supportsEmergency;
@property(nonatomic) _Bool supportsAudioOnly; // @synthesize supportsAudioOnly=_supportsAudioOnly;
@property(copy, nonatomic) NSURL *ringtoneSoundURL; // @synthesize ringtoneSoundURL=_ringtoneSoundURL;
@property(copy, nonatomic) NSArray *handoffIdentifiers; // @synthesize handoffIdentifiers=_handoffIdentifiers;
@property(copy, nonatomic) NSArray *emergencyNumbers; // @synthesize emergencyNumbers=_emergencyNumbers;
@property(nonatomic) unsigned int audioSessionID; // @synthesize audioSessionID=_audioSessionID;
@property(nonatomic) _Bool supportsVideo; // @synthesize supportsVideo=_supportsVideo;
@property(nonatomic) unsigned long long maximumCallsPerCallGroup; // @synthesize maximumCallsPerCallGroup=_maximumCallsPerCallGroup;
@property(nonatomic) unsigned long long maximumCallGroups; // @synthesize maximumCallGroups=_maximumCallGroups;
@property(copy, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)updateCopy:(id)arg1 withZone:(struct _NSZone *)arg2;
- (id)sanitizedCopyWithZone:(struct _NSZone *)arg1;
- (id)sanitizedCopy;
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone *)arg2;
- (_Bool)supportsAudioAndVideo;
- (void)setSupportsAudioAndVideo:(_Bool)arg1;
@property(retain, nonatomic) NSString *ringtoneSound;
@property(readonly, copy) NSString *description;
- (id)initWithLocalizedName:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

