//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSString;

@interface DVTInvalidDataIndicatorView : NSView
{
    NSString *_alertMessage;
    NSString *_alertInformativeText;
}

- (void).cxx_destruct;
@property(copy) NSString *alertInformativeText; // @synthesize alertInformativeText=_alertInformativeText;
@property(copy) NSString *alertMessage; // @synthesize alertMessage=_alertMessage;
- (void)drawRect:(struct CGRect)arg1;
- (void)mouseUp:(id)arg1;

@end

