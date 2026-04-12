#include "_main.hpp"

inline void PB10(std::string str_addr, std::string str_int10_list, std::string comment = "") {
    str_addr = string::replace(str_addr, "GeometryDash.exe+", "");
    ByteVector data;
    for (std::string str_byte : string::explode(" ", str_int10_list)) {
        data.push_back(utils::numFromString<uint8_t>(str_byte, 10).value_or(0));
    };
    patch(
        base::get() + utils::numFromString<int>(str_addr, 16).value_or(0),
        data,
        comment
    );
}
inline std::vector<std::string> bytesAsIntStrs(int value) {
    std::vector<std::string> result;
    for (int byteInt : intToBytes(value)) result.push_back(numToString(byteInt));
    return result;
}

void ruinGame() {
    
    auto Fonts = bytesAsIntStrs(SETTING(int64_t, "Fonts"));
    auto Backgrounds = bytesAsIntStrs(SETTING(int64_t, "Backgrounds"));
    auto Grounds = bytesAsIntStrs(SETTING(int64_t, "Grounds"));
    auto MiddleGrounds = bytesAsIntStrs(SETTING(int64_t, "MiddleGrounds"));
    auto LoadingLayerBackground = bytesAsIntStrs(SETTING(int64_t, "LoadingLayerBackground"));

#define v3(...) __VA_ARGS__[0], __VA_ARGS__[1], __VA_ARGS__[2], __VA_ARGS__[3]
#define v2(...) __VA_ARGS__[0], __VA_ARGS__[1], __VA_ARGS__[2]
#define fmt(...) fmt::format(__VA_ARGS__)

    //======================================WPuFTbl===================================
    //59

    PB10("GeometryDash.exe+1797CA", fmt("184 {} {} {} {}", v3(Fonts)), "//");
    PB10("GeometryDash.exe+27C8BC", fmt("184 {} {} {} {}", v3(Fonts)), "// - MACCuB WPuFTOB");
    PB10("GeometryDash.exe+27C7B2", fmt("187 {} {} {} {}", v3(Fonts)), "//         - BuDuMOCTb WPuFTOB ");

    PB10("GeometryDash.exe+17987A", fmt("184 {} {} {} {}", v3(Fonts)), "//   - WPuFT. (?)");
    PB10("GeometryDash.exe+181A22", fmt("187 {} {} {} {}", v3(Fonts)), "//    - WPuFT2. (?)");
    PB10("GeometryDash.exe+1FFAE7", fmt("187 {} {} {} {}", v3(Fonts)), "//     - WPuFT3. (?)");
    PB10("GeometryDash.exe+2CB650", fmt("187 {} {} {} {}", v3(Fonts)), "//     - WPuFT4. (?)");
    PB10("GeometryDash.exe+A4E78", fmt("191 {} {} {} {}", v3(Fonts)), "//      - WPuFT5. (?)");
    PB10("GeometryDash.exe+A51CF", fmt("131 248 {} 15 76", Fonts[0]), "//       - WPuFT6 - TEXT?. (?)");
    PB10("GeometryDash.exe+19D82C", fmt("187 {} {} {} {}", v3(Fonts)), "//        - WPuFT7 - . (?)");

    PB10("GeometryDash.exe+383E3A", fmt("187 {} {} {} {}", v3(Fonts)), "//          - WPuFT9 - . (?)");
    PB10("GeometryDash.exe+487140", fmt("187 {} {} {} {}", v3(Fonts)), "//           - WPuFT10 - . (?)");

    //======================================FOHbl===================================
    //59
    PB10("GeometryDash.exe+49D190", fmt("131 255 {} 126 203", Backgrounds[0]), "// - 6r (?)");
    PB10("GeometryDash.exe+495F70", fmt("184 {} {} {} {}", v3(Backgrounds)), "//  - 6r2 (?)");
    PB10("GeometryDash.exe+1FC6A0", fmt("131 255 {} 15 76", v3(Backgrounds)), "//   - 6r3 (nPuKOJl: Bbl6OP FOHA JlOMAETC9l)");
    PB10("GeometryDash.exe+1E949F", fmt("184 {} {} {} {}", v3(Backgrounds)), "//    - 6r4 (?)");


    PB10("GeometryDash.exe+1FC630", fmt("189 {} {} {} {}", v3(Backgrounds)), "// - 6r FOH B urPE");
    PB10("GeometryDash.exe+310B99", fmt("185 {} {} {} {}", v3(Backgrounds)), "//   - 6r B rJl MeHl-o");
    PB10("GeometryDash.exe+30DD22", fmt("186 {} {} {} {}", v3(LoadingLayerBackground)), "//  - 6r B 3arpy3o4Hou cueHe..");
    PB10("GeometryDash.exe+301D54", fmt("65 189 {} {} {} {}", v3(Backgrounds)), "// - MaccuB kHonku 6r");

    PB10("GeometryDash.exe+44644F", fmt("184 {} {} {} {}", v3(Backgrounds)), "// - 6rKHonka (?)");
    PB10("GeometryDash.exe+445BCD", fmt("184 {} {} {} {}", v3(Backgrounds)), "//  - 6rKHonka2 (?)");
    PB10("GeometryDash.exe+2FF5CA", fmt("186 {} {} {} {}", v3(Backgrounds)), "//   - 6rKHonka3 (?)");
    PB10("GeometryDash.exe+2FF5C5", fmt("131 250 {} 126 7", Backgrounds[0]), "//    - 6rKHonka4 (?)");


    //======================================nOJlbl===================================
    //22
    PB10("GeometryDash.exe+179C2A", fmt("184 {} {} {} {}", v3(Grounds)), "// - nOJl B rJl MeHl-o ");
    PB10("GeometryDash.exe+26C0FB", fmt("184 {} {} {} {}", v3(Grounds)), "//  - nOJl B urpe");
    PB10("GeometryDash.exe+301D7B", fmt("65 189 {} {} {} {}", v3(Grounds)), "// - MaccuB kHonku nOJl");


    PB10("GeometryDash.exe+495E34", fmt("184 {} {} {} {}", v3(Grounds)), "// noJlbl (?)");

    //=====================================CPEDHEE nOJlE============================
    //3
    PB10("GeometryDash.exe+301DB1", fmt("68 141 104 {} 235", v3(MiddleGrounds)), "//  - MACCuB KHOnKu CPEDHEE nOJlE");

    PB10("GeometryDash.exe+1799DA", fmt("184 {} {} {} {}", v3(MiddleGrounds)), "// -  CPEDHEE nOJlE (?)");
    PB10("GeometryDash.exe+179C8C", fmt("131 248 {} 119 43", v3(MiddleGrounds)), "// - CPEDHEE nOJlE2 (?)");
    PB10("GeometryDash.exe+26CF16", fmt("184 {} {} {} {}", v3(MiddleGrounds)), "// - CPEDHEE nOJlE3 (?)");
    PB10("GeometryDash.exe+495D22", fmt("184 {} {} {} {}", v3(MiddleGrounds)), "//  - CPEDHEE nOJlE4 (?)");
    PB10("GeometryDash.exe+26D136", fmt("65 184 {} {} {} {}", v3(MiddleGrounds)), "//   - CPEDHEE nOJlE5 (?)");


    //===========================uKOHKu==========================================

#undef v3
#undef fmt

};

