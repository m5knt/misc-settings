// Standard:
// ColumnLimit:
// ContinuationIndentWidth:
// DeriveLineEnding:
// DerivePointerAlignment:
// DisableFormat:
// DeriveLineEnding:
// ExperimentalAutoDetectBinPacking:
// UseCRLF:
// ForEachMacros:
// IndentWidth:
// MacroBlockBegin:
// MacroBlockEnd:
// MaxEmptyLinesToKeep:
// TabWidth:
// UseTab:

// 他の言語向け
// JavaImportGroups:
// JavaScriptQuotes:
// JavaScriptWrapImports:
// ObjCBinPackProtocolList:
// ObjCBlockIndentWidth:
// ObjCSpaceAfterProperty:
// ObjCSpaceBeforeProtocolList:
// SpacesInContainerLiterals

// ReflowComments:
// SpaceBeforeParens:
// SpacesInConditionalStatement:

/*
 *
 */

// IncludeBlocks:
// IncludeCategories:
// IncludeIsMainRegex:
// IncludeIsMainSourceRegex:
// SortIncludes:
#include <iostream>
#include <vector>

/*
 *
 */

// AlignConsecutiveMacros:
#define SHORT_NAME FB
#define LONG_NAME FooBar

// AlignEscapedNewlines:
#define A                                                                                                              \
    int aaaa;                                                                                                          \
    int b;                                                                                                             \
    int dddddddddd;

// IndentPPDirectives:
#if DEBUG
#if DEBUG
#endif
#elifdef RELEaSE
#else
#endif

// CompactNamespaces:
// NamespaceIndentation:
// NamespaceMacros:
namespace NAMESPACE_1ST
{
namespace NAMESPACE_2ND
{

struct Base
{
};

// BreakInheritanceList:
// SpaceBeforeInheritanceColon:
class Derived : public Base
{

    // AccessModifierOffset:
public:
    // AllowAllConstructorInitializersOnNextLine:
    // BreakConstructorInitializers:
    // ConstructorInitializerAllOnOneLineOrOnePerLine:
    // ConstructorInitializerIndentWidth:
    // Cpp11BracedListStyle:
    // SpaceBeforeCtorInitializerColon:
    Derived()
        : Base{}
        , member0_{1}
        , member1_{2}
    {
        // AlignConsecutiveAssignments:
        // AlignConsecutiveDeclarations:
        // AlignTrailingComments:
        // SpacesBeforeTrailingComments:
        [[maybe_unused]] int a = 1;     //
        [[maybe_unused]] long bb = 1;   //
        [[maybe_unused]] float ccc = 1; //

        // AlignOperands:
        // BreakBeforeBinaryOperators: 効いていない？
        auto aaa = 0000000000 + 1111111111 + 2222222222 + 3333333333 + 4444444444 + 5555555555 + 6666666666 +
                   7777777777 + 8888888888 + 9999999999;

        auto bbb = 0000000000 + //
                   1111111111 + //
                   2222222222 + //
                   3333333333 + //
                   4444444444 + //
                   5555555555 + //
                   6666666666 + //
                   7777777777 + //
                   8888888888 + //
                   9999999999;

        // AlignAfterOpenBracket: 効いていない？
        // AllowAllArgumentsOnNextLine:
        // BinPackArguments:
        Call(0000000000, 1111111111, 2222222222, 3333333333, 4444444444, 5555555555, 6666666666, 7777777777, 8888888888,
             9999999999);

        Call(0000000000, //
             1111111111, //
             2222222222, //
             3333333333, //
             4444444444, //
             5555555555, //
             6666666666, //
             7777777777, //
             8888888888, //
             9999999999);

        // AllowShortBlocksOnASingleLine:
        while (true) {}

        while (true) { continue; }

        // AllowShortCaseLabelsOnASingleLine:
        // IndentCaseLabels
        auto b = 0;
        auto x = 0;
        switch (b)
        {
        case 1:
            x = 1;
            break;
        case 2:
            return;
        }

        // AllowShortIfStatementsOnASingleLine:
        if (a) return;
        else
        {
            return;
        }

        // AllowShortLambdasOnASingleLine:
        auto lambda = [](int a) { /**/ };
        auto lambda2 = [](int a) { return a; };

        // AllowShortLoopsOnASingleLine:
        while (true) continue;

        // AlwaysBreakBeforeMultilineStrings:
        // BreakStringLiterals:
        auto ddd = "aaaa"
                   "bbbb"
                   "cccc";

        // BreakBeforeBraces: そこら中なので割愛

        // BreakBeforeTernaryOperators: 効いていない？
        auto eee = 1111111111.1111111111'1111111111'1111111111'1111111111'1111111111'1111111111 ? 2222222222.2222222222
                                                                                                : 3333333333.3333333333;

        // DerivePointerAlignment
        // PointerAlignment
        auto* pointer = static_cast<void*>(0);
        auto& refer = pointer;

        // IndentGotoLabels
    LABEL:

        // KeepEmptyLinesAtTheStartOfBlocks:
        // MaxEmptyLinesToKeep
        if (true)
        {

            // ↑空の2行にしてフォーマット確認の事
        }

        // SpaceBeforeAssignmentOperators:
        // SpaceAfterLogicalNot:
        auto eee = !0;

        // SpaceBeforeCpp11BracedList
        auto list = std::vector<int>{1, 2, 3, 4};

        // SpaceBeforeRangeBasedForLoopColon:
        for ([[maybe_unused]] auto v : list) { static_cast<void>(0); }

        // SpaceBeforeSquareBrackets:
        // SpacesInSquareBrackets:
        int sq[5]{};

        // SpaceBeforeSquareBrackets: エラー
        // SpaceInEmptyBlock: エラー
        // SpaceInEmptyParentheses:
        []() {}();

        // SpaceAfterCStyleCast:
        // SpacesInAngles:
        // SpacesInCStyleCastParentheses:
        // SpacesInParentheses:
        (void)static_cast<void>(0);
    }

