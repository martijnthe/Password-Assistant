// http://www.cocoadev.com/index.pl?PasswordAssistant

#import <Cocoa/Cocoa.h>

@class NSTextField, NSWindow, SFPasswordAsstView;

@interface SFPasswordAssistantInspectorController : NSObject
{
    NSWindow *_baseWindow;
    NSWindow *_passwordAssistantPanel;
    SFPasswordAsstView *_passwordAssistantView;
    NSTextField *_originalPassword;
    NSTextField *_newPassword;
    NSTextField *_verifyPassword;
    NSTextField *_extOriginalPassword;
    NSTextField *_extNewPassword;
    NSTextField *_extVerifyPassword;
}

- (void)setVerifyPasswordField:(id)arg1;
- (id)newPasswordField;
- (void)setNewPasswordField:(id)arg1;
- (void)setOriginalPasswordField:(id)arg1;
- (void)setBaseWindow:(id)arg1;
- (id)baseWindow;
- (void)ourPanelWillClose:(id)arg1;
- (void)windowDidEndSheet:(id)arg1;
- (void)baseWindowWillClose:(id)arg1;
- (void)closePasswordAssistantPanel;
- (void)showPasswordAssistantPanel:(id)sender;
- (void)loadOurNib;
- (void)dealloc;
- (id)init;

@end


@interface SFPasswordAssistantInspectorController (Panel)
- (NSPanel*)panel;
@end