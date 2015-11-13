//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIStoryboardSegueTemplate.h>

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBDocumentArchiving-Protocol.h>
#import <IDEInterfaceBuilderCocoaTouchIntegration/NSCoding-Protocol.h>

@class IBUIBarButtonItem, IBUIView, NSArray, NSString;

@interface IBUIStoryboardPopoverSegueTemplate : IBUIStoryboardSegueTemplate <IBDocumentArchiving, NSCoding>
{
    unsigned long long permittedArrowDirections;
    NSArray *passthroughViews;
    IBUIView *anchorView;
    IBUIBarButtonItem *anchorBarButtonItem;
}

@property(retain) IBUIBarButtonItem *anchorBarButtonItem; // @synthesize anchorBarButtonItem;
@property(retain) IBUIView *anchorView; // @synthesize anchorView;
@property(copy) NSArray *passthroughViews; // @synthesize passthroughViews;
@property unsigned long long permittedArrowDirections; // @synthesize permittedArrowDirections;
- (void).cxx_destruct;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
