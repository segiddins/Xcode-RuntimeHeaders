//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DVTFoundation/DVTDocumentLocation.h>

@class DVTCoverageDataContainer, NSString;

@interface IDECoverageResultsDocumentLocation : DVTDocumentLocation
{
    DVTCoverageDataContainer *_coverageData;
    NSString *_itemIdentifier;
}

@property(retain, nonatomic) NSString *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property(retain, nonatomic) DVTCoverageDataContainer *coverageData; // @synthesize coverageData=_coverageData;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

