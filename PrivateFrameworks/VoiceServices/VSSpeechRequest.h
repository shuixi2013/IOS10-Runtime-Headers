//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <VoiceServices/NSSecureCoding-Protocol.h>

@class NSAttributedString, NSString, NSURL;

@interface VSSpeechRequest : NSObject <NSSecureCoding>
{
    _Bool _useCustomVoice;
    _Bool _maintainsInput;
    _Bool _audioSessionIDIsValid;
    unsigned int _audioSessionID;
    unsigned int _audioQueueFlags;
    NSString *_text;
    NSAttributedString *_attributedText;
    NSString *_languageCode;
    NSString *_voiceName;
    long long _footprint;
    long long _voiceType;
    long long _gender;
    NSURL *_outputPath;
    double _rate;
    double _pitch;
    double _volume;
    NSURL *_resourceListURL;
    NSURL *_resourceSearchPathURL;
    CDUnknownBlockType _stopHandler;
    CDUnknownBlockType _pauseHandler;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) CDUnknownBlockType pauseHandler; // @synthesize pauseHandler=_pauseHandler;
@property(copy, nonatomic) CDUnknownBlockType stopHandler; // @synthesize stopHandler=_stopHandler;
@property(copy, nonatomic) NSURL *resourceSearchPathURL; // @synthesize resourceSearchPathURL=_resourceSearchPathURL;
@property(copy, nonatomic) NSURL *resourceListURL; // @synthesize resourceListURL=_resourceListURL;
@property(nonatomic) unsigned int audioQueueFlags; // @synthesize audioQueueFlags=_audioQueueFlags;
@property(nonatomic) unsigned int audioSessionID; // @synthesize audioSessionID=_audioSessionID;
@property(nonatomic) _Bool audioSessionIDIsValid; // @synthesize audioSessionIDIsValid=_audioSessionIDIsValid;
@property(nonatomic) _Bool maintainsInput; // @synthesize maintainsInput=_maintainsInput;
@property(nonatomic) double volume; // @synthesize volume=_volume;
@property(nonatomic) double pitch; // @synthesize pitch=_pitch;
@property(nonatomic) double rate; // @synthesize rate=_rate;
@property(copy, nonatomic) NSURL *outputPath; // @synthesize outputPath=_outputPath;
@property(nonatomic) long long gender; // @synthesize gender=_gender;
@property(nonatomic) long long voiceType; // @synthesize voiceType=_voiceType;
@property(nonatomic) _Bool useCustomVoice; // @synthesize useCustomVoice=_useCustomVoice;
@property(nonatomic) long long footprint; // @synthesize footprint=_footprint;
@property(copy, nonatomic) NSString *voiceName; // @synthesize voiceName=_voiceName;
@property(copy, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property(copy, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;

@end

