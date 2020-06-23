//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTViewControllerKit/DVTViewController.h>

@class IBDocument, IBSourceCodeConnectionContext;

@interface IBSourceCodeConnectionPopUpOptionsViewController : DVTViewController
{
    BOOL _connectionContextConnectionIsValid;
    IBSourceCodeConnectionContext *_connectionContext;
    IBDocument *_document;
}

@property BOOL connectionContextConnectionIsValid; // @synthesize connectionContextConnectionIsValid=_connectionContextConnectionIsValid;
@property(readonly) IBDocument *document; // @synthesize document=_document;
@property(readonly) IBSourceCodeConnectionContext *connectionContext; // @synthesize connectionContext=_connectionContext;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)didCancelInsertingRepresentedConnectionContext;
- (void)willInsertRepresentedConnectionContext;
- (id)initWithSourceCodeConnectionContext:(id)arg1 document:(id)arg2;

@end

