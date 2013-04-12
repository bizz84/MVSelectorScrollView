/*
 * This file is part of the MVSelectorScrollView package.
 * (c) Andrea Bizzotto <bizz84@gmail.com>
 *
 * For the full copyright and license information, please view the LICENSE.md
 * file that was distributed with this source code.
 */


#import <UIKit/UIKit.h>
#import "MVSelectorScrollView.h"

@interface ViewController : UIViewController<MVSelectorScrollViewDelegate>

@property IBOutlet MVSelectorScrollView *scrollView1;
@property IBOutlet UILabel *indicator1;

@property IBOutlet MVSelectorScrollView *scrollView2;
@property IBOutlet UILabel *indicator2;

@end
