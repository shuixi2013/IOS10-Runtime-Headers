//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

@interface PKPaperList : NSObject
{
    _Bool _hasMediaReady;
    NSArray *_papers;
    NSArray *_simplexPapers;
    NSArray *_duplexPapers;
    NSArray *_photoPapers;
    NSArray *_rolls;
}

+ (id)mediaDictFromAttrs:(struct _ipp_s *)arg1;
+ (id)paperListWithTXTRecord:(id)arg1;
+ (id)paperListWithAttrs:(struct _ipp_s *)arg1;
@property(retain, nonatomic) NSArray *rolls; // @synthesize rolls=_rolls;
@property(retain) NSArray *photoPapers; // @synthesize photoPapers=_photoPapers;
@property(retain) NSArray *duplexPapers; // @synthesize duplexPapers=_duplexPapers;
@property(retain) NSArray *simplexPapers; // @synthesize simplexPapers=_simplexPapers;
@property(retain) NSArray *papers; // @synthesize papers=_papers;
@property _Bool hasMediaReady; // @synthesize hasMediaReady=_hasMediaReady;
- (id)conjureMediaFromTXT:(id)arg1;
- (long long)jobTypesSupported:(id)arg1;
- (id)filterPapers:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)filterUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)hasMatchingLoadedRoll:(id)arg1;
- (id)matchPaper:(id)arg1 inList:(id)arg2;
- (id)matchPaper:(id)arg1;
- (id)availableRollPapersPreferBorderless:(_Bool)arg1;
- (id)rollReadyPaperListForPhotoWithContentSize:(struct CGSize)arg1;
- (id)rollReadyPaperListForDocumentWithContentSize:(struct CGSize)arg1 scaleUp:(_Bool)arg2;
- (id)rollReadyPaperListWithContentSize:(struct CGSize)arg1 forPhoto:(_Bool)arg2;
- (id)tersePaperFrom:(id)arg1 withMediaInfo:(id)arg2;
- (id)tersePaperFrom:(id)arg1 withRequest:(id)arg2;
- (void)categorizePapers:(id)arg1;
- (void)addPaperSet:(id *)arg1 withCount:(int)arg2 toArrays:(id *)arg3;
- (id)matchedPaper:(id)arg1 preferBorderless:(_Bool)arg2 withDuplexMode:(id)arg3 didMatch:(_Bool *)arg4;
- (id)papersForDocumentWithSize:(struct CGSize)arg1 scaleUpOnRoll:(_Bool)arg2 andDuplex:(_Bool)arg3;
- (id)papersForPhotoWithSize:(struct CGSize)arg1;
- (id)paperListForDuplexMode:(id)arg1;
- (_Bool)isPaperReady:(id)arg1;
- (id)adjustMargins:(id)arg1 forDuplex:(id)arg2;
- (void)dealloc;
- (id)initWithTXTRecord:(id)arg1;
- (id)initWithAttrs:(struct _ipp_s *)arg1;

@end

