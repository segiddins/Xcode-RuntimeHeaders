//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEKit/IDEEditorDocument.h>

#import <IDEPDFViewer/IDEDocumentStructureProviding-Protocol.h>

@class NSArray, NSString, PDFDocument;

@interface IDEPDFViewerDocument : IDEEditorDocument <IDEDocumentStructureProviding>
{
    PDFDocument *_pdfDocument;
}

+ (id)pdfNavigableForDocumentURL:(id)arg1 PDFOutline:(id)arg2;
+ (id)keyPathsForValuesAffectingIdeTopLevelStructureObjects;
@property(retain) PDFDocument *pdfDocument; // @synthesize pdfDocument=_pdfDocument;
- (void).cxx_destruct;
@property(readonly) NSArray *ideTopLevelStructureObjects;
- (id)dataOfType:(id)arg1 error:(id *)arg2;
- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

