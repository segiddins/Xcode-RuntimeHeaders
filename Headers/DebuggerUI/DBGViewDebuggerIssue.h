//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DBGViewDebuggerDocument, DBGViewDebuggerDocumentLocation, DBGViewSurface, NSString;

@interface DBGViewDebuggerIssue : NSObject
{
    unsigned long long _issueType;
    DBGViewDebuggerDocument *_document;
    DBGViewDebuggerDocumentLocation *_documentLocation;
    NSString *_messageExcludingViewReference;
    NSString *_messageIncludingViewReference;
    DBGViewSurface *_affectedView;
}

- (void).cxx_destruct;
@property(readonly) DBGViewSurface *affectedView; // @synthesize affectedView=_affectedView;
@property(readonly) DBGViewDebuggerDocument *document; // @synthesize document=_document;
@property(readonly) unsigned long long issueType; // @synthesize issueType=_issueType;
- (id)messageIncludingReferenceToView:(BOOL)arg1;
@property(readonly) DBGViewDebuggerDocumentLocation *documentLocation;
- (id)initWithDocument:(id)arg1 affectedView:(id)arg2 issueType:(unsigned long long)arg3;

@end

