//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Radio/RadioSyncRequest.h>

@class NSArray, NSString, RadioStation;

@interface RadioUpdateStationRequest : RadioSyncRequest
{
    RadioStation *_station;
    NSString *_name;
    NSString *_stationDescription;
    NSArray *_seeds;
    long long _songMixType;
}

@property(nonatomic) long long songMixType; // @synthesize songMixType=_songMixType;
@property(copy, nonatomic) NSArray *seeds; // @synthesize seeds=_seeds;
@property(copy, nonatomic) NSString *stationDescription; // @synthesize stationDescription=_stationDescription;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)_updatedStationDictionary;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)changeList;
- (id)initWithStation:(id)arg1;
- (id)init;

@end
