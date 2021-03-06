//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface SPSearchResultSerializer : NSObject
{
    unsigned long long _byteVector;
    unsigned int _byteVectorCnt;
    unsigned int _byteVectorCapacity;
    NSMutableArray *_sections;
    Class _lastResultClass;
    _Bool _respondsToTitleUTF8String;
    _Bool _respondsToSubtitleUTF8String;
    _Bool _respondsToAuxiliaryTitleUTF8String;
    _Bool _respondsToAuxiliarySubtitleUTF8String;
    _Bool _respondsToSummaryUTF8String;
    _Bool _respondsToIdentifier;
    _Bool _respondsToURL;
    _Bool _respondsToBadgeValue;
    _Bool _inProc;
    _Bool _completed;
    _Bool _forForwarding;
}

@property(readonly, nonatomic) _Bool completed; // @synthesize completed=_completed;
- (void).cxx_destruct;
- (unsigned long long)byteVector;
- (unsigned int)byteVectorCount;
- (void)serialize;
- (_Bool)appendResult:(id)arg1;
- (_Bool)appendSection:(id)arg1;
- (id)getSections;
- (_Bool)lockedAppendResult:(id)arg1 toSection:(id)arg2;
- (unsigned long long)sectionCount;
- (id)_convertConformingResult:(id)arg1;
- (void)dealloc;
- (id)initWithInitialCapacity:(unsigned int)arg1;
- (id)initWithInitialCapacity:(unsigned int)arg1 inProc:(_Bool)arg2;
- (unsigned long long)_allocateSize:(unsigned long long)arg1;
- (id)init;

@end

