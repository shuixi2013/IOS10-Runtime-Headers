//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CorePDF/UIPDFMarkupAnnotation.h>

@interface UIPDFLinkAnnotation : UIPDFMarkupAnnotation
{
}

- (_Bool)recognizeGestures;
- (_Bool)shouldRecognizeTapOrPress:(struct CGPoint)arg1;
- (_Bool)quadPoints:(struct CGPDFArray *)arg1 within:(struct CGRect)arg2;
- (struct CGRect)linkRectangle;
- (unsigned long long)pageNumber;
- (id)url;
- (unsigned long long)getNamedDestination:(struct CGPDFDictionary *)arg1;
- (unsigned long long)getDestination:(struct CGPDFDictionary *)arg1;
- (id)newBaseURL;

@end

