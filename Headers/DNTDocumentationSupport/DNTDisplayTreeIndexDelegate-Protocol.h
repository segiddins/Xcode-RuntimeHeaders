//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DNTDocumentationSupport/DNTDisplayTreeIndexDeserializationDelegate-Protocol.h>
#import <DNTDocumentationSupport/NSObject-Protocol.h>

@class NSError;

@protocol DNTDisplayTreeIndexDelegate <NSObject, DNTDisplayTreeIndexDeserializationDelegate>

@optional
- (void)indexDidFinishLoading;
- (void)indexFailedLoadingWithError:(NSError *)arg1;
@end
