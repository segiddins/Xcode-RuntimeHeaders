//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError;

@interface DVTResponderErrorSheetContext : NSObject
{
    id _outerCompletionDelegate;
    SEL _outerCompletionSelector;
    void *_outerContext;
    NSError *_error;
}

@property(retain) NSError *error; // @synthesize error=_error;
@property void *outerContext; // @synthesize outerContext=_outerContext;
@property SEL outerCompletionSelector; // @synthesize outerCompletionSelector=_outerCompletionSelector;
@property(retain) id outerCompletionDelegate; // @synthesize outerCompletionDelegate=_outerCompletionDelegate;
- (void).cxx_destruct;

@end

