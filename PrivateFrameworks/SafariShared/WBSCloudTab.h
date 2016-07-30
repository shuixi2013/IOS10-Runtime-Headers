//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/NSCopying-Protocol.h>

@class NSDictionary, NSString, NSURL, NSUUID;

@interface WBSCloudTab : NSObject <NSCopying>
{
    _Bool _isShowingReader;
    _Bool _pinned;
    NSDictionary *_readerScrollPositionDictionary;
    NSString *_title;
    NSURL *_url;
    NSUUID *_uuid;
}

+ (id)_dictionaryWithURL:(id)arg1 uuid:(id)arg2 title:(id)arg3 isShowingReader:(_Bool)arg4 readerScrollPosition:(id)arg5 isPinned:(_Bool)arg6;
@property(nonatomic, getter=isPinned) _Bool pinned; // @synthesize pinned=_pinned;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSDictionary *readerScrollPositionDictionary; // @synthesize readerScrollPositionDictionary=_readerScrollPositionDictionary;
@property(nonatomic) _Bool isShowingReader; // @synthesize isShowingReader=_isShowingReader;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentationForUserActivityUserInfo;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (_Bool)hasSameUUIDAndURLAsTab:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithURL:(id)arg1 uuid:(id)arg2 title:(id)arg3 isShowingReader:(_Bool)arg4 readerScrollPosition:(id)arg5 isPinned:(_Bool)arg6;
- (id)initWithURL:(id)arg1 uuid:(id)arg2 title:(id)arg3 isShowingReader:(_Bool)arg4 readerScrollPosition:(id)arg5;
- (id)initWithDictionaryFromUserActivityUserInfo:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

