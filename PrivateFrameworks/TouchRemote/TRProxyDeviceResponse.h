//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TouchRemote/TRNearbyServicesCommunicationAbstractMessage.h>

@class AKDevice;

@interface TRProxyDeviceResponse : TRNearbyServicesCommunicationAbstractMessage
{
    AKDevice *_device;
}

@property(retain, nonatomic) AKDevice *device; // @synthesize device=_device;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

