//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CorePDF/CPChunk.h>

@class CPParagraph, CPTextLine;
@protocol CPGraphicUser;

@interface CPGraphicObject : CPChunk
{
    unsigned int clipIndex;
    struct CGRect renderedBounds;
    _Bool isInZoneBorder;
    int zoneGraphicType;
    CPTextLine *anchoringTextLine;
    CPParagraph *anchoringParagraph;
    CPChunk<CPGraphicUser> *user;
}

@property(retain, nonatomic) CPParagraph *anchoringParagraph; // @synthesize anchoringParagraph;
@property(nonatomic) unsigned int clipIndex; // @synthesize clipIndex;
- (id)user;
- (void)setUser:(id)arg1;
- (id)anchoringTextLine;
- (void)setAnchoringTextLine:(id)arg1;
- (void)setZoneGraphicType:(int)arg1;
- (int)zoneGraphicType;
- (void)setIsInZoneBorder:(_Bool)arg1;
- (_Bool)isInZoneBorder;
- (_Bool)isIndivisible;
- (_Bool)isVisible;
- (_Bool)canBeContainer;
- (_Bool)isNarrow;
- (unsigned short)unicode;
- (struct CGRect)renderedBounds;
- (void)dealloc;
- (id)init;

@end

