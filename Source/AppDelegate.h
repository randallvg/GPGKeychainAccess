/*
 Copyright © Roman Zechmeister, 2017
 
 Diese Datei ist Teil von GPG Keychain.
 
 GPG Keychain ist freie Software. Sie können es unter den Bedingungen 
 der GNU General Public License, wie von der Free Software Foundation 
 veröffentlicht, weitergeben und/oder modifizieren, entweder gemäß 
 Version 3 der Lizenz oder (nach Ihrer Option) jeder späteren Version.
 
 Die Veröffentlichung von GPG Keychain erfolgt in der Hoffnung, daß es Ihnen 
 von Nutzen sein wird, aber ohne irgendeine Garantie, sogar ohne die implizite 
 Garantie der Marktreife oder der Verwendbarkeit für einen bestimmten Zweck. 
 Details finden Sie in der GNU General Public License.
 
 Sie sollten ein Exemplar der GNU General Public License zusammen mit diesem 
 Programm erhalten haben. Falls nicht, siehe <http://www.gnu.org/licenses/>.
*/

#import "GKTableView.h"

@interface GPGKeychainAppDelegate : NSObject <NSWindowDelegate, NSApplicationDelegate> {
	BOOL rowWasSelected;
	BOOL _shouldTerminate;
}

@property (nonatomic, assign) IBOutlet NSWindow *window;
@property (nonatomic, weak) IBOutlet NSWindow *inspectorWindow;
@property (nonatomic, weak) IBOutlet GKTableView *keyTable;
@property (nonatomic, weak) IBOutlet NSTableView *userIDTable, *subkeyTable, *signatureTable;
@property (nonatomic) BOOL inspectorVisible;
@property (nonatomic, strong) NSTextView *fieldEditor;


- (IBAction)toggleInspector:(id)sender;





- (void)generateContextMenuForTable:(NSTableView *)table;

- (IBAction)selectHeaderVisibility:(NSMenuItem *)sender;
- (IBAction)showPreferences:(id)sender;
- (IBAction)showSupport:(id)sender;
- (IBAction)sendReport:(id)sender;
- (IBAction)showKeyDetails:(id)sender;

@end
