//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSString;

@protocol MNInstructionContents
@property(nonatomic) _Bool suppressFallback;
@property(readonly, nonatomic) _Bool hasServerContent;
@property(retain, nonatomic) NSString *roadName;
@property(nonatomic) _Bool suppressNames;
@property(readonly, nonatomic) long long context;
- (NSArray *)instructionForStage:(unsigned long long)arg1 distance:(double)arg2;
- (NSArray *)instructionWithShorterAlternatives;
- (NSString *)instruction;
- (NSString *)stringForDistance:(double)arg1 abbreviateUnits:(_Bool)arg2 detail:(long long)arg3;
@end

