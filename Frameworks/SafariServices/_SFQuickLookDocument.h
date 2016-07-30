//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LSDocumentProxy, NSString, NSURL;

@interface _SFQuickLookDocument : NSObject
{
    LSDocumentProxy *_documentProxy;
    _Bool _needsQuickLookDocumentView;
    NSString *_savedPath;
    NSString *_savedPathWithProperExtension;
    _Bool _shouldDeleteSavedPath;
    _Bool _shouldDeleteSavedPathWithProperExtension;
    NSString *_fileName;
    NSString *_mimeType;
    NSString *_uti;
    NSURL *_sourceURL;
}

@property(copy, nonatomic) NSString *savedPathWithProperExtension; // @synthesize savedPathWithProperExtension=_savedPathWithProperExtension;
@property(retain, nonatomic) LSDocumentProxy *documentProxy; // @synthesize documentProxy=_documentProxy;
@property(retain, nonatomic) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;
@property(copy, nonatomic) NSString *uti; // @synthesize uti=_uti;
@property(copy, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
@property(copy, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(copy, nonatomic) NSString *savedPath; // @synthesize savedPath=_savedPath;
@property(readonly, nonatomic) _Bool needsQuickLookDocumentView; // @synthesize needsQuickLookDocumentView=_needsQuickLookDocumentView;
- (void).cxx_destruct;
- (void)addQuickLookPrintSettingsToPrintInfo:(id)arg1;
- (void)setSavedPathWithProperExtension:(id)arg1 shouldDelete:(_Bool)arg2;
- (void)setSavedPath:(id)arg1 shouldDelete:(_Bool)arg2;
@property(readonly, copy, nonatomic) NSString *localizedType;
- (void)_deleteSavedPathWithProperExtensionIfNecessary;
- (void)_deleteSavedPathIfNecessary;
- (void)dealloc;
- (id)initWithFileName:(id)arg1 mimeType:(id)arg2 uti:(id)arg3 needsQuickLookDocumentView:(_Bool)arg4;

@end

