#import <UIKit/UIKit.h>
#import "MatchaView.h"
#import "MatchaProtobuf.h"

@interface MatchaTextView : UILabel <MatchaChildView>
@property (nonatomic, weak) MatchaViewNode *viewNode;
@end
