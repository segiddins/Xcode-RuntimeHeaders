//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@interface _TtC18IDESourceControlUI23DocumentExportOperation : NSOperation
{
    // Error parsing type: , name: document
    // Error parsing type: , name: primaryDocumentLocation
    // Error parsing type: , name: secondaryDocumentLocation
    // Error parsing type: , name: primaryDocumentExportOperation
    // Error parsing type: , name: secondaryDocumentExportOperation
    // Error parsing type: , name: _isFinished
    // Error parsing type: , name: _isExecuting
    // Error parsing type: , name: primaryDocumentURL
    // Error parsing type: , name: primaryDocumentExportError
    // Error parsing type: , name: secondaryDocumentURL
    // Error parsing type: , name: secondaryDocumentExportError
}

+ (id)keyPathsForValuesAffectingIsExecuting;
+ (id)keyPathsForValuesAffectingIsFinished;
- (void).cxx_destruct;
- (id)init;
- (void)cancel;
- (BOOL)isConcurrent;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (void)start;
- (BOOL)isAsynchronous;
- (void)main;
@property(nonatomic) BOOL _isExecuting; // @synthesize _isExecuting;
@property(nonatomic) BOOL _isFinished; // @synthesize _isFinished;

// Remaining properties
@property(nonatomic, readonly) BOOL asynchronous;
@property(nonatomic, readonly) BOOL concurrent;
@property(nonatomic, readonly) BOOL executing;
@property(nonatomic, readonly) BOOL finished;

@end

