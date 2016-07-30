//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDCameraTLVBase.h>

#import <HomeKitDaemon/HMDCameraTLVCreateParse-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMDSelectedRTPParameters, HMDVideoAttributes, HMDVideoCodec, HMDVideoCodecParameters;

@interface HMDSelectedVideoParameters : HMDCameraTLVBase <HMDCameraTLVCreateParse, NSSecureCoding>
{
    HMDVideoCodec *_codec;
    HMDVideoCodecParameters *_codecParameters;
    HMDVideoAttributes *_videoAttributes;
    HMDSelectedRTPParameters *_rtpParameters;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) HMDSelectedRTPParameters *rtpParameters; // @synthesize rtpParameters=_rtpParameters;
@property(readonly, copy, nonatomic) HMDVideoAttributes *videoAttributes; // @synthesize videoAttributes=_videoAttributes;
@property(readonly, copy, nonatomic) HMDVideoCodecParameters *codecParameters; // @synthesize codecParameters=_codecParameters;
@property(readonly, copy, nonatomic) HMDVideoCodec *codec; // @synthesize codec=_codec;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)description:(id)arg1 indent:(id)arg2;
- (_Bool)_parseFromTLVData;
- (id)tlvData;
- (id)initWithCodec:(id)arg1 codecParameter:(id)arg2 attribute:(id)arg3 rtpParameter:(id)arg4;

@end

