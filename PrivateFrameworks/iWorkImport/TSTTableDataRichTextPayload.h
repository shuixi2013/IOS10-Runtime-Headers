//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSTTableDataObject.h>

@class TSTRichTextPayload, TSWPStorage;

__attribute__((visibility("hidden")))
@interface TSTTableDataRichTextPayload : TSTTableDataObject
{
    TSTRichTextPayload *mPayload;
}

@property(readonly, nonatomic) TSTRichTextPayload *richTextPayload; // @synthesize richTextPayload=mPayload;
@property(readonly, nonatomic) TSWPStorage *richTextStorage;
- (void)dealloc;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initObjectWithRichTextPayload:(id)arg1 refCount:(unsigned int)arg2;

@end

