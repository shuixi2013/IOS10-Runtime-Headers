//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BRCDumper, NSString, PQLConnection;

@interface BRCDumpContext : NSObject
{
    long long _indentation;
    BRCDumper *_dumper;
    _Bool _liveDaemon;
    _Bool _onlyActiveStuff;
    struct __sFILE *_fp;
    PQLConnection *_db;
    NSString *_indentationBaseString;
}

+ (id)stringFromByteCount:(long long)arg1 context:(id)arg2;
+ (id)stringFromByteCount:(long long)arg1 showActualByteCount:(_Bool)arg2 suffix:(id)arg3 context:(id)arg4;
+ (id)stringFromInterval:(double)arg1 context:(id)arg2;
+ (id)stringFromDueStamp:(unsigned long long)arg1 now:(unsigned long long)arg2 allowsPast:(_Bool)arg3 context:(id)arg4;
+ (id)stringFromDueDate:(id)arg1 now:(id)arg2 allowsPast:(_Bool)arg3 context:(id)arg4;
+ (id)stringFromError:(id)arg1 context:(id)arg2;
+ (id)stringFromErrorString:(id)arg1 context:(id)arg2;
+ (id)stringFromOperationUUID:(unsigned char [16])arg1 context:(id)arg2;
+ (id)stringFromItemID:(id)arg1 context:(id)arg2;
+ (id)highlightedString:(id)arg1 type:(long long)arg2 context:(id)arg3;
+ (id)stringFromItemAsString:(id)arg1 context:(id)arg2;
+ (id)stringFromThrottleState:(int)arg1 context:(id)arg2;
@property(nonatomic) _Bool onlyActiveStuff; // @synthesize onlyActiveStuff=_onlyActiveStuff;
@property(nonatomic) _Bool liveDaemon; // @synthesize liveDaemon=_liveDaemon;
@property(retain, nonatomic) NSString *indentationBaseString; // @synthesize indentationBaseString=_indentationBaseString;
@property(readonly, nonatomic) PQLConnection *db; // @synthesize db=_db;
@property(readonly, nonatomic) struct __sFILE *fp; // @synthesize fp=_fp;
- (void).cxx_destruct;
- (void)popIndentation;
- (void)pushIndentation;
- (id)highlightedString:(id)arg1 type:(long long)arg2;
- (void)writeLineWithFormat:(id)arg1;
- (id)initWithDumper:(id)arg1;
- (id)initWithFile:(struct __sFILE *)arg1 db:(id)arg2;

@end

