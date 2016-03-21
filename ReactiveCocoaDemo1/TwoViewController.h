//
//  TwoViewController.h
//  ReactiveCocoaDemo1
//
//  Created by yanggx on 16/3/18.
//  Copyright © 2016年 yangguixia. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TwoViewController : UIViewController

@property (nonatomic, strong) RACSubject *delegateSignal;

@end
