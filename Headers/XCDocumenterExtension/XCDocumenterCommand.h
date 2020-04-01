//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "XCSourceEditorCommand-Protocol.h"

@class NSString, VVDocumenter;

@interface XCDocumenterCommand : NSObject <XCSourceEditorCommand>
{
    VVDocumenter *_documenter;
}

@property(readonly) VVDocumenter *documenter; // @synthesize documenter=_documenter;
- (void).cxx_destruct;
- (void)performCommandWithInvocation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)line:(id)arg1 startsWith:(id)arg2;
- (id)documenterForInvocationFileType:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

