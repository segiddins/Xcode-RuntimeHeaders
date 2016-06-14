//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDEProductsInspectable-Protocol.h"

@class DVTCrashLog, DVTCrashPoint, DVTProductCategory, NSString;

@interface IDECrashPointInspectable : NSObject <IDEProductsInspectable>
{
    DVTCrashPoint *_crashPoint;
    DVTCrashLog *_crashLog;
    DVTProductCategory *_productCategory;
}

+ (id)keyPathsForValuesAffectingMarkAsResolvedButtonTitle;
@property(readonly) DVTProductCategory *productCategory; // @synthesize productCategory=_productCategory;
@property(readonly) DVTCrashLog *crashLog; // @synthesize crashLog=_crashLog;
@property(readonly) DVTCrashPoint *crashPoint; // @synthesize crashPoint=_crashPoint;
- (void).cxx_destruct;
- (id)markAsResolvedButtonTitle;
- (id)crashLogDetails;
@property(readonly) NSString *inspectableUtilityExtensionIdentifier;
- (id)inspectableIcon;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithCrashPoint:(id)arg1 crashLog:(id)arg2 productCategory:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

