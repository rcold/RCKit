//
//  RCSearchBar.h
//  RCKit
//
//  Created by Yeuham Wang on 16/3/22.
//  Copyright (c) 2016 Yeuham Wang.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#import <UIKit/UIKit.h>

NS_CLASS_AVAILABLE_IOS(7_0) @interface RCSearchBar : UISearchBar {
    UITextField *_searchBarTextField;
}

@property (copy, nonatomic) NSAttributedString *attributedText;
@property (strong, nonatomic) UIFont *font;
@property (strong, nonatomic) UIColor *textColor;
@property (nonatomic) NSTextAlignment textAlignment;
@property (copy, nonatomic) NSDictionary *defaultTextAttributes;
@property (copy, nonatomic) NSAttributedString *attributedPlaceholder;
@property (strong, nonatomic) UIColor *placeholderColor;
@property (copy, nonatomic) NSDictionary *typingAttributes;
@property (nonatomic) BOOL adjustsFontSizeToFitWidth;
@property (nonatomic) CGFloat minimumFontSize;
@property (nonatomic) UITextFieldViewMode clearButtonMode;

@end
