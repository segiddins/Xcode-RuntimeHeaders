//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTextView.h>

@class DVTTextDocumentLocation, NSArray;

@interface IDEiPhoneConsoleTextView : NSTextView
{
    NSArray *_foundLocations;
    DVTTextDocumentLocation *_currentFoundLocation;
}

@property(copy) DVTTextDocumentLocation *currentFoundLocation; // @synthesize currentFoundLocation=_currentFoundLocation;
@property(copy, nonatomic) NSArray *foundLocations; // @synthesize foundLocations=_foundLocations;
- (void).cxx_destruct;
- (void)drawFoundLocationsInRange:(struct _NSRange)arg1;

@end

