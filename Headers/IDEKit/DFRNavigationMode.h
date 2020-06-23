//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSImage, NSString;

@interface DFRNavigationMode : NSObject
{
    NSString *_identifier;
    NSString *_title;
    NSImage *_backImage;
    CDUnknownBlockType _backAction;
    CDUnknownBlockType _backValidation;
    NSImage *_modeImage;
    CDUnknownBlockType _modeValidation;
    NSImage *_forwardImage;
    CDUnknownBlockType _forwardAction;
    CDUnknownBlockType _forwardValidation;
}

- (void).cxx_destruct;
@property(copy) CDUnknownBlockType forwardValidation; // @synthesize forwardValidation=_forwardValidation;
@property(copy) CDUnknownBlockType forwardAction; // @synthesize forwardAction=_forwardAction;
@property(copy) NSImage *forwardImage; // @synthesize forwardImage=_forwardImage;
@property(copy) CDUnknownBlockType modeValidation; // @synthesize modeValidation=_modeValidation;
@property(copy) NSImage *modeImage; // @synthesize modeImage=_modeImage;
@property(copy) CDUnknownBlockType backValidation; // @synthesize backValidation=_backValidation;
@property(copy) CDUnknownBlockType backAction; // @synthesize backAction=_backAction;
@property(copy) NSImage *backImage; // @synthesize backImage=_backImage;
@property(copy) NSString *title; // @synthesize title=_title;
@property(copy) NSString *identifier; // @synthesize identifier=_identifier;

@end