void settingChanged(SettingValue* val, bool checkNewOnes = false, bool first = false) {
    ruinGame();
    //checks
    auto errors = std::string("");
    matjson::Value asd = Mod::get()->getMetadata().getRawJSON();
    matjson::Value settings = asd["settings"];

    int min = 0;
    int count = 0;

#define nails(key) \
    min = checkNewOnes ? settings[key]["default"].as_int() : 0;\
    count = (SETTING(int64_t, key)); \
    min = first ? 1 : min; \
    count = first ? 1 : count; \
    if (val->getKey() == key) for (int i = count; i != min; i--)

    nails("Fonts") {
        auto ifnt = CCString::createWithFormat("gjFont%02d.fnt", i)->getCString();
        if (not cocos::fileExistsInSearchPaths(ifnt)) errors.append(fmt::format(
            "- <cr>font</c> <co>{}</c> <cr>isnt exists</c>\n",
            ifnt
        ));
        auto ipng = CCString::createWithFormat("gjFont%02d.png", i)->getCString();
        if (not cocos::fileExistsInSearchPaths(ipng)) errors.append(fmt::format(
            "- <cr>font texture</c> <co>{}</c> <cr>isnt exists</c>\n",
            ipng
        ));
    }

    nails("Backgrounds") {
        auto ipng = CCString::createWithFormat("game_bg_%02d_001.png", i)->getCString();
        if (not cocos::fileExistsInSearchPaths(ipng)) errors.append(fmt::format(
            "- <cr>bg texture</c> <co>{}</c> <cr>isnt exists</c>\n",
            ipng
        ));
    }

    nails("Grounds") {
        auto ipng = CCString::createWithFormat("groundSquare_%02d_001.png", i)->getCString();
        if (not cocos::fileExistsInSearchPaths(ipng)) errors.append(fmt::format(
            "- <cr>ground texture</c> <co>{}</c> <cr>isnt exists</c>\n",
            ipng
        ));
    }

    nails("MiddleGrounds") {
        auto ipng = CCString::createWithFormat("fg_%02d_001.png", i)->getCString();
        if (not cocos::fileExistsInSearchPaths(ipng)) errors.append(fmt::format(
            "- <cr>fg texture</c> <co>{}</c> <cr>isnt exists</c>\n",
            ipng
        ));
    }

    auto LoadingLayerBackground = (SETTING(int64_t, "LoadingLayerBackground"));
    auto LoadingLayerBackgroundPng = CCString::createWithFormat("game_bg_%02d_001.png", LoadingLayerBackground)->getCString();
    if (not cocos::fileExistsInSearchPaths(LoadingLayerBackgroundPng)) errors.append(fmt::format(
        "- <cr>bg texture</c> <co>{}</c> <cr>isnt exists</c>\n",
        LoadingLayerBackgroundPng
    ));

#undef nails

    if (errors.size() > 1) createWideMDPopup("Checks Warn", errors, "Oh Ok");
}

