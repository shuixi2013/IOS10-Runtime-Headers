//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDCameraParameterSelectionBase.h>

@class HMDAudioCodecGroup, HMDAudioSampleRate, HMDBitRateSetting, HMDCameraAudioParameterCombination, HMDSelectedAudioParameters, HMDStreamingCapabilities, HMDSupportedAudioStreamConfiguration, HMDSupportedRTPConfiguration, NSArray, NSNumber;

@interface HMDCameraAudioParameterSelection : HMDCameraParameterSelectionBase
{
    HMDSupportedAudioStreamConfiguration *_supportedAudioStreamConfiguration;
    HMDSupportedRTPConfiguration *_rtpConfiguration;
    HMDSelectedAudioParameters *_selectedAudioParameters;
    HMDStreamingCapabilities *_streamingCapabilities;
    NSArray *_audioCodecsPreference;
    NSArray *_bitrateSettingsPreference;
    NSArray *_sampleRatesPreference;
    NSArray *_validAudioParameterCombinations;
    HMDAudioCodecGroup *_selectedCodecGroupType;
    HMDBitRateSetting *_selectedBitRateSetting;
    HMDAudioSampleRate *_selectedSampleRate;
    NSNumber *_selectedAudioChannelCount;
    HMDCameraAudioParameterCombination *_selectedAudioParameterCombination;
    NSNumber *_comfortNoiseSupported;
}

+ (id)logCategory;
@property(retain, nonatomic) NSNumber *comfortNoiseSupported; // @synthesize comfortNoiseSupported=_comfortNoiseSupported;
@property(retain, nonatomic) HMDCameraAudioParameterCombination *selectedAudioParameterCombination; // @synthesize selectedAudioParameterCombination=_selectedAudioParameterCombination;
@property(retain, nonatomic) NSNumber *selectedAudioChannelCount; // @synthesize selectedAudioChannelCount=_selectedAudioChannelCount;
@property(retain, nonatomic) HMDAudioSampleRate *selectedSampleRate; // @synthesize selectedSampleRate=_selectedSampleRate;
@property(retain, nonatomic) HMDBitRateSetting *selectedBitRateSetting; // @synthesize selectedBitRateSetting=_selectedBitRateSetting;
@property(retain, nonatomic) HMDAudioCodecGroup *selectedCodecGroupType; // @synthesize selectedCodecGroupType=_selectedCodecGroupType;
@property(readonly, nonatomic) NSArray *validAudioParameterCombinations; // @synthesize validAudioParameterCombinations=_validAudioParameterCombinations;
@property(readonly, nonatomic) NSArray *sampleRatesPreference; // @synthesize sampleRatesPreference=_sampleRatesPreference;
@property(readonly, nonatomic) NSArray *bitrateSettingsPreference; // @synthesize bitrateSettingsPreference=_bitrateSettingsPreference;
@property(readonly, nonatomic) NSArray *audioCodecsPreference; // @synthesize audioCodecsPreference=_audioCodecsPreference;
@property(readonly, nonatomic) HMDStreamingCapabilities *streamingCapabilities; // @synthesize streamingCapabilities=_streamingCapabilities;
@property(retain, nonatomic) HMDSelectedAudioParameters *selectedAudioParameters; // @synthesize selectedAudioParameters=_selectedAudioParameters;
@property(readonly, nonatomic) HMDSupportedRTPConfiguration *rtpConfiguration; // @synthesize rtpConfiguration=_rtpConfiguration;
@property(readonly, nonatomic) HMDSupportedAudioStreamConfiguration *supportedAudioStreamConfiguration; // @synthesize supportedAudioStreamConfiguration=_supportedAudioStreamConfiguration;
- (void).cxx_destruct;
- (void)_generateAllCombinations:(id)arg1;
- (id)createSelectedAudioParameters;
- (id)createSRTPParamters;
- (_Bool)_selectParametersFromCodec:(id)arg1 bitRateSettings:(id)arg2 sampleRates:(id)arg3 audioChannelCount:(id)arg4;
- (_Bool)selectAudioParameters;
- (id)logIdentifier;
- (id)initWithSessionID:(id)arg1 supportedAudioConfiguration:(id)arg2 supportedRTPConfiguration:(id)arg3 streamingCapabilities:(id)arg4;

@end

