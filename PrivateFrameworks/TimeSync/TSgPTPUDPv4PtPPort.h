//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TimeSync/TSgPTPFDPtPPort.h>

@class NSString;

@interface TSgPTPUDPv4PtPPort : TSgPTPFDPtPPort
{
    NSString *_interfaceName;
}

+ (id)diagnosticDescriptionForService:(unsigned int)arg1 withIndent:(id)arg2;
+ (id)iokitMatchingDictionaryForInterfaceName:(id)arg1 andIPv4Address:(unsigned int)arg2;
@property(readonly, copy, nonatomic) NSString *interfaceName; // @synthesize interfaceName=_interfaceName;
- (void)dealloc;
- (id)initWithInterfaceName:(id)arg1 andIPv4Address:(unsigned int)arg2;
- (id)initWithMatchingDictionary:(id)arg1;

@end