#include <Geode/modify/ItemInfoPopup.hpp>
class $modify(ItemInfoPopupExt, ItemInfoPopup) {
    $override static ItemInfoPopup* create(int p0, UnlockType p1) {
        auto __this = ItemInfoPopup::create(p0, p1);
        //nodes
        CCLabelBMFont* title = nullptr;
        CCLabelBMFont* box_title = nullptr;
        TextArea* box_text = nullptr;
        for (auto i = 0; i < __this->m_mainLayer->getChildrenCount(); i++) {
            if (auto node = cocos::getChild(__this->m_mainLayer, i)) {
                if (auto label = dynamic_cast<CCLabelBMFont*>(node)) {
                    if (not title) title = label;
                    else if (not box_title) box_title = label;
                }
                if (auto text = dynamic_cast<TextArea*>(node)) {
                    box_text = text;
                }
            }
        }
        if (!box_title) {
            box_title = CCLabelBMFont::create("", title->getFntFile());
            __this->m_buttonMenu->addChild(box_title);
            box_title->setScale(0.55f);
            box_title->setPositionY(98.f);
            auto filename = (title->getString() + std::string(" Title.txt"));
            box_title->setString(fmt::format("Can't find \"{}\"!", filename).data());
            auto path = CCFileUtils::sharedFileUtils()->fullPathForFilename(filename.data(), 0);
            auto in = std::ifstream(path);
            if (in.is_open()) {
                auto sstr = std::stringstream() << in.rdbuf();
                box_title->setString(sstr.str().data());
            }
        }
        if (!box_text) {
            box_text = TextArea::create("", "bigFont.fnt", 1.0f, 1000, { 0.5f, 0.5f }, 42.f, 0);
            __this->m_buttonMenu->addChild(box_text);
            box_text->setScale(0.35f);
            box_text->setPositionY(65.f);
            auto filename = (title->getString() + std::string(" Text.txt"));
            box_text->setString(fmt::format("<cr>And can't find \"</c><co>{}</c><cr>\"...</c>", filename).data());
            auto path = CCFileUtils::sharedFileUtils()->fullPathForFilename(filename.data(), 0);
            auto in = std::ifstream(path);
            if (in.is_open()) {
                auto sstr = std::stringstream() << in.rdbuf();
                box_text->setString(sstr.str().data());
            }
        }
        return __this;
    }
};
