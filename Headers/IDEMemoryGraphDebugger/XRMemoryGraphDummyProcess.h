//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEDebugProcess.h>

@class NSString, XRMemoryGraphDebuggerDocument;

@interface XRMemoryGraphDummyProcess : IDEDebugProcess
{
    NSString *_memgraphFileName;
    XRMemoryGraphDebuggerDocument *_document;
}

@property(retain, nonatomic) XRMemoryGraphDebuggerDocument *document; // @synthesize document=_document;
@property(readonly, nonatomic) NSString *memgraphFileName; // @synthesize memgraphFileName=_memgraphFileName;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (id)navigableItem_documentType;
- (id)navigableItem_contentDocumentLocation;
- (id)navigableItem_fileReference;
- (id)rawName;
- (id)image;
- (id)contentDelegateUIExtensionIdentifier;
- (id)initWithDebugSession:(id)arg1 document:(id)arg2 memgraphFileURL:(id)arg3;

@end

