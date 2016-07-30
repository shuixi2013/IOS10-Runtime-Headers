//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaServices/MSVOperation.h>

@class MPMediaLibrary, NSString;

@interface MPModelLibraryGlobalPlaylistImportChangeRequestOperation : MSVOperation
{
    _Bool _shouldLibraryAdd;
    NSString *_globalPlaylistID;
    MPMediaLibrary *_mediaLibrary;
    CDUnknownBlockType _responseHandler;
}

@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(nonatomic) _Bool shouldLibraryAdd; // @synthesize shouldLibraryAdd=_shouldLibraryAdd;
@property(retain, nonatomic) MPMediaLibrary *mediaLibrary; // @synthesize mediaLibrary=_mediaLibrary;
@property(copy, nonatomic) NSString *globalPlaylistID; // @synthesize globalPlaylistID=_globalPlaylistID;
- (void).cxx_destruct;
- (void)execute;

@end

