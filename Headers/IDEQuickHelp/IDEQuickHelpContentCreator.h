//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IDEQuickHelpContentCreator : NSObject
{
    unsigned long long _exclusionMask;
}

@property unsigned long long exclusionMask; // @synthesize exclusionMask=_exclusionMask;
- (id)contentForXMLCommentBlock:(id)arg1 withQueryResult:(id)arg2;
- (id)contentForQueryResult:(id)arg1;
- (id)_declarationFromElement:(id)arg1;
- (id)elementForLinkingString:(id)arg1 withURL:(id)arg2 titleAttribute:(id)arg3 elementName:(id)arg4;
- (id)elementForUnlinkedString:(id)arg1 elementName:(id)arg2;
- (id)elementForWrappedHTMLString:(id)arg1 elementName:(id)arg2;

@end
