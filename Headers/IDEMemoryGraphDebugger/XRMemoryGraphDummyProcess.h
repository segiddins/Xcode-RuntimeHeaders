//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDEDebugProcess.h>

@class NSString, XRMemoryGraphDebuggerDocument;

@interface XRMemoryGraphDummyProcess : IDEDebugProcess
{
    NSString *_memgraphFileName;
    XRMemoryGraphDebuggerDocument *_document;
}

- (void).cxx_destruct;
@property(retain, nonatomic) XRMemoryGraphDebuggerDocument *document; // @synthesize document=_document;
@property(readonly, nonatomic) NSString *memgraphFileName; // @synthesize memgraphFileName=_memgraphFileName;
- (void)primitiveInvalidate;
- (id)navigableItem_documentType;
- (id)navigableItem_contentDocumentLocation;
- (id)navigableItem_fileReference;
- (id)rawName;
- (id)image;
- (id)contentDelegateUIExtensionIdentifier;
- (id)initWithDebugSession:(id)arg1 document:(id)arg2 memgraphFileURL:(id)arg3;

@end

