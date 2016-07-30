//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreCDPUI/CDPPassphraseEntryPane.h>

@class CDPDevice, CDPRemoteValidationEscapeOffer, UIButton;

@interface CDPRemoteSecretEntryPane : CDPPassphraseEntryPane
{
    UIButton *_footerButton;
    CDPRemoteValidationEscapeOffer *_escapeOffer;
    unsigned long long _remoteSecretType;
    CDPDevice *_device;
}

@property(retain, nonatomic) CDPDevice *device; // @synthesize device=_device;
@property(nonatomic) unsigned long long remoteSecretType; // @synthesize remoteSecretType=_remoteSecretType;
@property(retain, nonatomic) CDPRemoteValidationEscapeOffer *escapeOffer; // @synthesize escapeOffer=_escapeOffer;
- (void).cxx_destruct;
- (id)_headerStringForDevice:(id)arg1 localDeviceClass:(id)arg2;
- (void)setTitle:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