    // AllowAllParametersOfDeclarationOnNextLine:
    // AlwaysBreakAfterReturnType:
    // BinPackParameters:
    auto Func0(int aaaaaaaaaa, int bbbbbbbbbb, int cccccccccc, int dddddddddd, int eeeeeeeeee, int ffffffffff,
               int gggggggggg) -> auto
    {
        static_cast<void>(aaaaaaaaaa);
        static_cast<void>(bbbbbbbbbb);
        static_cast<void>(cccccccccc);
        static_cast<void>(dddddddddd);
        static_cast<void>(eeeeeeeeee);
        static_cast<void>(ffffffffff);
        static_cast<void>(gggggggggg);
        return;
    }

    auto Func1(int aaaaaaaaaa, //
               int bbbbbbbbbb, //
               int cccccccccc, //
               int dddddddddd, //
               int eeeeeeeeee, //
               int ffffffffff, //
               int gggggggggg)  //
        -> auto
    {
        static_cast<void>(aaaaaaaaaa);
        static_cast<void>(bbbbbbbbbb);
        static_cast<void>(cccccccccc);
        static_cast<void>(dddddddddd);
        static_cast<void>(eeeeeeeeee);
        static_cast<void>(ffffffffff);
        static_cast<void>(gggggggggg);
        return;
    }

    // AllowShortFunctionsOnASingleLine:
    auto Func(int a, int b) -> auto
    {
        return a + b;
    }

    // AlwaysBreakTemplateDeclarations:
    // SpaceAfterTemplateKeyword:
    template <class... Args> auto Call([[maybe_unused]] Args&&... args) -> auto
    {
        return;
    }

    int member0_;
    int member1_;
};

// SortUsingDeclarations:
using FastInteger = int_fast32_t;
using LoooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooongReturnType =
    int;
// IndentWrappedFunctionNames:
LoooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooongReturnType
    Func()
{
    static_cast<void>(0);
    return 0;
}

// FixNamespaceComments:
} // namespace NAMESPACE_2ND
} // namespace NAMESPACE_1ST

/*
 *
 */

int main()
{
    std::cout << "Hello World!\n";
}
