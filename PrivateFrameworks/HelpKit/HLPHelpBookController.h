//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HelpKit/HLPRemoteDataController.h>

@class HLPHelpSectionItem, HLPURLImageCacheController, NSMutableDictionary, NSString, NSURL;

@interface HLPHelpBookController : HLPRemoteDataController
{
    _Bool _hasSectionIcon;
    long long _contentFormatVersion;
    NSMutableDictionary *_helpItemMap;
    NSString *_contentVersion;
    NSString *_copyrightText;
    NSString *_welcomeTopicIdentifier;
    NSString *_copyrightTopicIdentifier;
    NSURL *_helpBookURL;
    HLPHelpSectionItem *_rootSectionItem;
    HLPURLImageCacheController *_imageCacheController;
}

@property(retain, nonatomic) HLPURLImageCacheController *imageCacheController; // @synthesize imageCacheController=_imageCacheController;
@property(retain, nonatomic) HLPHelpSectionItem *rootSectionItem; // @synthesize rootSectionItem=_rootSectionItem;
@property(retain, nonatomic) NSURL *helpBookURL; // @synthesize helpBookURL=_helpBookURL;
@property(retain, nonatomic) NSString *copyrightTopicIdentifier; // @synthesize copyrightTopicIdentifier=_copyrightTopicIdentifier;
@property(retain, nonatomic) NSString *welcomeTopicIdentifier; // @synthesize welcomeTopicIdentifier=_welcomeTopicIdentifier;
@property(retain, nonatomic) NSString *copyrightText; // @synthesize copyrightText=_copyrightText;
@property(retain, nonatomic) NSString *contentVersion; // @synthesize contentVersion=_contentVersion;
@property(retain, nonatomic) NSMutableDictionary *helpItemMap; // @synthesize helpItemMap=_helpItemMap;
@property(nonatomic) _Bool hasSectionIcon; // @synthesize hasSectionIcon=_hasSectionIcon;
@property(nonatomic) long long contentFormatVersion; // @synthesize contentFormatVersion=_contentFormatVersion;
- (void).cxx_destruct;
- (id)welcomeTopicItem;
- (id)copyrightTopicItem;
- (id)helpItemForID:(id)arg1;
- (id)helpTopicItemForName:(id)arg1;
- (id)helpTopicItemForID:(id)arg1;
- (id)sectionsForChildrenIdentifiers:(id)arg1 level:(long long)arg2 parent:(id)arg3 sectionsMap:(id)arg4 topicsMap:(id)arg5;
- (void)processData:(id)arg1 formattedData:(id)arg2;
- (void)processFileURLWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic, getter=isSemanticHTML) _Bool semanticHTML; // @dynamic semanticHTML;
- (void)dealloc;

@end

