//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface XCSCodeCoverageKeyPath : NSObject
{
    NSString *_integrationID;
    NSString *_targetTitle;
    NSString *_fileTitle;
    NSString *_methodTitle;
    NSString *_deviceTitle;
}

@property(copy, nonatomic) NSString *deviceTitle; // @synthesize deviceTitle=_deviceTitle;
@property(copy, nonatomic) NSString *methodTitle; // @synthesize methodTitle=_methodTitle;
@property(copy, nonatomic) NSString *fileTitle; // @synthesize fileTitle=_fileTitle;
@property(copy, nonatomic) NSString *targetTitle; // @synthesize targetTitle=_targetTitle;
@property(copy, nonatomic) NSString *integrationID; // @synthesize integrationID=_integrationID;
- (void).cxx_destruct;
- (BOOL)_validateWithIntegrationID:(id)arg1 targetTitle:(id)arg2 fileTitle:(id)arg3 methodTitle:(id)arg4 deviceTitle:(id)arg5 validationErrors:(id *)arg6;
- (id)description;
@property(readonly, copy, nonatomic) NSArray *keyPathComponents;
- (id)initWithIntegrationID:(id)arg1 targetTitle:(id)arg2 fileTitle:(id)arg3 methodTitle:(id)arg4 deviceTitle:(id)arg5 validationErrors:(id *)arg6;
- (id)initWithCodeCoverageKeyPath:(id)arg1 validationErrors:(id *)arg2;

@end

