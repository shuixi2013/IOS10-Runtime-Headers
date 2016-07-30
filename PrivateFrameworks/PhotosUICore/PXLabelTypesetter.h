//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXObservable.h>

#import <PhotosUICore/PXMutableLabelTypesetter-Protocol.h>

@class NSArray, NSAttributedString;

@interface PXLabelTypesetter : PXObservable <PXMutableLabelTypesetter>
{
    _Bool _adjustsFontSizeToFitWidth;
    _Bool _allowTruncation;
    struct CGContext *_context;
    NSAttributedString *_attributedString;
    unsigned long long _maximumNumberOfLines;
    double _minimumScaleFactor;
    NSArray *_lines;
    struct CGRect _bounds;
}

@property(readonly, nonatomic) NSArray *lines; // @synthesize lines=_lines;
@property(nonatomic) _Bool allowTruncation; // @synthesize allowTruncation=_allowTruncation;
@property(nonatomic) double minimumScaleFactor; // @synthesize minimumScaleFactor=_minimumScaleFactor;
@property(nonatomic) _Bool adjustsFontSizeToFitWidth; // @synthesize adjustsFontSizeToFitWidth=_adjustsFontSizeToFitWidth;
@property(nonatomic) unsigned long long maximumNumberOfLines; // @synthesize maximumNumberOfLines=_maximumNumberOfLines;
@property(nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property(copy, nonatomic) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
@property(readonly, nonatomic) struct CGContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)_setLines:(id)arg1;
- (void)didPerformChanges;
- (id)mutableChangeObject;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (unsigned long long)_adjustCutoffLocation:(unsigned long long)arg1 forLineStartingAtIndex:(unsigned long long)arg2;
- (void)_updateLines;
- (id)initWithContext:(struct CGContext *)arg1;
- (id)init;

@end

