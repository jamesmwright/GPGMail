//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSSpellChecker.h"

@interface ComposeSpellChecker : NSSpellChecker
{
}

- (void)closeSpellDocumentWithTag:(long long)arg1;	// IMP=0x0000000100075d92
- (id)spellingPanel;	// IMP=0x0000000100095087
- (long long)requestCheckingOfString:(id)arg1 range:(struct _NSRange)arg2 types:(unsigned long long)arg3 options:(id)arg4 inSpellDocumentWithTag:(long long)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x0000000100053e7d
- (id)checkString:(id)arg1 range:(struct _NSRange)arg2 types:(unsigned long long)arg3 options:(id)arg4 inSpellDocumentWithTag:(long long)arg5 orthography:(id *)arg6 wordCount:(long long *)arg7;	// IMP=0x00000001000776b8
- (BOOL)_unifiedTextCheckingResultsHaveErrors:(id)arg1;	// IMP=0x00000001001075d1
- (void)_didCheckSpellDocumentWithTag:(long long)arg1 hasErrors:(BOOL)arg2;	// IMP=0x00000001001072ab
- (void)_willCheckSpellDocumentWithTag:(long long)arg1;	// IMP=0x000000010010729e
- (void)_spellPanelDidClose:(id)arg1;	// IMP=0x00000001001070f2
- (void)_postingTimerFired:(id)arg1;	// IMP=0x000000010010701f
@property(readonly, nonatomic) long long currentSpellDocumentTag;
- (void)setPostCompletedNotification:(BOOL)arg1 forSpellDocumentWithTag:(long long)arg2;	// IMP=0x0000000100075df7
- (void)_removeObjectForSpellDocumentTag:(long long)arg1;	// IMP=0x0000000100106f6f
- (id)_objectForSpellDocumentTag:(long long)arg1;	// IMP=0x0000000100106ef2
- (void)_setObject:(id)arg1 forSpellDocumentTag:(long long)arg2;	// IMP=0x0000000100106e18

@end
