//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDateFormatter, NSFileHandle, NSMutableArray, NSMutableData, NSMutableString;

@interface MSVPropertyListEncoder : NSObject
{
    NSData *_arrayOpeningTagData;
    NSData *_arrayClosingTagData;
    NSData *_dictionaryOpeningTagData;
    NSData *_dictionaryClosingTagData;
    NSData *_keyOpeningTagData;
    NSData *_keyClosingTagData;
    NSData *_stringOpeningTagData;
    NSData *_stringClosingTagData;
    NSData *_dataOpeningTagData;
    NSData *_dataClosingTagData;
    NSData *_boolTrueTagData;
    NSData *_boolFalseTagData;
    NSFileHandle *_outputFileHandle;
    NSMutableData *_outputBuffer;
    NSDateFormatter *_dateFormatter;
    NSMutableArray *_containerStack;
    NSMutableString *_tabPrefix;
    NSData *_tabPrefixData;
}

@property(retain, nonatomic) NSData *tabPrefixData; // @synthesize tabPrefixData=_tabPrefixData;
@property(retain, nonatomic) NSMutableString *tabPrefix; // @synthesize tabPrefix=_tabPrefix;
@property(retain, nonatomic) NSMutableArray *containerStack; // @synthesize containerStack=_containerStack;
@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(retain, nonatomic) NSMutableData *outputBuffer; // @synthesize outputBuffer=_outputBuffer;
@property(retain, nonatomic) NSFileHandle *outputFileHandle; // @synthesize outputFileHandle=_outputFileHandle;
- (void).cxx_destruct;
- (void)_writeString:(id)arg1;
- (void)_writeDictionaryKey:(id)arg1;
- (void)_decrementTabPrefix;
- (void)_incrementTabPrefix;
- (void)_startDictionary;
- (void)_startArray;
- (void)_encodeData:(id)arg1;
- (void)_encodeDate:(id)arg1;
- (void)_encodeNumber:(id)arg1;
- (void)_encodeString:(id)arg1;
- (void)_addObject:(id)arg1;
- (void)_flushOutputBuffer;
- (void)_writeData:(id)arg1;
@property(readonly, nonatomic) NSData *boolFalseTagData; // @synthesize boolFalseTagData=_boolFalseTagData;
@property(readonly, nonatomic) NSData *boolTrueTagData; // @synthesize boolTrueTagData=_boolTrueTagData;
@property(readonly, nonatomic) NSData *dataClosingTagData; // @synthesize dataClosingTagData=_dataClosingTagData;
@property(readonly, nonatomic) NSData *dataOpeningTagData; // @synthesize dataOpeningTagData=_dataOpeningTagData;
@property(readonly, nonatomic) NSData *stringClosingTagData; // @synthesize stringClosingTagData=_stringClosingTagData;
@property(readonly, nonatomic) NSData *stringOpeningTagData; // @synthesize stringOpeningTagData=_stringOpeningTagData;
@property(readonly, nonatomic) NSData *keyClosingTagData; // @synthesize keyClosingTagData=_keyClosingTagData;
@property(readonly, nonatomic) NSData *keyOpeningTagData; // @synthesize keyOpeningTagData=_keyOpeningTagData;
@property(readonly, nonatomic) NSData *dictionaryClosingTagData; // @synthesize dictionaryClosingTagData=_dictionaryClosingTagData;
@property(readonly, nonatomic) NSData *dictionaryOpeningTagData; // @synthesize dictionaryOpeningTagData=_dictionaryOpeningTagData;
@property(readonly, nonatomic) NSData *arrayClosingTagData; // @synthesize arrayClosingTagData=_arrayClosingTagData;
@property(readonly, nonatomic) NSData *arrayOpeningTagData; // @synthesize arrayOpeningTagData=_arrayOpeningTagData;
- (void)close;
- (void)endDictionary;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)startDictionaryForKey:(id)arg1;
- (void)startDictionary;
- (void)endArray;
- (void)addObject:(id)arg1;
- (void)startArrayForKey:(id)arg1;
- (void)startArray;
- (id)init;
- (id)initWithOutputFileHandle:(id)arg1;

@end

