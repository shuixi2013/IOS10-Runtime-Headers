//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaRemote/MRProtocolMessage.h>

@class MRVirtualVoiceInputDeviceDescriptor;

@interface MRRegisterVoiceInputDeviceMessage : MRProtocolMessage
{
    MRVirtualVoiceInputDeviceDescriptor *_descriptor;
}

@property(readonly, nonatomic) MRVirtualVoiceInputDeviceDescriptor *descriptor;
- (unsigned long long)type;
- (void)dealloc;
- (id)initWithDescriptor:(id)arg1;

@end

