//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <vCard/CNVCardLine-Protocol.h>

@class NSString;
@protocol CNVCardLine, CNVCardLineSerialization;

@protocol CNVCardParameterLine <CNVCardLine>
- (void)serializeValueWithStrategy:(id <CNVCardLineSerialization>)arg1;
- (_Bool)canSerializeWithStrategy:(id <CNVCardLineSerialization>)arg1;
- (void)addGroupedLine:(id <CNVCardLine>)arg1 withCounter:(long long *)arg2;
- (void)insertParameterWithName:(NSString *)arg1 value:(NSString *)arg2 atIndex:(unsigned long long)arg3;
- (void)addParameterWithName:(NSString *)arg1 value:(NSString *)arg2;
@end

