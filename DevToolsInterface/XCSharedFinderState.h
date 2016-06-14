//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface XCSharedFinderState : NSObject
{
    NSString *_findString;
    NSString *_replaceString;
}

+ (id)sharedFinderState;
+ (void)_setFindPasteboardStringValue:(id)arg1;
+ (id)_findPasteboardStringValue;
+ (void)initialize;
@property(copy) NSString *replaceString;
@property(copy) NSString *findString;
- (void)_applicationDidBecomeActive:(id)arg1;
@property BOOL ignoresCase;
@property int matchStyle;
- (void)dealloc;
- (id)initWithFindString:(id)arg1;

@end

