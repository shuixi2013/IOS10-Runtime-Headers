//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FuseUI/MusicEntityViewContentDescriptor.h>

@class MusicEntityViewContentArtworkDescriptor, MusicEntityViewContentTextDescriptor, NSArray, UIColor;

@interface MusicEntityViewTracklistItemContentDescriptor : MusicEntityViewContentDescriptor
{
    _Bool _wantsMediaTypeImage;
    _Bool _indentDetailText;
    NSArray *_detailTextDescriptors;
    MusicEntityViewContentTextDescriptor *_leadingTextDescriptor;
    MusicEntityViewContentTextDescriptor *_trailingTextDescriptor;
    MusicEntityViewContentArtworkDescriptor *_trailingAccessoryArtworkDescriptor;
    UIColor *_mediaTypeTintColor;
}

+ (id)tableViewCellReuseIdentifier;
+ (Class)tableViewCellClass;
@property(nonatomic) _Bool indentDetailText; // @synthesize indentDetailText=_indentDetailText;
@property(nonatomic) _Bool wantsMediaTypeImage; // @synthesize wantsMediaTypeImage=_wantsMediaTypeImage;
@property(retain, nonatomic) UIColor *mediaTypeTintColor; // @synthesize mediaTypeTintColor=_mediaTypeTintColor;
@property(retain, nonatomic) MusicEntityViewContentArtworkDescriptor *trailingAccessoryArtworkDescriptor; // @synthesize trailingAccessoryArtworkDescriptor=_trailingAccessoryArtworkDescriptor;
@property(retain, nonatomic) MusicEntityViewContentTextDescriptor *trailingTextDescriptor; // @synthesize trailingTextDescriptor=_trailingTextDescriptor;
@property(retain, nonatomic) MusicEntityViewContentTextDescriptor *leadingTextDescriptor; // @synthesize leadingTextDescriptor=_leadingTextDescriptor;
@property(copy, nonatomic) NSArray *detailTextDescriptors; // @synthesize detailTextDescriptors=_detailTextDescriptors;
- (void).cxx_destruct;
- (id)textDescriptors;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

