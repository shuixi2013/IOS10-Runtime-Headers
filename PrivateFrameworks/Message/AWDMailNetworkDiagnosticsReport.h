//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Message/NSCopying-Protocol.h>

@class NSString;

@interface AWDMailNetworkDiagnosticsReport : PBCodable <NSCopying>
{
    unsigned long long _numActiveCalls;
    unsigned long long _numBackgroundWifiClients;
    unsigned long long _timestamp;
    NSString *_dataIndicator;
    int _dataInterface;
    unsigned int _reachabilityFlags;
    _Bool _cellData;
    _Bool _dnsEnabled;
    _Bool _roamingAllowed;
    _Bool _wifiEnabled;
    struct {
        unsigned int numActiveCalls:1;
        unsigned int numBackgroundWifiClients:1;
        unsigned int timestamp:1;
        unsigned int dataInterface:1;
        unsigned int reachabilityFlags:1;
        unsigned int cellData:1;
        unsigned int dnsEnabled:1;
        unsigned int roamingAllowed:1;
        unsigned int wifiEnabled:1;
    } _has;
}

@property(nonatomic) unsigned long long numBackgroundWifiClients; // @synthesize numBackgroundWifiClients=_numBackgroundWifiClients;
@property(nonatomic) unsigned long long numActiveCalls; // @synthesize numActiveCalls=_numActiveCalls;
@property(nonatomic) _Bool roamingAllowed; // @synthesize roamingAllowed=_roamingAllowed;
@property(retain, nonatomic) NSString *dataIndicator; // @synthesize dataIndicator=_dataIndicator;
@property(nonatomic) _Bool cellData; // @synthesize cellData=_cellData;
@property(nonatomic) int dataInterface; // @synthesize dataInterface=_dataInterface;
@property(nonatomic) _Bool wifiEnabled; // @synthesize wifiEnabled=_wifiEnabled;
@property(nonatomic) _Bool dnsEnabled; // @synthesize dnsEnabled=_dnsEnabled;
@property(nonatomic) unsigned int reachabilityFlags; // @synthesize reachabilityFlags=_reachabilityFlags;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasNumBackgroundWifiClients;
@property(nonatomic) _Bool hasNumActiveCalls;
@property(nonatomic) _Bool hasRoamingAllowed;
@property(readonly, nonatomic) _Bool hasDataIndicator;
@property(nonatomic) _Bool hasCellData;
@property(nonatomic) _Bool hasDataInterface;
@property(nonatomic) _Bool hasWifiEnabled;
@property(nonatomic) _Bool hasDnsEnabled;
@property(nonatomic) _Bool hasReachabilityFlags;
@property(nonatomic) _Bool hasTimestamp;

@end

