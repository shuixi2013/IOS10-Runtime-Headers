//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSString;

@interface _MRCommandInfoProtobuf : PBCodable <NSCopying>
{
    struct {
        double *list;
        unsigned long long count;
        unsigned long long size;
    } _preferredIntervals;
    struct {
        float *list;
        unsigned long long count;
        unsigned long long size;
    } _supportedRates;
    int _canScrub;
    int _command;
    NSString *_localizedShortTitle;
    NSString *_localizedTitle;
    float _maximumRating;
    float _minimumRating;
    int _numAvailableSkips;
    int _presentationStyle;
    int _repeatMode;
    int _shuffleMode;
    int _skipFrequency;
    int _skipInterval;
    _Bool _active;
    _Bool _enabled;
    struct {
        unsigned int canScrub:1;
        unsigned int command:1;
        unsigned int maximumRating:1;
        unsigned int minimumRating:1;
        unsigned int numAvailableSkips:1;
        unsigned int presentationStyle:1;
        unsigned int repeatMode:1;
        unsigned int shuffleMode:1;
        unsigned int skipFrequency:1;
        unsigned int skipInterval:1;
        unsigned int active:1;
        unsigned int enabled:1;
    } _has;
}

@property(nonatomic) int canScrub; // @synthesize canScrub=_canScrub;
@property(nonatomic) int skipFrequency; // @synthesize skipFrequency=_skipFrequency;
@property(nonatomic) int numAvailableSkips; // @synthesize numAvailableSkips=_numAvailableSkips;
@property(nonatomic) int skipInterval; // @synthesize skipInterval=_skipInterval;
@property(nonatomic) int presentationStyle; // @synthesize presentationStyle=_presentationStyle;
@property(nonatomic) float maximumRating; // @synthesize maximumRating=_maximumRating;
@property(nonatomic) float minimumRating; // @synthesize minimumRating=_minimumRating;
@property(retain, nonatomic) NSString *localizedShortTitle; // @synthesize localizedShortTitle=_localizedShortTitle;
@property(retain, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasCanScrub;
@property(nonatomic) _Bool hasSkipFrequency;
@property(nonatomic) _Bool hasNumAvailableSkips;
@property(nonatomic) _Bool hasSkipInterval;
@property(nonatomic) _Bool hasPresentationStyle;
- (int)StringAsShuffleMode:(id)arg1;
- (id)shuffleModeAsString:(int)arg1;
@property(nonatomic) _Bool hasShuffleMode;
@property(nonatomic) int shuffleMode; // @synthesize shuffleMode=_shuffleMode;
- (int)StringAsRepeatMode:(id)arg1;
- (id)repeatModeAsString:(int)arg1;
@property(nonatomic) _Bool hasRepeatMode;
@property(nonatomic) int repeatMode; // @synthesize repeatMode=_repeatMode;
- (void)setSupportedRates:(float *)arg1 count:(unsigned long long)arg2;
- (float)supportedRateAtIndex:(unsigned long long)arg1;
- (void)addSupportedRate:(float)arg1;
- (void)clearSupportedRates;
@property(readonly, nonatomic) float *supportedRates;
@property(readonly, nonatomic) unsigned long long supportedRatesCount;
@property(nonatomic) _Bool hasMaximumRating;
@property(nonatomic) _Bool hasMinimumRating;
@property(readonly, nonatomic) _Bool hasLocalizedShortTitle;
@property(readonly, nonatomic) _Bool hasLocalizedTitle;
- (void)setPreferredIntervals:(double *)arg1 count:(unsigned long long)arg2;
- (double)preferredIntervalAtIndex:(unsigned long long)arg1;
- (void)addPreferredInterval:(double)arg1;
- (void)clearPreferredIntervals;
@property(readonly, nonatomic) double *preferredIntervals;
@property(readonly, nonatomic) unsigned long long preferredIntervalsCount;
@property(nonatomic) _Bool hasActive;
@property(nonatomic) _Bool hasEnabled;
- (int)StringAsCommand:(id)arg1;
- (id)commandAsString:(int)arg1;
@property(nonatomic) _Bool hasCommand;
@property(nonatomic) int command; // @synthesize command=_command;
- (void)dealloc;

@end

