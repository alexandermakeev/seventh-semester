#include <gtest/gtest.h>
#include "../../src/lab3/Util.h"

TEST(test, is_dialog_test) {
    std::string dialogs[] = {
            "   – Я хотел бы поговорить с вами об одном дельце. ( Гоголь)   ",
            "Чичиков обратился к нему с такими словами: «Я хотел бы поговорить с вами об одном дельце».",
            "– Вам нужно мертвых душ? – спросил Собакевич просто, без малейшего удивления… (Гоголь)",
            "«Вам нужно мертвых душ?» – спросил Собакевич просто, без малейшего удивления…",
            "– Да, – отвечал Чичиков и смягчил выражение, прибавивши, – несуществующих. (Гоголь)",
            "«Да, – отвечал Чичиков и смягчил выражение, прибавивши, – несуществующих». ",
            "– Здравствуйте! – и подошел к окну… (Драгунский)",
            "Он сказал: «Здравствуйте!» – и подошел к окну.",
    };
    Util util;
    for (int i = 0; i < sizeof(dialogs) / sizeof(*dialogs); ++i)
        EXPECT_TRUE(util.isDialog(dialogs[i]));
}

TEST(test, is_not_dialog_test) {
    std::string dialogs[] = {
            "",
            "Я - хотел бы поговорить с вами об одном дельце. ( Гоголь)",
            "Чичиков обратился к нему с такими словами «Я хотел бы поговорить с вами об одном дельце».",
            "Вам нужно мертвых душ? – спросил Собакевич просто, без малейшего удивления… (Гоголь)",
            "«Вам нужно мертвых душ? – спросил Собакевич просто, без малейшего удивления…",
            "Да, – отвечал Чичиков и смягчил выражение, прибавивши, – несуществующих. (Гоголь)",
            "«Да, – отвечал Чичиков и смягчил выражение, прибавивши, – несуществующих. ",
            "Здравствуйте! – и подошел к окну… (Драгунский)",
            "Он сказал «Здравствуйте!» – и подошел к окну.",
    };
    Util util;
    for (int i = 0; i < sizeof(dialogs) / sizeof(*dialogs); ++i)
        EXPECT_FALSE(util.isDialog(dialogs[i]));
}