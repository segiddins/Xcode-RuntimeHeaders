//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTTextDocumentLocation, NSString;

@interface IDESourceKitTest : NSObject
{
    DVTTextDocumentLocation *_location;
    NSString *_parentClassName;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *parentClassName; // @synthesize parentClassName=_parentClassName;
@property(readonly) DVTTextDocumentLocation *location; // @synthesize location=_location;
- (id)initWithLocation:(id)arg1 parentClassName:(id)arg2;

@end

