//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBAutolayoutIssueResolvingViewController.h>

@class IBDocument, NSString;
@protocol IBCollection;

@interface IBAutolayoutMissingConstraintsResolvingViewController : IBAutolayoutIssueResolvingViewController
{
    id <IBCollection> _views;
    IBDocument *_document;
    NSString *_descriptionText;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(readonly, nonatomic) IBDocument *document; // @synthesize document=_document;
@property(readonly, nonatomic) id <IBCollection> views; // @synthesize views=_views;
- (void)resizeConstraints;
- (void)deleteConstraints;
- (void)confirmChanges;
- (void)primitiveInvalidate;
- (id)initWithViews:(id)arg1 document:(id)arg2;

@end

